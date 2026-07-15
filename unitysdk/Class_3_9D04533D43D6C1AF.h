#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideFloorDefaultEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D04533D43D6C1AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183C3FA0)
#define CLASS_3_9D04533D43D6C1AF__CTOR_OFFSET UNITYSDK_OFFSET(0x183C3F70)

inline static constexpr unsigned int Class_3_9D04533D43D6C1AF_TypeDefinitionIndex = 55663;

class Class_3_9D04533D43D6C1AF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideFloorDefaultEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideFloorDefaultEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_9D04533D43D6C1AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D04533D43D6C1AF_ONTASKBEGIN_OFFSET))(this);
	}
};
