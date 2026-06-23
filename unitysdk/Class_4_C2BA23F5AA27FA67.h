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
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_4_C2BA23F5AA27FA67_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14540EF0)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x145414C0)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0x14541280)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14541120)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x145413D0)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_5787A4C72278B2A4_OFFSET UNITYSDK_OFFSET(0x14541220)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_68276195262F8BA6_OFFSET UNITYSDK_OFFSET(0x14541040)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x14541340)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_86EA3747C90B07AB_OFFSET UNITYSDK_OFFSET(0x14541130)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_9BFAC6EF31A1DE88_OFFSET UNITYSDK_OFFSET(0x145415F0)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14541560)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x14540750)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x14540D20)
#define CLASS_4_C2BA23F5AA27FA67_METHOD_4_F909359ABEA48347_OFFSET UNITYSDK_OFFSET(0x145413E0)
#define CLASS_4_C2BA23F5AA27FA67_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x145407E0)
#define CLASS_4_C2BA23F5AA27FA67__CCTOR_OFFSET UNITYSDK_OFFSET(0x14540F40)
#define CLASS_4_C2BA23F5AA27FA67__CTOR_OFFSET UNITYSDK_OFFSET(0x14540FC0)

inline static constexpr unsigned int Class_4_C2BA23F5AA27FA67_TypeDefinitionIndex = 41058;

class Class_4_C2BA23F5AA27FA67 : public ::Class_3_B51C9D0AAAA6A5F0
{
public:
	// static const ::System::Int32 Field_4_4 = 0x63; // 0x0
	// static const ::System::Int32 Field_4_30 = 0xCE; // 0x0
	::System::String* Field_4_28; // 0x70
	::Class_1_8289F2785D9AA990* Field_4_3; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EnterBattleState, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>* Field_4_6; // 0x80
	::System::Collections::Generic::List_1<::System::String*>* Field_4_27; // 0x88
	::UnityEngine::AnimationCurve* Field_4_26; // 0x90
	::Class_1_8289F2785D9AA990* Field_4_0; // 0x98
	::System::Action_2<::Class_4_C2BA23F5AA27FA67*, ::System::Boolean>* Field_4_11; // 0xA0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EnterBattleState, ::System::Boolean>* Field_4_7; // 0xA8
	::Class_1_8289F2785D9AA990* Field_4_1; // 0xB0
	::Class_1_8289F2785D9AA990* Field_4_2; // 0xB8
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_4_22; // 0xC0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_4_15; // 0xC8
	::MoleMole::Config::ConfigMonsterAlertItem* Field_4_12; // 0xD0
	::System::Boolean Field_4_8; // 0xD8
	::System::Boolean Field_4_18; // 0xD9
	::System::Boolean Field_4_24; // 0xDA
	::System::Boolean Field_4_19; // 0xDB
	::System::Int32 Field_4_21; // 0xDC
	::System::Int32 Field_4_23; // 0xE0
	::System::Boolean Field_4_10; // 0xE4
	::System::Boolean Field_4_20; // 0xE5
	::System::Boolean Field_4_5; // 0xE6
	::System::Boolean Field_4_9; // 0xE7
	::System::Boolean Field_4_16; // 0xE8
	::System::Boolean Field_4_17; // 0xE9
	::System::Single Field_4_14; // 0xEC
	::System::Int32 Field_4_29; // 0xF0
	::System::Single Field_4_13; // 0xF4
	::UnityEngine::Vector3 Field_4_25; // 0xF8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_4_68276195262F8BA6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_68276195262F8BA6_OFFSET))(this, a1);
	}

	::System::Single Method_4_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_5323F2DF46A044DA_OFFSET))(this);
	}

	static ::Class_4_C2BA23F5AA27FA67* Method_4_86EA3747C90B07AB()
	{
		return ((::Class_4_C2BA23F5AA27FA67*(*)())((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_86EA3747C90B07AB_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_4_5787A4C72278B2A4()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_5787A4C72278B2A4_OFFSET))(this);
	}

	::System::String* Method_4_49091FA7D0FEFC35()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_49091FA7D0FEFC35_OFFSET))(this);
	}

	::System::Void Method_4_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_56CE4AFC5339F746_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_4_F909359ABEA48347()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_F909359ABEA48347_OFFSET))(this);
	}

	::System::Boolean Method_4_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_4_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void Method_4_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_4_9BFAC6EF31A1DE88(::MoleMole::Battle::MonsterAlertInitParams a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::MonsterAlertInitParams))((::PBYTE)hIl2Cpp + CLASS_4_C2BA23F5AA27FA67_METHOD_4_9BFAC6EF31A1DE88_OFFSET))(this, a1);
	}
};
