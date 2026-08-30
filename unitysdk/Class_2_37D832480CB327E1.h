#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_37D832480CB327E1_PropMovementPauseReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
class Class_1_27E38B1A892A490A;
class Class_1_9BA88018AC303C05;
class Class_1_C891149273D7CFB5;
class Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12;
class Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB;
class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6;
class Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A;
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

#define CLASS_2_37D832480CB327E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E8C5E0)
#define CLASS_2_37D832480CB327E1_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x12E8C5C0)
#define CLASS_2_37D832480CB327E1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12E8C5D0)
#define CLASS_2_37D832480CB327E1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12E8D9E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x12E8C1E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_03ADD72B19AFD290_OFFSET UNITYSDK_OFFSET(0x12E938D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_1080519617EA595B_OFFSET UNITYSDK_OFFSET(0x12E8FA10)
#define CLASS_2_37D832480CB327E1_METHOD_2_10AF1AFFBA32CD7E_OFFSET UNITYSDK_OFFSET(0x12E90A90)
#define CLASS_2_37D832480CB327E1_METHOD_2_1465CE3ACC6F8A7A_OFFSET UNITYSDK_OFFSET(0x12E94130)
#define CLASS_2_37D832480CB327E1_METHOD_2_1AEA7CE8C1A32909_OFFSET UNITYSDK_OFFSET(0x12E91460)
#define CLASS_2_37D832480CB327E1_METHOD_2_1C2BA2F1127BD0D2_OFFSET UNITYSDK_OFFSET(0x12E90470)
#define CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x12E94570)
#define CLASS_2_37D832480CB327E1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12E8BA20)
#define CLASS_2_37D832480CB327E1_METHOD_2_233389A0AA4108E5_OFFSET UNITYSDK_OFFSET(0x12E91BB0)
#define CLASS_2_37D832480CB327E1_METHOD_2_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x12E8E6D0)
#define CLASS_2_37D832480CB327E1_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x12E8BAF0)
#define CLASS_2_37D832480CB327E1_METHOD_2_2B6B95065D14490D_OFFSET UNITYSDK_OFFSET(0x12E93640)
#define CLASS_2_37D832480CB327E1_METHOD_2_44A3156889D81B3F_OFFSET UNITYSDK_OFFSET(0x12E907C0)
#define CLASS_2_37D832480CB327E1_METHOD_2_47F2555F83B8DAE1_OFFSET UNITYSDK_OFFSET(0x12E8D0C0)
#define CLASS_2_37D832480CB327E1_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x12E923F0)
#define CLASS_2_37D832480CB327E1_METHOD_2_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0x12E8C070)
#define CLASS_2_37D832480CB327E1_METHOD_2_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0x12E8C390)
#define CLASS_2_37D832480CB327E1_METHOD_2_621F0B0CC2D3AB65_OFFSET UNITYSDK_OFFSET(0x12E8E440)
#define CLASS_2_37D832480CB327E1_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x12E8BD80)
#define CLASS_2_37D832480CB327E1_METHOD_2_73351D543AC31E3E_OFFSET UNITYSDK_OFFSET(0x12E91000)
#define CLASS_2_37D832480CB327E1_METHOD_2_770B88978754F8F6_OFFSET UNITYSDK_OFFSET(0x12E901E0)
#define CLASS_2_37D832480CB327E1_METHOD_2_801CA383A9EE0F50_OFFSET UNITYSDK_OFFSET(0x12E91790)
#define CLASS_2_37D832480CB327E1_METHOD_2_95F73446B6EBD161_OFFSET UNITYSDK_OFFSET(0x12E8C160)
#define CLASS_2_37D832480CB327E1_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x12E92670)
#define CLASS_2_37D832480CB327E1_METHOD_2_961BEB91EB07EDE0_OFFSET UNITYSDK_OFFSET(0x12E91820)
#define CLASS_2_37D832480CB327E1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12E8CB80)
#define CLASS_2_37D832480CB327E1_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x12E92F20)
#define CLASS_2_37D832480CB327E1_METHOD_2_A0C2164E6BC7E6E6_OFFSET UNITYSDK_OFFSET(0x12E92140)
#define CLASS_2_37D832480CB327E1_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x12E8DB90)
#define CLASS_2_37D832480CB327E1_METHOD_2_AB357C8A9F73EEB4_OFFSET UNITYSDK_OFFSET(0x12E93ED0)
#define CLASS_2_37D832480CB327E1_METHOD_2_AD9D221401A49B93_OFFSET UNITYSDK_OFFSET(0x12E8D240)
#define CLASS_2_37D832480CB327E1_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x12E8DFD0)
#define CLASS_2_37D832480CB327E1_METHOD_2_BA9B60848F8639F2_OFFSET UNITYSDK_OFFSET(0x12E8E100)
#define CLASS_2_37D832480CB327E1_METHOD_2_BAE790E0F1699E68_OFFSET UNITYSDK_OFFSET(0x12E8DA90)
#define CLASS_2_37D832480CB327E1_METHOD_2_BB69404B14307921_OFFSET UNITYSDK_OFFSET(0x12E8F6B0)
#define CLASS_2_37D832480CB327E1_METHOD_2_C31F8C785F17C5AF_OFFSET UNITYSDK_OFFSET(0x12E8BA80)
#define CLASS_2_37D832480CB327E1_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x12E924B0)
#define CLASS_2_37D832480CB327E1_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x12E8E0A0)
#define CLASS_2_37D832480CB327E1_METHOD_2_DFCFDE5A7E6EE4D0_OFFSET UNITYSDK_OFFSET(0x12E8DBF0)
#define CLASS_2_37D832480CB327E1_METHOD_2_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x12E8C4C0)
#define CLASS_2_37D832480CB327E1_METHOD_2_EA459874B1F3C9B8_OFFSET UNITYSDK_OFFSET(0x12E8DB20)
#define CLASS_2_37D832480CB327E1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12E8D230)
#define CLASS_2_37D832480CB327E1_METHOD_2_F4DFAF898FB5D8F2_OFFSET UNITYSDK_OFFSET(0x12E91680)
#define CLASS_2_37D832480CB327E1_METHOD_2_F53CF70E9C1A8E38_OFFSET UNITYSDK_OFFSET(0x12E91F50)
#define CLASS_2_37D832480CB327E1_METHOD_2_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x12E8C310)
#define CLASS_2_37D832480CB327E1_METHOD_2_FAF11EEFFA8DE1F8_OFFSET UNITYSDK_OFFSET(0x12E94000)
#define CLASS_2_37D832480CB327E1_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x12E8CBF0)
#define CLASS_2_37D832480CB327E1_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x12E8CD20)
#define CLASS_2_37D832480CB327E1_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x12E8CF30)
#define CLASS_2_37D832480CB327E1_TICK_OFFSET UNITYSDK_OFFSET(0x12E8D1A0)
#define CLASS_2_37D832480CB327E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E94680)
#define CLASS_2_37D832480CB327E1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E945D0)
#define CLASS_2_37D832480CB327E1___FINISHMOVEINSTANCE_B__61_0_OFFSET UNITYSDK_OFFSET(0x12E946C0)

inline static constexpr unsigned int Class_2_37D832480CB327E1_TypeDefinitionIndex = 57560;

class Class_2_37D832480CB327E1 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LMGFPANNLHN()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37D832480CB327E1_TypeDefinitionIndex)->GetStaticField(0x5C9A0);
	}
	::Struct_2_CFA12135DA0D972E PNONHPKIPAJ; // 0x18
	::Struct_2_CFA12135DA0D972E PKMMBEABKFM; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* CELJHFCBFMI; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>* EGIMKGJEIBO; // 0x40
	::Struct_2_CFA12135DA0D972E HBJBCBJAHOJ; // 0x48
	::System::Action_1<::RPG::GameCore::GameEntity*>* LIGJMDCBMNK; // 0x58
	::RPG::GameCore::GameEntity* GACDIFAKJOI; // 0x60
	::UnityEngine::Coroutine* OGGMIKOGKPF; // 0x68
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6*>* NOJCNBMDBDJ; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::MonoAnimatorPlatform*>* NBBJKFHCFNK; // 0x78
	::Class_1_9BA88018AC303C05* MFNDJCAENBI; // 0x80
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12*>* BIAJOKOMFNJ; // 0x88
	::System::Action_1<::RPG::GameCore::GameEntity*>* JDCLPCCMAEP; // 0x90
	::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* KBAIBBPMPGD; // 0x98
	::RPG::GameCore::GameEntity* JNDHPNOLOJE; // 0xA0
	::RPG::Client::NodeRotationController* AJLJABAOPKE; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_37D832480CB327E1_Class_1_60478667B1E88FCB*>* CDGFMANJOII; // 0xB0
	::Struct_2_2B16FFFF87B43037 DFDBKKKCDFM; // 0xB8
	::System::Int32 AKKGIHHHCAO; // 0xC8
	::UnityEngine::Vector3 LAMALDEMMNP; // 0xCC
	::System::Boolean OEBLHFNMHBH; // 0xD8
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xD9
	::System::Boolean NFKGDIABFNP; // 0xDA
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xDC
	::System::Int32 CHNDFMGPEGD; // 0xE8
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0xEC
	::System::Int32 EJFOIFFPPGN; // 0xF0

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

	::System::Void Method_2_57D21531A2DC98EE(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_57D21531A2DC98EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_95F73446B6EBD161(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_95F73446B6EBD161_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAA945ED465745BC(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E9E9972123BF939(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0605E6F5A574306(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_E0605E6F5A574306_OFFSET))(this, a1);
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

	::Class_1_C891149273D7CFB5* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_C891149273D7CFB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_BA9B60848F8639F2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_BA9B60848F8639F2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_BB69404B14307921(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_BB69404B14307921_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1080519617EA595B(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1080519617EA595B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_1C2BA2F1127BD0D2(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1C2BA2F1127BD0D2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_44A3156889D81B3F(::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_44A3156889D81B3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73351D543AC31E3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_73351D543AC31E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_10AF1AFFBA32CD7E(::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_10AF1AFFBA32CD7E_OFFSET))(this, a1);
	}

	::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12* Method_2_1AEA7CE8C1A32909(::System::String* a1)
	{
		return ((::Class_2_37D832480CB327E1_Class_0_16E7307DCC43CB2C_12*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_1AEA7CE8C1A32909_OFFSET))(this, a1);
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

	::Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A* Method_2_FAF11EEFFA8DE1F8()
	{
		return ((::Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_FAF11EEFFA8DE1F8_OFFSET))(this);
	}

	::System::Boolean Method_2_03ADD72B19AFD290(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::Class_3_CD04D3296DF4C842_9* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_03ADD72B19AFD290_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_961BEB91EB07EDE0(::Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_37D832480CB327E1_Class_2_D8266806921E1B7A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_METHOD_2_961BEB91EB07EDE0_OFFSET))(this, a1, a2);
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
};
