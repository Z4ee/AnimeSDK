#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvAIRemeberGobackPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0D48B98FD374B4E8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6C7BC0)
#define CLASS_3_0D48B98FD374B4E8__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C7B90)

inline static constexpr unsigned int Class_3_0D48B98FD374B4E8_TypeDefinitionIndex = 48932;

class Class_3_0D48B98FD374B4E8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvAIRemeberGobackPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAIRemeberGobackPosition*))((::PBYTE)hIl2Cpp + CLASS_3_0D48B98FD374B4E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D48B98FD374B4E8_ONTASKBEGIN_OFFSET))(this);
	}
};
