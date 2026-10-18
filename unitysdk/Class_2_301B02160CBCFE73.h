#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_301B02160CBCFE73_PropMovementPauseReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_547;
class Class_1_27E38B1A892A490A;
class Class_1_9BA88018AC303C05;
class Class_1_C891149273D7CFB5;
class Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20;
class Class_2_301B02160CBCFE73_Class_1_60478667B1E88FCB;
class Class_2_301B02160CBCFE73_Class_1_CEFA3D71AA492FE6;
class Class_2_301B02160CBCFE73_Class_2_D8266806921E1B7A;
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

#define CLASS_2_301B02160CBCFE73_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13316970)
#define CLASS_2_301B02160CBCFE73_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x13316950)
#define CLASS_2_301B02160CBCFE73_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13316960)
#define CLASS_2_301B02160CBCFE73_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13317CD0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_01ACC9B513C5E7F7_1_OFFSET UNITYSDK_OFFSET(0x13316560)
#define CLASS_2_301B02160CBCFE73_METHOD_2_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x133163B0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_03ADD72B19AFD290_OFFSET UNITYSDK_OFFSET(0x1331DA10)
#define CLASS_2_301B02160CBCFE73_METHOD_2_10AF1AFFBA32CD7E_OFFSET UNITYSDK_OFFSET(0x1331ABD0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_1465CE3ACC6F8A7A_OFFSET UNITYSDK_OFFSET(0x1331E270)
#define CLASS_2_301B02160CBCFE73_METHOD_2_1AEA7CE8C1A32909_OFFSET UNITYSDK_OFFSET(0x1331B5A0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1331E6C0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13315D50)
#define CLASS_2_301B02160CBCFE73_METHOD_2_233389A0AA4108E5_OFFSET UNITYSDK_OFFSET(0x1331BCF0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x13318870)
#define CLASS_2_301B02160CBCFE73_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x13315E20)
#define CLASS_2_301B02160CBCFE73_METHOD_2_2B6B95065D14490D_OFFSET UNITYSDK_OFFSET(0x1331D780)
#define CLASS_2_301B02160CBCFE73_METHOD_2_39E7C7856DE0A901_OFFSET UNITYSDK_OFFSET(0x1331A630)
#define CLASS_2_301B02160CBCFE73_METHOD_2_44A3156889D81B3F_OFFSET UNITYSDK_OFFSET(0x1331A900)
#define CLASS_2_301B02160CBCFE73_METHOD_2_47F2555F83B8DAE1_OFFSET UNITYSDK_OFFSET(0x133173A0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1331C530)
#define CLASS_2_301B02160CBCFE73_METHOD_2_55753A8DA4BA5558_OFFSET UNITYSDK_OFFSET(0x13319BB0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0x13316710)
#define CLASS_2_301B02160CBCFE73_METHOD_2_621F0B0CC2D3AB65_OFFSET UNITYSDK_OFFSET(0x133185E0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x133160B0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_73351D543AC31E3E_OFFSET UNITYSDK_OFFSET(0x1331B140)
#define CLASS_2_301B02160CBCFE73_METHOD_2_770B88978754F8F6_OFFSET UNITYSDK_OFFSET(0x1331A3A0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_801CA383A9EE0F50_OFFSET UNITYSDK_OFFSET(0x1331B8D0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_95F73446B6EBD161_OFFSET UNITYSDK_OFFSET(0x133164E0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x1331C7B0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_961BEB91EB07EDE0_OFFSET UNITYSDK_OFFSET(0x1331B960)
#define CLASS_2_301B02160CBCFE73_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13316E60)
#define CLASS_2_301B02160CBCFE73_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x1331D060)
#define CLASS_2_301B02160CBCFE73_METHOD_2_A0C2164E6BC7E6E6_OFFSET UNITYSDK_OFFSET(0x1331C280)
#define CLASS_2_301B02160CBCFE73_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13317E80)
#define CLASS_2_301B02160CBCFE73_METHOD_2_AB357C8A9F73EEB4_OFFSET UNITYSDK_OFFSET(0x1331E010)
#define CLASS_2_301B02160CBCFE73_METHOD_2_AD9D221401A49B93_OFFSET UNITYSDK_OFFSET(0x13317520)
#define CLASS_2_301B02160CBCFE73_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x13318190)
#define CLASS_2_301B02160CBCFE73_METHOD_2_BA9B60848F8639F2_OFFSET UNITYSDK_OFFSET(0x133182A0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_BAE790E0F1699E68_OFFSET UNITYSDK_OFFSET(0x13317D80)
#define CLASS_2_301B02160CBCFE73_METHOD_2_BB69404B14307921_OFFSET UNITYSDK_OFFSET(0x13319850)
#define CLASS_2_301B02160CBCFE73_METHOD_2_C31F8C785F17C5AF_OFFSET UNITYSDK_OFFSET(0x13315DB0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x1331C5F0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13318250)
#define CLASS_2_301B02160CBCFE73_METHOD_2_DFCFDE5A7E6EE4D0_OFFSET UNITYSDK_OFFSET(0x13317EE0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x13316850)
#define CLASS_2_301B02160CBCFE73_METHOD_2_EA459874B1F3C9B8_OFFSET UNITYSDK_OFFSET(0x13317E10)
#define CLASS_2_301B02160CBCFE73_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13317510)
#define CLASS_2_301B02160CBCFE73_METHOD_2_F4DFAF898FB5D8F2_OFFSET UNITYSDK_OFFSET(0x1331B7C0)
#define CLASS_2_301B02160CBCFE73_METHOD_2_F53CF70E9C1A8E38_OFFSET UNITYSDK_OFFSET(0x1331C090)
#define CLASS_2_301B02160CBCFE73_METHOD_2_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x13316690)
#define CLASS_2_301B02160CBCFE73_METHOD_2_FAF11EEFFA8DE1F8_OFFSET UNITYSDK_OFFSET(0x1331E140)
#define CLASS_2_301B02160CBCFE73_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x13316ED0)
#define CLASS_2_301B02160CBCFE73_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13317000)
#define CLASS_2_301B02160CBCFE73_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13317210)
#define CLASS_2_301B02160CBCFE73_TICK_OFFSET UNITYSDK_OFFSET(0x13317480)
#define CLASS_2_301B02160CBCFE73__CCTOR_OFFSET UNITYSDK_OFFSET(0x1331E7D0)
#define CLASS_2_301B02160CBCFE73__CTOR_OFFSET UNITYSDK_OFFSET(0x1331E720)
#define CLASS_2_301B02160CBCFE73___FINISHMOVEINSTANCE_B__61_0_OFFSET UNITYSDK_OFFSET(0x1331E810)

inline static constexpr unsigned int Class_2_301B02160CBCFE73_TypeDefinitionIndex = 57405;

class Class_2_301B02160CBCFE73 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LMGFPANNLHN()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_301B02160CBCFE73_TypeDefinitionIndex)->GetStaticField(0x6FF10);
	}
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* CELJHFCBFMI; // 0x18
	::System::Collections::Generic::List_1<::Class_2_301B02160CBCFE73_Class_1_CEFA3D71AA492FE6*>* NOJCNBMDBDJ; // 0x20
	::Struct_2_CFA12135DA0D972E PKMMBEABKFM; // 0x28
	::Class_1_9BA88018AC303C05* MFNDJCAENBI; // 0x38
	::RPG::Client::NodeRotationController* AJLJABAOPKE; // 0x40
	::Struct_2_CFA12135DA0D972E PNONHPKIPAJ; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::MonoAnimatorPlatform*>* NBBJKFHCFNK; // 0x58
	::Struct_2_2B16FFFF87B43037 DFDBKKKCDFM; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshSurface*>* EGIMKGJEIBO; // 0x70
	::UnityEngine::Coroutine* OGGMIKOGKPF; // 0x78
	::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* KBAIBBPMPGD; // 0x80
	::System::Collections::Generic::List_1<::Class_2_301B02160CBCFE73_Class_1_60478667B1E88FCB*>* CDGFMANJOII; // 0x88
	::System::Collections::Generic::List_1<::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20*>* BIAJOKOMFNJ; // 0x90
	::RPG::GameCore::GameEntity* JNDHPNOLOJE; // 0x98
	::Struct_2_CFA12135DA0D972E HBJBCBJAHOJ; // 0xA0
	::System::Action_1<::RPG::GameCore::GameEntity*>* LIGJMDCBMNK; // 0xB0
	::RPG::GameCore::GameEntity* GACDIFAKJOI; // 0xB8
	::System::Action_1<::RPG::GameCore::GameEntity*>* JDCLPCCMAEP; // 0xC0
	::System::Boolean NFKGDIABFNP; // 0xC8
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0xC9
	::System::Boolean OEBLHFNMHBH; // 0xCA
	::System::Int32 AKKGIHHHCAO; // 0xCC
	::System::Int32 EJFOIFFPPGN; // 0xD0
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0xD4
	::System::Int32 CHNDFMGPEGD; // 0xD8
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xDC
	::UnityEngine::Vector3 LAMALDEMMNP; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_C31F8C785F17C5AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_C31F8C785F17C5AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_01ACC9B513C5E7F7_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_01ACC9B513C5E7F7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_95F73446B6EBD161(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_95F73446B6EBD161_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAA945ED465745BC(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E9E9972123BF939(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0605E6F5A574306(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_E0605E6F5A574306_OFFSET))(this, a1);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_47F2555F83B8DAE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_47F2555F83B8DAE1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA459874B1F3C9B8(::System::Boolean a1, ::Class_2_301B02160CBCFE73_PropMovementPauseReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_301B02160CBCFE73_PropMovementPauseReason))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_EA459874B1F3C9B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::Class_1_C891149273D7CFB5* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_C891149273D7CFB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_BA9B60848F8639F2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_BA9B60848F8639F2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_BB69404B14307921(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_BB69404B14307921_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_55753A8DA4BA5558(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_55753A8DA4BA5558_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_39E7C7856DE0A901(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_39E7C7856DE0A901_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_44A3156889D81B3F(::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_44A3156889D81B3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73351D543AC31E3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_73351D543AC31E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_10AF1AFFBA32CD7E(::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_10AF1AFFBA32CD7E_OFFSET))(this, a1);
	}

	::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20* Method_2_1AEA7CE8C1A32909(::System::String* a1)
	{
		return ((::Class_2_301B02160CBCFE73_Class_0_16E7307DCC43CB2C_20*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_1AEA7CE8C1A32909_OFFSET))(this, a1);
	}

	::Class_1_27E38B1A892A490A* Method_2_F4DFAF898FB5D8F2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_27E38B1A892A490A*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_F4DFAF898FB5D8F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_801CA383A9EE0F50(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_801CA383A9EE0F50_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD9D221401A49B93(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_AD9D221401A49B93_OFFSET))(this, a1);
	}

	::System::Void Method_2_BAE790E0F1699E68(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_BAE790E0F1699E68_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A0C2164E6BC7E6E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_A0C2164E6BC7E6E6_OFFSET))(this);
	}

	::System::Void Method_2_F53CF70E9C1A8E38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_F53CF70E9C1A8E38_OFFSET))(this);
	}

	::System::Void Method_2_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_2_2B6B95065D14490D(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::Class_3_CD04D3296DF4C842_8* a4, ::System::Boolean a5, ::Class_3_CD04D3296DF4C842_9* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_2B6B95065D14490D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_301B02160CBCFE73_Class_1_CEFA3D71AA492FE6* Method_2_AB357C8A9F73EEB4()
	{
		return ((::Class_2_301B02160CBCFE73_Class_1_CEFA3D71AA492FE6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_AB357C8A9F73EEB4_OFFSET))(this);
	}

	::System::Void Method_2_DFCFDE5A7E6EE4D0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_DFCFDE5A7E6EE4D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_301B02160CBCFE73_Class_1_60478667B1E88FCB* Method_2_621F0B0CC2D3AB65(::System::String* a1)
	{
		return ((::Class_2_301B02160CBCFE73_Class_1_60478667B1E88FCB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_621F0B0CC2D3AB65_OFFSET))(this, a1);
	}

	::System::Void Method_2_770B88978754F8F6(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Boolean a5, ::Class_3_CD04D3296DF4C842_8* a6, ::System::Boolean a7, ::Class_3_CD04D3296DF4C842_9* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_770B88978754F8F6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_233389A0AA4108E5(::Class_2_301B02160CBCFE73_Class_1_CEFA3D71AA492FE6* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_301B02160CBCFE73_Class_1_CEFA3D71AA492FE6*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_233389A0AA4108E5_OFFSET))(this, a1, a2);
	}

	::Class_2_301B02160CBCFE73_Class_2_D8266806921E1B7A* Method_2_FAF11EEFFA8DE1F8()
	{
		return ((::Class_2_301B02160CBCFE73_Class_2_D8266806921E1B7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_FAF11EEFFA8DE1F8_OFFSET))(this);
	}

	::System::Boolean Method_2_03ADD72B19AFD290(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_3_CD04D3296DF4C842_8* a5, ::System::Boolean a6, ::Class_3_CD04D3296DF4C842_9* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_CD04D3296DF4C842_8*, ::System::Boolean, ::Class_3_CD04D3296DF4C842_9*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_03ADD72B19AFD290_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_961BEB91EB07EDE0(::Class_2_301B02160CBCFE73_Class_2_D8266806921E1B7A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_301B02160CBCFE73_Class_2_D8266806921E1B7A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_961BEB91EB07EDE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1465CE3ACC6F8A7A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_1465CE3ACC6F8A7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __FinishMoveInstance_b__61_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_301B02160CBCFE73___FINISHMOVEINSTANCE_B__61_0_OFFSET))(this);
	}
};
