#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B65C7740BC15A3DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A13910)
#define CLASS_3_B65C7740BC15A3DB__CTOR_OFFSET UNITYSDK_OFFSET(0x10A138E0)

inline static constexpr unsigned int Class_3_B65C7740BC15A3DB_TypeDefinitionIndex = 44435;

class Class_3_B65C7740BC15A3DB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValue*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_B65C7740BC15A3DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B65C7740BC15A3DB_ONTASKBEGIN_OFFSET))(this);
	}
};
