#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_035B8F5A47199758_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A158F0)
#define CLASS_3_035B8F5A47199758__CTOR_OFFSET UNITYSDK_OFFSET(0x13A15810)

inline static constexpr unsigned int Class_3_035B8F5A47199758_TypeDefinitionIndex = 51747;

class Class_3_035B8F5A47199758 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicString*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicString*))((::PBYTE)hIl2Cpp + CLASS_3_035B8F5A47199758__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_035B8F5A47199758_ONTASKBEGIN_OFFSET))(this);
	}
};
