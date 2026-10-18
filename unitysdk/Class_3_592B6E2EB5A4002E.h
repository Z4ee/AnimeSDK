#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_8DC3A13A939A9841;
class Class_2_ED5B635C4D775055;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Patrol; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_592B6E2EB5A4002E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB360CE0)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB361700)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xB361300)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_8D55D9B3D3B37BE4_OFFSET UNITYSDK_OFFSET(0xB360F10)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xB361150)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xB361260)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0xB361770)
#define CLASS_3_592B6E2EB5A4002E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB360D30)
#define CLASS_3_592B6E2EB5A4002E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB361350)
#define CLASS_3_592B6E2EB5A4002E_TICK_OFFSET UNITYSDK_OFFSET(0xB361400)
#define CLASS_3_592B6E2EB5A4002E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB361840)
#define CLASS_3_592B6E2EB5A4002E__CTOR_OFFSET UNITYSDK_OFFSET(0xB360C20)

inline static constexpr unsigned int Class_3_592B6E2EB5A4002E_TypeDefinitionIndex = 52216;

class Class_3_592B6E2EB5A4002E : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Patrol*>
{
public:
	static ::System::Single* StaticGet_HHAHBBOMIIL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_592B6E2EB5A4002E_TypeDefinitionIndex)->GetStaticField(0xBB30);
	}
	::Class_2_8DC3A13A939A9841* IKGBNADHLNA; // 0x28
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x30
	::Class_2_ED5B635C4D775055* KBJNJLBILFH; // 0x38
	::System::Single DKOFFPPGEFI; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Patrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Patrol*))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Single Method_3_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_3_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8D55D9B3D3B37BE4(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_8D55D9B3D3B37BE4_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};
