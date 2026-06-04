#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F551778D210075EF_DisableInteractReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
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

#define CLASS_2_F551778D210075EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BEE370)
#define CLASS_2_F551778D210075EF_GET_ISDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x13BF3410)
#define CLASS_2_F551778D210075EF_GET_LASTACTIVETRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x13BF33F0)
#define CLASS_2_F551778D210075EF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13BEF120)
#define CLASS_2_F551778D210075EF_METHOD_2_08C9B39C07B526E4_OFFSET UNITYSDK_OFFSET(0x13BF0DD0)
#define CLASS_2_F551778D210075EF_METHOD_2_09A10F5CD917CB8F_OFFSET UNITYSDK_OFFSET(0x13BEFD10)
#define CLASS_2_F551778D210075EF_METHOD_2_0A4465F784FBB469_OFFSET UNITYSDK_OFFSET(0x13BF05E0)
#define CLASS_2_F551778D210075EF_METHOD_2_10459AB46D2E4445_1_OFFSET UNITYSDK_OFFSET(0x13BEF0A0)
#define CLASS_2_F551778D210075EF_METHOD_2_10459AB46D2E4445_OFFSET UNITYSDK_OFFSET(0x13BEFF80)
#define CLASS_2_F551778D210075EF_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x13BF1190)
#define CLASS_2_F551778D210075EF_METHOD_2_1352708442940A46_OFFSET UNITYSDK_OFFSET(0x13BF0B80)
#define CLASS_2_F551778D210075EF_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x13BF2E70)
#define CLASS_2_F551778D210075EF_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13BF1A90)
#define CLASS_2_F551778D210075EF_METHOD_2_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x13BF1D90)
#define CLASS_2_F551778D210075EF_METHOD_2_3A36C8AB90312738_OFFSET UNITYSDK_OFFSET(0x13BEFEC0)
#define CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_1_OFFSET UNITYSDK_OFFSET(0x13BF0060)
#define CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_OFFSET UNITYSDK_OFFSET(0x13BF0000)
#define CLASS_2_F551778D210075EF_METHOD_2_41077282BAA6911D_OFFSET UNITYSDK_OFFSET(0x13BF1E90)
#define CLASS_2_F551778D210075EF_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x13BF1530)
#define CLASS_2_F551778D210075EF_METHOD_2_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x13BF0E80)
#define CLASS_2_F551778D210075EF_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x13BF11F0)
#define CLASS_2_F551778D210075EF_METHOD_2_5426D9A82A681A40_1_OFFSET UNITYSDK_OFFSET(0x13BF1C40)
#define CLASS_2_F551778D210075EF_METHOD_2_5426D9A82A681A40_OFFSET UNITYSDK_OFFSET(0x13BF1AF0)
#define CLASS_2_F551778D210075EF_METHOD_2_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x13BF14C0)
#define CLASS_2_F551778D210075EF_METHOD_2_67A6C41ED100A1D7_OFFSET UNITYSDK_OFFSET(0x13BF23F0)
#define CLASS_2_F551778D210075EF_METHOD_2_7F4EBEC55EBE2D81_1_OFFSET UNITYSDK_OFFSET(0x13BF1A20)
#define CLASS_2_F551778D210075EF_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x13BF0B10)
#define CLASS_2_F551778D210075EF_METHOD_2_859206F1760B11B9_OFFSET UNITYSDK_OFFSET(0x13BF2BA0)
#define CLASS_2_F551778D210075EF_METHOD_2_89D1E4A29C5AE86E_OFFSET UNITYSDK_OFFSET(0x13BEF380)
#define CLASS_2_F551778D210075EF_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x13BEEB40)
#define CLASS_2_F551778D210075EF_METHOD_2_96C420C04E19A969_OFFSET UNITYSDK_OFFSET(0x13BF1960)
#define CLASS_2_F551778D210075EF_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x13BEF620)
#define CLASS_2_F551778D210075EF_METHOD_2_99650286F8041067_OFFSET UNITYSDK_OFFSET(0x13BF2F80)
#define CLASS_2_F551778D210075EF_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x13BF2440)
#define CLASS_2_F551778D210075EF_METHOD_2_9DD544F9DF6D7F12_OFFSET UNITYSDK_OFFSET(0x13BF31C0)
#define CLASS_2_F551778D210075EF_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x13BEFBA0)
#define CLASS_2_F551778D210075EF_METHOD_2_A7BE57FF999ACA25_1_OFFSET UNITYSDK_OFFSET(0x13BF30B0)
#define CLASS_2_F551778D210075EF_METHOD_2_A7BE57FF999ACA25_OFFSET UNITYSDK_OFFSET(0x13BF1DE0)
#define CLASS_2_F551778D210075EF_METHOD_2_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0x13BF3160)
#define CLASS_2_F551778D210075EF_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x13BEEF00)
#define CLASS_2_F551778D210075EF_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x13BEFE60)
#define CLASS_2_F551778D210075EF_METHOD_2_D3DE8CAC39951624_OFFSET UNITYSDK_OFFSET(0x13BEF300)
#define CLASS_2_F551778D210075EF_METHOD_2_DDA88FBEF4C0CCEE_OFFSET UNITYSDK_OFFSET(0x13BF10B0)
#define CLASS_2_F551778D210075EF_METHOD_2_DED00B88899E5DC5_OFFSET UNITYSDK_OFFSET(0x13BF04A0)
#define CLASS_2_F551778D210075EF_METHOD_2_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x13BEEA60)
#define CLASS_2_F551778D210075EF_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13BEE980)
#define CLASS_2_F551778D210075EF_METHOD_2_E72355E57E9D1171_OFFSET UNITYSDK_OFFSET(0x13BF0630)
#define CLASS_2_F551778D210075EF_METHOD_2_FBD5292E2FA92F45_OFFSET UNITYSDK_OFFSET(0x13BF2150)
#define CLASS_2_F551778D210075EF_METHOD_2_FBD781D4EF80DB4D_OFFSET UNITYSDK_OFFSET(0x13BF0F20)
#define CLASS_2_F551778D210075EF_METHOD_2_FDEEBC72538389F6_OFFSET UNITYSDK_OFFSET(0x13BF1340)
#define CLASS_2_F551778D210075EF_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13BF00C0)
#define CLASS_2_F551778D210075EF_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13BEEEB0)
#define CLASS_2_F551778D210075EF_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13BF0450)
#define CLASS_2_F551778D210075EF_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13BF05A0)
#define CLASS_2_F551778D210075EF_SET_ISDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x13BF3420)
#define CLASS_2_F551778D210075EF_SET_LASTACTIVETRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x13BF3400)
#define CLASS_2_F551778D210075EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BF3430)
#define CLASS_2_F551778D210075EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13BEE360)
#define CLASS_2_F551778D210075EF___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13BF34C0)

inline static constexpr unsigned int Class_2_F551778D210075EF_TypeDefinitionIndex = 53538;

class Class_2_F551778D210075EF : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F551778D210075EF_TypeDefinitionIndex)->GetStaticField(0x13AD0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F551778D210075EF_TypeDefinitionIndex)->GetStaticField(0x13AD4);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F551778D210075EF_TypeDefinitionIndex)->GetStaticField(0x13AD8);
	}
	// static const ::System::Int32 Field_2_3 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x2; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::Class_1_64D890C466F37235* Field_2_7; // 0x18
	::UnityEngine::Coroutine* Field_2_8; // 0x20
	::RPG::Client::MapPropDef* Field_2_9; // 0x28
	::System::String* Field_2_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_38A71F76592AF3BC*>* Field_2_11; // 0x38
	::RPG::Client::MonoMapRotationVolumeV2* Field_2_12; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_13; // 0x48
	::RPG::Client::MonoDBBridgeManager* Field_2_14; // 0x50
	::RPG::GameCore::ColliderTriggerComponent* Field_2_15; // 0x58
	::RPG::GameCore::PropComponent* Field_2_16; // 0x60
	::UnityEngine::Coroutine* Field_2_17; // 0x68
	::Class_2_36C95D73718D07B1* Field_2_18; // 0x70
	::Class_2_37D832480CB327E1* Field_2_19; // 0x78
	::RPG::GameCore::CharacterVisibleComponent* Field_2_20; // 0x80
	::RPG::Client::ReasonBool_1<::Class_2_F551778D210075EF_DisableInteractReason> Field_2_21; // 0x88
	::System::Single Field_2_22; // 0x90
	::UnityEngine::Matrix4x4 Field_2_23; // 0x94
	::System::UInt32 _LastActiveTriggerIndex_k__BackingField; // 0xD4
	::System::UInt32 Field_2_25; // 0xD8
	::System::Boolean Field_2_26; // 0xDC
	::System::Boolean Field_2_27; // 0xDD
	::System::Boolean _IsDisposable_k__BackingField; // 0xDE
	::System::Boolean Field_2_29; // 0xDF

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

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_3DEA63D69EBFCE9B(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DEA63D69EBFCE9B_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3DEA63D69EBFCE9B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10459AB46D2E4445(::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_10459AB46D2E4445_OFFSET))(this, a1);
	}

	::System::Void Method_2_10459AB46D2E4445_1(::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_10459AB46D2E4445_1_OFFSET))(this, a1);
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

	::System::Void Method_2_E72355E57E9D1171(::Il2CppArray<::Class_1_38A71F76592AF3BC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_38A71F76592AF3BC*>*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_E72355E57E9D1171_OFFSET))(this, a1);
	}

	::System::Void Method_2_1352708442940A46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_1352708442940A46_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4C27DE82B2DFE27A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDA88FBEF4C0CCEE(::System::Boolean a1, ::Class_2_F551778D210075EF_DisableInteractReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_F551778D210075EF_DisableInteractReason))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_DDA88FBEF4C0CCEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A36C8AB90312738(::RPG::GameCore::MapRotationVolumeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeState))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_3A36C8AB90312738_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A10F5CD917CB8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_09A10F5CD917CB8F_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_FDEEBC72538389F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_FDEEBC72538389F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FBD781D4EF80DB4D(::System::Single a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_FBD781D4EF80DB4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_2_96C420C04E19A969(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_96C420C04E19A969_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_BD658202BB4C4431_OFFSET))(this);
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

	::System::Void Method_2_5426D9A82A681A40(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_5426D9A82A681A40_OFFSET))(this, a1);
	}

	::System::Void Method_2_5426D9A82A681A40_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_5426D9A82A681A40_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_36F46336ADA62D13_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_A1781348F0A89177_OFFSET))(this);
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

	::System::Void Method_2_FBD5292E2FA92F45(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_FBD5292E2FA92F45_OFFSET))(this, a1);
	}

	::System::Void Method_2_DED00B88899E5DC5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_DED00B88899E5DC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_67A6C41ED100A1D7(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_67A6C41ED100A1D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1E4A29C5AE86E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_89D1E4A29C5AE86E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_489E0B827662C211_OFFSET))(this);
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

	::RPG::GameCore::MapRotationVolumeState Method_2_D3DE8CAC39951624()
	{
		return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_D3DE8CAC39951624_OFFSET))(this);
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

	::System::Void set_LastActiveTriggerIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_SET_LASTACTIVETRIGGERINDEX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsDisposable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_GET_ISDISPOSABLE_OFFSET))(this);
	}

	::System::Void set_IsDisposable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF_SET_ISDISPOSABLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F551778D210075EF___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};
