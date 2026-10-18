#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SwordTrainingSetDynamicValueByHPMultiplier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A77383813923A5C7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD751F00)
#define CLASS_3_A77383813923A5C7__CTOR_OFFSET UNITYSDK_OFFSET(0xD751E20)

inline static constexpr unsigned int Class_3_A77383813923A5C7_TypeDefinitionIndex = 55701;

class Class_3_A77383813923A5C7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*))((::PBYTE)hIl2Cpp + CLASS_3_A77383813923A5C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A77383813923A5C7_ONTASKBEGIN_OFFSET))(this);
	}
};
