#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerMoveWithPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8CC10FDB5BF2C229_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ED2440)
#define CLASS_3_8CC10FDB5BF2C229__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED2410)

inline static constexpr unsigned int Class_3_8CC10FDB5BF2C229_TypeDefinitionIndex = 58082;

class Class_3_8CC10FDB5BF2C229 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureTriggerMoveWithPath*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMoveWithPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMoveWithPath*))((::PBYTE)hIl2Cpp + CLASS_3_8CC10FDB5BF2C229__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC10FDB5BF2C229_ONTASKBEGIN_OFFSET))(this);
	}
};
