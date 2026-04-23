#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DefineDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8466B2A828867B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A96930)
#define CLASS_3_E8466B2A828867B5__CTOR_OFFSET UNITYSDK_OFFSET(0x11A96900)

inline static constexpr unsigned int Class_3_E8466B2A828867B5_TypeDefinitionIndex = 50731;

class Class_3_E8466B2A828867B5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DefineDynamicValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_E8466B2A828867B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8466B2A828867B5_ONTASKBEGIN_OFFSET))(this);
	}
};
