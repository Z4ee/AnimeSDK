#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_8DC3A13A939A9841;
class Class_2_ED5B635C4D775055;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveAlongPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97F7806C4408F813_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC386B00)
#define CLASS_3_97F7806C4408F813_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xC3870B0)
#define CLASS_3_97F7806C4408F813_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0xC386D90)
#define CLASS_3_97F7806C4408F813_METHOD_3_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xC386E60)
#define CLASS_3_97F7806C4408F813_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC386B50)
#define CLASS_3_97F7806C4408F813_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC387100)
#define CLASS_3_97F7806C4408F813__CTOR_OFFSET UNITYSDK_OFFSET(0xC3868F0)

inline static constexpr unsigned int Class_3_97F7806C4408F813_TypeDefinitionIndex = 52209;

class Class_3_97F7806C4408F813 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveAlongPath*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x28
	::Class_2_ED5B635C4D775055* KBJNJLBILFH; // 0x30
	::Class_2_8DC3A13A939A9841* IKGBNADHLNA; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveAlongPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveAlongPath*))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813_METHOD_3_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_3_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813_METHOD_3_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F7806C4408F813_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}
};
