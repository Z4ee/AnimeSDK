#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterEnhancedState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9EC69041F48983AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3CA7B0)
#define CLASS_3_9EC69041F48983AF__CTOR_OFFSET UNITYSDK_OFFSET(0xF3CA780)

inline static constexpr unsigned int Class_3_9EC69041F48983AF_TypeDefinitionIndex = 55567;

class Class_3_9EC69041F48983AF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterEnhancedState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterEnhancedState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterEnhancedState*))((::PBYTE)hIl2Cpp + CLASS_3_9EC69041F48983AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EC69041F48983AF_ONTASKBEGIN_OFFSET))(this);
	}
};
