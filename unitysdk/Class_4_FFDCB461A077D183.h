#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B51C9D0AAAA6A5F0.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMonsterAlertItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_4_FFDCB461A077D183_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xCE78460)
#define CLASS_4_FFDCB461A077D183_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCE78AB0)
#define CLASS_4_FFDCB461A077D183_METHOD_4_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xCE785B0)
#define CLASS_4_FFDCB461A077D183_METHOD_4_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xCE78A40)
#define CLASS_4_FFDCB461A077D183_METHOD_4_5787A4C72278B2A4_OFFSET UNITYSDK_OFFSET(0xCE78A50)
#define CLASS_4_FFDCB461A077D183_METHOD_4_67251D553B5A612F_OFFSET UNITYSDK_OFFSET(0xCE786A0)
#define CLASS_4_FFDCB461A077D183_METHOD_4_86EA3747C90B07AB_OFFSET UNITYSDK_OFFSET(0xCE78B50)
#define CLASS_4_FFDCB461A077D183_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCE78C40)
#define CLASS_4_FFDCB461A077D183_METHOD_4_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCE77D30)
#define CLASS_4_FFDCB461A077D183_METHOD_4_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xCE78290)
#define CLASS_4_FFDCB461A077D183_METHOD_4_F909359ABEA48347_OFFSET UNITYSDK_OFFSET(0xCE785C0)
#define CLASS_4_FFDCB461A077D183_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xCE77DC0)
#define CLASS_4_FFDCB461A077D183__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE784B0)
#define CLASS_4_FFDCB461A077D183__CTOR_OFFSET UNITYSDK_OFFSET(0xCE78530)

inline static constexpr unsigned int Class_4_FFDCB461A077D183_TypeDefinitionIndex = 44974;

class Class_4_FFDCB461A077D183 : public ::Class_3_B51C9D0AAAA6A5F0
{
public:
	// static const ::System::Int32 Field_4_4 = 0x63; // 0x0
	// static const ::System::Int32 Field_4_28 = 0xC3; // 0x0
	::Class_1_8289F2785D9AA990* Field_4_0; // 0x70
	::Class_1_8289F2785D9AA990* Field_4_3; // 0x78
	::Class_1_8289F2785D9AA990* Field_4_1; // 0x80
	::System::Action_2<::Class_4_FFDCB461A077D183*, ::System::Boolean>* Field_4_11; // 0x88
	::UnityEngine::AnimationCurve* Field_4_26; // 0x90
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_4_15; // 0x98
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EnterBattleState, ::System::Boolean>* Field_4_7; // 0xA0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EnterBattleState, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>* Field_4_6; // 0xA8
	::Class_1_8289F2785D9AA990* Field_4_2; // 0xB0
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_4_22; // 0xB8
	::MoleMole::Config::ConfigMonsterAlertItem* Field_4_12; // 0xC0
	::System::Boolean Field_4_17; // 0xC8
	::System::Boolean Field_4_20; // 0xC9
	::System::Boolean Field_4_9; // 0xCA
	::System::Boolean Field_4_16; // 0xCB
	::System::Int32 Field_4_21; // 0xCC
	::UnityEngine::Vector3 Field_4_25; // 0xD0
	::System::Single Field_4_13; // 0xDC
	::System::Boolean Field_4_24; // 0xE0
	::System::Boolean Field_4_8; // 0xE1
	::System::Boolean Field_4_10; // 0xE2
	::System::Boolean Field_4_19; // 0xE3
	::System::Single Field_4_14; // 0xE4
	::System::Int32 Field_4_27; // 0xE8
	::System::Boolean Field_4_18; // 0xEC
	::System::Boolean Field_4_5; // 0xED
	::System::Int32 Field_4_23; // 0xF0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_4_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Single Method_4_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_5323F2DF46A044DA_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_4_F909359ABEA48347()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_F909359ABEA48347_OFFSET))(this);
	}

	::System::Void Method_4_67251D553B5A612F(::MoleMole::Battle::MonsterAlertInitParams a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::MonsterAlertInitParams))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_67251D553B5A612F_OFFSET))(this, a1);
	}

	::System::Void Method_4_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_56CE4AFC5339F746_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_4_5787A4C72278B2A4()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_5787A4C72278B2A4_OFFSET))(this);
	}

	::System::Boolean Method_4_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_4_FFDCB461A077D183* Method_4_86EA3747C90B07AB()
	{
		return ((::Class_4_FFDCB461A077D183*(*)())((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_86EA3747C90B07AB_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFDCB461A077D183_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
