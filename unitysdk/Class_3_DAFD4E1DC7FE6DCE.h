#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DAFD4E1DC7FE6DCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B1A320)
#define CLASS_3_DAFD4E1DC7FE6DCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1A2F0)

inline static constexpr unsigned int Class_3_DAFD4E1DC7FE6DCE_TypeDefinitionIndex = 53016;

class Class_3_DAFD4E1DC7FE6DCE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLevel*))((::PBYTE)hIl2Cpp + CLASS_3_DAFD4E1DC7FE6DCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAFD4E1DC7FE6DCE_ONTASKBEGIN_OFFSET))(this);
	}
};
