#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveAlongPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97F7806C4408F813_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC480DE0)
#define CLASS_3_97F7806C4408F813_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xC481370)
#define CLASS_3_97F7806C4408F813_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0xC481060)
#define CLASS_3_97F7806C4408F813_METHOD_3_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xC481130)
#define CLASS_3_97F7806C4408F813_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC480E30)
#define CLASS_3_97F7806C4408F813_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4813C0)
#define CLASS_3_97F7806C4408F813__CTOR_OFFSET UNITYSDK_OFFSET(0xC480BD0)

inline static constexpr unsigned int Class_3_97F7806C4408F813_TypeDefinitionIndex = 52495;

class Class_3_97F7806C4408F813 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveAlongPath*>
{
public:
	::Class_2_19E76B515E7B257C* IKGBNADHLNA; // 0x28
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x30
	::Class_2_A0580152EB393340* KBJNJLBILFH; // 0x38

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
