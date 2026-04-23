#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F551778D210075EF_DisableInteractReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_38A71F76592AF3BC;
class Class_1_64D890C466F37235;
class Class_2_36C95D73718D07B1;
class Class_2_37D832480CB327E1;
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoDBBridgeManager; }
namespace RPG::Client { class MonoMapRotationVolumeV2; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_F551778D210075EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AF2480)
#define CLASS_2_F551778D210075EF_GET_ISDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x11AF79D0)
#define CLASS_2_F551778D210075EF_GET_LASTACTIVETRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x11AF79B0)
#define CLASS_2_F551778D210075EF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11AF3590)
#define CLASS_2_F551778D210075EF_METHOD_2_08C9B39C07B526E4_OFFSET UNITYSDK_OFFSET(0x11AF5370)
#define CLASS_2_F551778D210075EF_METHOD_2_0A4465F784FBB469_OFFSET UNITYSDK_OFFSET(0x11AF4B70)
#define CLASS_2_F551778D210075EF_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x11AF5730)
#define CLASS_2_F551778D210075EF_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x11AF7410)
#define CLASS_2_F551778D210075EF_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11AF6080)
#define CLASS_2_F551778D210075EF_METHOD_2_3A36C8AB90312738_OFFSET UNITYSDK_OFFSET(0x11AF4450)
#define CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_1_OFFSET UNITYSDK_OFFSET(0x11AF45F0)
#define CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_OFFSET UNITYSDK_OFFSET(0x11AF4590)
#define CLASS_2_F551778D210075EF_METHOD_2_3E40076576EE6BC1_OFFSET UNITYSDK_OFFSET(0x11AF66E0)
#define CLASS_2_F551778D210075EF_METHOD_2_41077282BAA6911D_OFFSET UNITYSDK_OFFSET(0x11AF6420)
#define CLASS_2_F551778D210075EF_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x11AF3AA0)
#define CLASS_2_F551778D210075EF_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x11AF2DA0)
#define CLASS_2_F551778D210075EF_METHOD_2_4A98B188F2AC4FAD_OFFSET UNITYSDK_OFFSET(0x11AF5130)
#define CLASS_2_F551778D210075EF_METHOD_2_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x11AF5420)
#define CLASS_2_F551778D210075EF_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x11AF5790)
#define CLASS_2_F551778D210075EF_METHOD_2_67A6C41ED100A1D7_OFFSET UNITYSDK_OFFSET(0x11AF6990)
#define CLASS_2_F551778D210075EF_METHOD_2_7A522B5EE89C71E9_1_OFFSET UNITYSDK_OFFSET(0x11AF3510)
#define CLASS_2_F551778D210075EF_METHOD_2_7A522B5EE89C71E9_OFFSET UNITYSDK_OFFSET(0x11AF4510)
#define CLASS_2_F551778D210075EF_METHOD_2_7F4EBEC55EBE2D81_1_OFFSET UNITYSDK_OFFSET(0x11AF6010)
#define CLASS_2_F551778D210075EF_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x11AF50C0)
#define CLASS_2_F551778D210075EF_METHOD_2_859206F1760B11B9_OFFSET UNITYSDK_OFFSET(0x11AF7140)
#define CLASS_2_F551778D210075EF_METHOD_2_99650286F8041067_OFFSET UNITYSDK_OFFSET(0x11AF7520)
#define CLASS_2_F551778D210075EF_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x11AF69E0)
#define CLASS_2_F551778D210075EF_METHOD_2_9B9F300168B2069B_OFFSET UNITYSDK_OFFSET(0x11AF5650)
#define CLASS_2_F551778D210075EF_METHOD_2_9CAA4D50AC3C601B_OFFSET UNITYSDK_OFFSET(0x11AF3780)
#define CLASS_2_F551778D210075EF_METHOD_2_9DD544F9DF6D7F12_OFFSET UNITYSDK_OFFSET(0x11AF7770)
#define CLASS_2_F551778D210075EF_METHOD_2_9F64155B2DF20B17_OFFSET UNITYSDK_OFFSET(0x11AF5F50)
#define CLASS_2_F551778D210075EF_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x11AF3380)
#define CLASS_2_F551778D210075EF_METHOD_2_A7BE57FF999ACA25_1_OFFSET UNITYSDK_OFFSET(0x11AF7660)
#define CLASS_2_F551778D210075EF_METHOD_2_A7BE57FF999ACA25_OFFSET UNITYSDK_OFFSET(0x11AF6370)
#define CLASS_2_F551778D210075EF_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x11AF4080)
#define CLASS_2_F551778D210075EF_METHOD_2_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x11AF7710)
#define CLASS_2_F551778D210075EF_METHOD_2_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0x11AF6320)
#define CLASS_2_F551778D210075EF_METHOD_2_D0D2894DFBF32E4A_OFFSET UNITYSDK_OFFSET(0x11AF43F0)
#define CLASS_2_F551778D210075EF_METHOD_2_D428C26AEB49336E_OFFSET UNITYSDK_OFFSET(0x11AF4BC0)
#define CLASS_2_F551778D210075EF_METHOD_2_DED00B88899E5DC5_OFFSET UNITYSDK_OFFSET(0x11AF4A30)
#define CLASS_2_F551778D210075EF_METHOD_2_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x11AF2CC0)
#define CLASS_2_F551778D210075EF_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11AF2BE0)
#define CLASS_2_F551778D210075EF_METHOD_2_E6F268B3A959DA7E_OFFSET UNITYSDK_OFFSET(0x11AF58E0)
#define CLASS_2_F551778D210075EF_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x11AF5AF0)
#define CLASS_2_F551778D210075EF_METHOD_2_EB754F983527AB71_OFFSET UNITYSDK_OFFSET(0x11AF3800)
#define CLASS_2_F551778D210075EF_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x11AF5A70)
#define CLASS_2_F551778D210075EF_METHOD_2_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0x11AF42C0)
#define CLASS_2_F551778D210075EF_METHOD_2_F67F8F829B4FE38E_1_OFFSET UNITYSDK_OFFSET(0x11AF6200)
#define CLASS_2_F551778D210075EF_METHOD_2_F67F8F829B4FE38E_OFFSET UNITYSDK_OFFSET(0x11AF60E0)
#define CLASS_2_F551778D210075EF_METHOD_2_FBD781D4EF80DB4D_OFFSET UNITYSDK_OFFSET(0x11AF54C0)
#define CLASS_2_F551778D210075EF_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x11AF4650)
#define CLASS_2_F551778D210075EF_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x11AF3330)
#define CLASS_2_F551778D210075EF_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x11AF49E0)
#define CLASS_2_F551778D210075EF_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x11AF4B30)
#define CLASS_2_F551778D210075EF_SET_ISDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x11AF79E0)
#define CLASS_2_F551778D210075EF_SET_LASTACTIVETRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x11AF79C0)
#define CLASS_2_F551778D210075EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AF79F0)
#define CLASS_2_F551778D210075EF__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF2470)
#define CLASS_2_F551778D210075EF___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11AF7A80)

inline static constexpr unsigned int Class_2_F551778D210075EF_TypeDefinitionIndex = 52832;

class Class_2_F551778D210075EF : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F551778D210075EF_TypeDefinitionIndex)->GetStaticField(0xF540);
	}
	static ::System::Int32* StaticGet_Field_2_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F551778D210075EF_TypeDefinitionIndex)->GetStaticField(0xF544);
	}
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F551778D210075EF_TypeDefinitionIndex)->GetStaticField(0xF548);
	}
	// static const ::System::Int32 Field_2_26 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_27 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_28 = 0x2; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	::Class_1_64D890C466F37235* Field_2_2; // 0x18
	::RPG::GameCore::PropComponent* Field_2_7; // 0x20
	::RPG::Client::MapPropDef* Field_2_3; // 0x28
	::UnityEngine::Coroutine* Field_2_16; // 0x30
	::RPG::Client::MonoMapRotationVolumeV2* Field_2_11; // 0x38
	::RPG::Client::MonoDBBridgeManager* Field_2_12; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_38A71F76592AF3BC*>* Field_2_18; // 0x48
	::System::String* Field_2_19; // 0x50
	::UnityEngine::Coroutine* Field_2_17; // 0x58
	::RPG::GameCore::ColliderTriggerComponent* Field_2_8; // 0x60
	::Class_2_37D832480CB327E1* Field_2_10; // 0x68
	::Class_2_36C95D73718D07B1* Field_2_6; // 0x70
	::RPG::GameCore::CharacterVisibleComponent* Field_2_9; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_20; // 0x80
	::RPG::Client::ReasonBool_1<::Class_2_F551778D210075EF_DisableInteractReason> Field_2_25; // 0x88
	::System::UInt32 Field_2_24; // 0x90
	::System::Single Field_2_5; // 0x94
	::System::UInt32 _LastActiveTriggerIndex_k__BackingField; // 0x98
	::System::Boolean Field_2_22; // 0x9C
	::System::Boolean Field_2_4; // 0x9D
	::System::Boolean _IsDisposable_k__BackingField; // 0x9E
	::System::Boolean Field_2_21; // 0x9F
	::UnityEngine::Matrix4x4 Field_2_23; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_DISPOSE_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_3DEA63D69EBFCE9B(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DEA63D69EBFCE9B_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A522B5EE89C71E9(::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_7A522B5EE89C71E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A522B5EE89C71E9_1(::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_7A522B5EE89C71E9_1_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_0A4465F784FBB469(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_0A4465F784FBB469_OFFSET))(this, a1);
	}

	::System::Void Method_2_D428C26AEB49336E(::Il2CppArray<::Class_1_38A71F76592AF3BC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_38A71F76592AF3BC*>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_D428C26AEB49336E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4A98B188F2AC4FAD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_4A98B188F2AC4FAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4C27DE82B2DFE27A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B9F300168B2069B(::System::Boolean a1, ::Class_2_F551778D210075EF_DisableInteractReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_F551778D210075EF_DisableInteractReason))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_9B9F300168B2069B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A36C8AB90312738(::RPG::GameCore::MapRotationVolumeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeState))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3A36C8AB90312738_OFFSET))(this, a1);
	}

	::System::Void Method_2_EFF275E2C18C04F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_EFF275E2C18C04F2_OFFSET))(this);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_E6F268B3A959DA7E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_E6F268B3A959DA7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FBD781D4EF80DB4D(::System::Single a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_FBD781D4EF80DB4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_2_9F64155B2DF20B17(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_9F64155B2DF20B17_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0D2894DFBF32E4A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_D0D2894DFBF32E4A_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_7F4EBEC55EBE2D81_1_OFFSET))(this);
	}

	::System::Void Method_2_08C9B39C07B526E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_08C9B39C07B526E4_OFFSET))(this);
	}

	::System::Void Method_2_F67F8F829B4FE38E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_F67F8F829B4FE38E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F67F8F829B4FE38E_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_F67F8F829B4FE38E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF622B900A7F3625()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_BF622B900A7F3625_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_A7BE57FF999ACA25(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_A7BE57FF999ACA25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41077282BAA6911D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_41077282BAA6911D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_3E40076576EE6BC1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3E40076576EE6BC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DED00B88899E5DC5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_DED00B88899E5DC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_67A6C41ED100A1D7(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_67A6C41ED100A1D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB754F983527AB71(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_EB754F983527AB71_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_859206F1760B11B9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_859206F1760B11B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_A7BE57FF999ACA25_1(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_A7BE57FF999ACA25_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99650286F8041067(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_99650286F8041067_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationVolumeState Method_2_9CAA4D50AC3C601B()
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_9CAA4D50AC3C601B_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_B7BFE5D35A542E8B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_B7BFE5D35A542E8B_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_9DD544F9DF6D7F12()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_9DD544F9DF6D7F12_OFFSET))(this);
	}

	::System::UInt32 get_LastActiveTriggerIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_GET_LASTACTIVETRIGGERINDEX_OFFSET))(this);
	}

	::System::Void set_LastActiveTriggerIndex(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_SET_LASTACTIVETRIGGERINDEX_OFFSET))(this, value);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsDisposable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_GET_ISDISPOSABLE_OFFSET))(this);
	}

	::System::Void set_IsDisposable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_SET_ISDISPOSABLE_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
