#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByGridFightProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_77630654C9285164_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127CCDF0)
#define CLASS_3_77630654C9285164__CTOR_OFFSET UNITYSDK_OFFSET(0x127CCD10)

inline static constexpr unsigned int Class_3_77630654C9285164_TypeDefinitionIndex = 51112;

class Class_3_77630654C9285164 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByGridFightProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*))((::PBYTE)hIl2Cpp + CLASS_3_77630654C9285164__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77630654C9285164_ONTASKBEGIN_OFFSET))(this);
	}
};
