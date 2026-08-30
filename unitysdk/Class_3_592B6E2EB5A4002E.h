#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Patrol; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_592B6E2EB5A4002E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB52B050)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xB52B530)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_8F25DA58F977E86D_OFFSET UNITYSDK_OFFSET(0xB52B280)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB52B4A0)
#define CLASS_3_592B6E2EB5A4002E_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0xB52B8F0)
#define CLASS_3_592B6E2EB5A4002E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB52B0A0)
#define CLASS_3_592B6E2EB5A4002E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB52B580)
#define CLASS_3_592B6E2EB5A4002E_TICK_OFFSET UNITYSDK_OFFSET(0xB52B620)
#define CLASS_3_592B6E2EB5A4002E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB52B9C0)
#define CLASS_3_592B6E2EB5A4002E__CTOR_OFFSET UNITYSDK_OFFSET(0xB52AF90)

inline static constexpr unsigned int Class_3_592B6E2EB5A4002E_TypeDefinitionIndex = 52499;

class Class_3_592B6E2EB5A4002E : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Patrol*>
{
public:
	static ::System::Single* StaticGet_HHAHBBOMIIL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_592B6E2EB5A4002E_TypeDefinitionIndex)->GetStaticField(0x13A50);
	}
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x28
	::Class_2_A0580152EB393340* KBJNJLBILFH; // 0x30
	::Class_2_19E76B515E7B257C* IKGBNADHLNA; // 0x38
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

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
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

	::System::Boolean Method_3_8F25DA58F977E86D(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_8F25DA58F977E86D_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592B6E2EB5A4002E_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}
};
