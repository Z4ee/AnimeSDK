#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_37D832480CB327E1_PropMovementPauseReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_27E38B1A892A490A;
class Class_1_9BA88018AC303C05;
class Class_1_F1C57540A2293C7F;
class Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11;
class Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB;
class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6;
class Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42;
class Class_3_CD04D3296DF4C842_8;
class Class_3_CD04D3296DF4C842_9;
namespace RPG::Client { class MonoAnimatorPlatform; }
namespace RPG::Client { class MonoMovementPropHandle; }
namespace RPG::Client { class NodeRotationController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_2_37D832480CB327E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112C3280)
#define CLASS_2_37D832480CB327E1_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x112C3260)
#define CLASS_2_37D832480CB327E1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x112C3270)
#define CLASS_2_37D832480CB327E1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112C45C0)
#define CLASS_2_37D832480CB327E1_METHOD_2_01ACC9B513C5E7F7_1_OFFSET UNITYSDK_OFFSET(0x112C2E70)
#define CLASS_2_37D832480CB327E1_METHOD_2_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x112C2CC0)
#define CLASS_2_37D832480CB327E1_METHOD_2_03ADD72B19AFD290_OFFSET UNITYSDK_OFFSET(0x112CA1F0)
#define CLASS_2_37D832480CB327E1_METHOD_2_0BFA270203B76134_OFFSET UNITYSDK_OFFSET(0x112C7DE0)
#define CLASS_2_37D832480CB327E1_METHOD_2_0D465FF2E3E3BC0B_OFFSET UNITYSDK_OFFSET(0x112C76A0)
#define CLASS_2_37D832480CB327E1_METHOD_2_1080519617EA595B_OFFSET UNITYSDK_OFFSET(0x112C6680)
#define CLASS_2_37D832480CB327E1_METHOD_2_1465CE3ACC6F8A7A_OFFSET UNITYSDK_OFFSET(0x112CAA70)
#define CLASS_2_37D832480CB327E1_METHOD_2_1C2BA2F1127BD0D2_OFFSET UNITYSDK_OFFSET(0x112C70E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x112CAEB0)
#define CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x112C2670)
#define CLASS_2_37D832480CB327E1_METHOD_2_233389A0AA4108E5_OFFSET UNITYSDK_OFFSET(0x112C84D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x112C52D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x112C2740)
#define CLASS_2_37D832480CB327E1_METHOD_2_2B6B95065D14490D_OFFSET UNITYSDK_OFFSET(0x112C9F60)
#define CLASS_2_37D832480CB327E1_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x112C4CA0)
#define CLASS_2_37D832480CB327E1_METHOD_2_44A3156889D81B3F_OFFSET UNITYSDK_OFFSET(0x112C7430)
#define CLASS_2_37D832480CB327E1_METHOD_2_47F2555F83B8DAE1_OFFSET UNITYSDK_OFFSET(0x112C3CF0)
#define CLASS_2_37D832480CB327E1_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x112C8D10)
#define CLASS_2_37D832480CB327E1_METHOD_2_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0x112C3020)
#define CLASS_2_37D832480CB327E1_METHOD_2_621F0B0CC2D3AB65_OFFSET UNITYSDK_OFFSET(0x112C5040)
#define CLASS_2_37D832480CB327E1_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x112C29D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_770B88978754F8F6_OFFSET UNITYSDK_OFFSET(0x112C6E50)
#define CLASS_2_37D832480CB327E1_METHOD_2_801CA383A9EE0F50_OFFSET UNITYSDK_OFFSET(0x112C80B0)
#define CLASS_2_37D832480CB327E1_METHOD_2_8DF69EBFA1F1FF78_OFFSET UNITYSDK_OFFSET(0x112C62F0)
#define CLASS_2_37D832480CB327E1_METHOD_2_92809A86EE51AAC3_OFFSET UNITYSDK_OFFSET(0x112C7A90)
#define CLASS_2_37D832480CB327E1_METHOD_2_95F73446B6EBD161_OFFSET UNITYSDK_OFFSET(0x112C2DF0)
#define CLASS_2_37D832480CB327E1_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x112C8F90)
#define CLASS_2_37D832480CB327E1_METHOD_2_961BEB91EB07EDE0_OFFSET UNITYSDK_OFFSET(0x112C8140)
#define CLASS_2_37D832480CB327E1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x112C37D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x112C9840)
#define CLASS_2_37D832480CB327E1_METHOD_2_A0C2164E6BC7E6E6_OFFSET UNITYSDK_OFFSET(0x112C8A60)
#define CLASS_2_37D832480CB327E1_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x112C4780)
#define CLASS_2_37D832480CB327E1_METHOD_2_AB357C8A9F73EEB4_OFFSET UNITYSDK_OFFSET(0x112CA7F0)
#define CLASS_2_37D832480CB327E1_METHOD_2_AD9D221401A49B93_OFFSET UNITYSDK_OFFSET(0x112C3E70)
#define CLASS_2_37D832480CB327E1_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x112C4BD0)
#define CLASS_2_37D832480CB327E1_METHOD_2_BA9B60848F8639F2_OFFSET UNITYSDK_OFFSET(0x112C4D00)
#define CLASS_2_37D832480CB327E1_METHOD_2_BAE790E0F1699E68_OFFSET UNITYSDK_OFFSET(0x112C4670)
#define CLASS_2_37D832480CB327E1_METHOD_2_C31F8C785F17C5AF_OFFSET UNITYSDK_OFFSET(0x112C26D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x112C8DD0)
#define CLASS_2_37D832480CB327E1_METHOD_2_DFCFDE5A7E6EE4D0_OFFSET UNITYSDK_OFFSET(0x112C47E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x112C3160)
#define CLASS_2_37D832480CB327E1_METHOD_2_EA459874B1F3C9B8_OFFSET UNITYSDK_OFFSET(0x112C4710)
#define CLASS_2_37D832480CB327E1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x112C3E60)
#define CLASS_2_37D832480CB327E1_METHOD_2_F4DFAF898FB5D8F2_OFFSET UNITYSDK_OFFSET(0x112C7FA0)
#define CLASS_2_37D832480CB327E1_METHOD_2_F53CF70E9C1A8E38_OFFSET UNITYSDK_OFFSET(0x112C8870)
#define CLASS_2_37D832480CB327E1_METHOD_2_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x112C2FA0)
#define CLASS_2_37D832480CB327E1_METHOD_2_FAF11EEFFA8DE1F8_OFFSET UNITYSDK_OFFSET(0x112CA930)
#define CLASS_2_37D832480CB327E1_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x112C3840)
#define CLASS_2_37D832480CB327E1_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x112C3970)
#define CLASS_2_37D832480CB327E1_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x112C3B70)
#define CLASS_2_37D832480CB327E1_TICK_OFFSET UNITYSDK_OFFSET(0x112C3DD0)
#define CLASS_2_37D832480CB327E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x112CAFC0)
#define CLASS_2_37D832480CB327E1__CTOR_OFFSET UNITYSDK_OFFSET(0x112CAF10)
#define CLASS_2_37D832480CB327E1___FINISHMOVEINSTANCE_B__61_0_OFFSET UNITYSDK_OFFSET(0x112CB000)
#define CLASS_2_37D832480CB327E1___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112CB080)
#define CLASS_2_37D832480CB327E1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x112CB070)

inline static constexpr unsigned int Class_2_37D832480CB327E1_TypeDefinitionIndex = 53620;

class Class_2_37D832480CB327E1 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37D832480CB327E1_TypeDefinitionIndex)->GetStaticField(0x16790);
	}
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>* Field_2_2; // 0x20
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x28
	::RPG::GameCore::GameEntity* Field_2_4; // 0x30
	::Struct_2_CFA12135DA0D972E Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::MonoAnimatorPlatform*>* Field_2_6; // 0x48
	::Struct_2_CFA12135DA0D972E Field_2_7; // 0x50
	::RPG::Client::NodeRotationController* Field_2_8; // 0x60
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*>* Field_2_9; // 0x68
	::Struct_2_2B16FFFF87B43037 Field_2_10; // 0x70
	::RPG::GameCore::GameEntity* Field_2_11; // 0x80
	::Struct_2_CFA12135DA0D972E Field_2_12; // 0x88
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB*>* Field_2_13; // 0x98
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*>* Field_2_14; // 0xA0
	::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* Field_2_15; // 0xA8
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_16; // 0xB0
	::Class_1_9BA88018AC303C05* Field_2_17; // 0xB8
	::UnityEngine::Coroutine* Field_2_18; // 0xC0
	::System::Boolean Field_2_19; // 0xC8
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xC9
	::System::Boolean Field_2_21; // 0xCA
	::UnityEngine::Vector3 Field_2_22; // 0xCC
	::System::Int32 Field_2_23; // 0xD8
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0xDC
	::System::Int32 Field_2_25; // 0xE0
	::UnityEngine::Vector3 Field_2_26; // 0xE4
	::System::Int32 Field_2_27; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_C31F8C785F17C5AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_C31F8C785F17C5AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_01ACC9B513C5E7F7_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_01ACC9B513C5E7F7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_95F73446B6EBD161(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_95F73446B6EBD161_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAA945ED465745BC(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E9E9972123BF939(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0605E6F5A574306(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_E0605E6F5A574306_OFFSET))(this, a1);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_47F2555F83B8DAE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_47F2555F83B8DAE1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA459874B1F3C9B8(::System::Boolean a1, ::Class_2_37D832480CB327E1_PropMovementPauseReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_37D832480CB327E1_PropMovementPauseReason))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_EA459874B1F3C9B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::Class_1_F1C57540A2293C7F* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_F1C57540A2293C7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_BA9B60848F8639F2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_BA9B60848F8639F2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_8DF69EBFA1F1FF78(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_8DF69EBFA1F1FF78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1080519617EA595B(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1080519617EA595B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_1C2BA2F1127BD0D2(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1C2BA2F1127BD0D2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_44A3156889D81B3F(::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_44A3156889D81B3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_92809A86EE51AAC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_92809A86EE51AAC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D465FF2E3E3BC0B(::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_0D465FF2E3E3BC0B_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11* Method_2_0BFA270203B76134(::System::String* a1)
	{
		return ((::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_11*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_0BFA270203B76134_OFFSET))(this, a1);
	}

	::Class_1_27E38B1A892A490A* Method_2_F4DFAF898FB5D8F2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_27E38B1A892A490A*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_F4DFAF898FB5D8F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_801CA383A9EE0F50(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_801CA383A9EE0F50_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD9D221401A49B93(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_AD9D221401A49B93_OFFSET))(this, a1);
	}

	::System::Void Method_2_BAE790E0F1699E68(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_BAE790E0F1699E68_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A0C2164E6BC7E6E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_A0C2164E6BC7E6E6_OFFSET))(this);
	}

	::System::Void Method_2_F53CF70E9C1A8E38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_F53CF70E9C1A8E38_OFFSET))(this);
	}

	::System::Void Method_2_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_2_2B6B95065D14490D(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::Class_3_CD04D3296DF4C842_8* a4, ::System::Boolean a5, ::Class_3_CD04D3296DF4C842_9* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_2B6B95065D14490D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6* Method_2_AB357C8A9F73EEB4()
	{
		return ((::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_AB357C8A9F73EEB4_OFFSET))(this);
	}

	::System::Void Method_2_DFCFDE5A7E6EE4D0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_DFCFDE5A7E6EE4D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB* Method_2_621F0B0CC2D3AB65(::System::String* a1)
	{
		return ((::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_621F0B0CC2D3AB65_OFFSET))(this, a1);
	}

	::System::Void Method_2_770B88978754F8F6(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Boolean a5, ::Class_3_CD04D3296DF4C842_8* a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_770B88978754F8F6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_233389A0AA4108E5(::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_233389A0AA4108E5_OFFSET))(this, a1, a2);
	}

	::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42* Method_2_FAF11EEFFA8DE1F8()
	{
		return ((::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_FAF11EEFFA8DE1F8_OFFSET))(this);
	}

	::System::Boolean Method_2_03ADD72B19AFD290(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::Class_3_CD04D3296DF4C842_9* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_03ADD72B19AFD290_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_961BEB91EB07EDE0(::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_2_4CE0A02599A9BC42*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_961BEB91EB07EDE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1465CE3ACC6F8A7A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1465CE3ACC6F8A7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __FinishMoveInstance_b__61_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___FINISHMOVEINSTANCE_B__61_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};
