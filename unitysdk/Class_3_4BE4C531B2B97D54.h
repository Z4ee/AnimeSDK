#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBossTotalHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4BE4C531B2B97D54_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146A9330)
#define CLASS_3_4BE4C531B2B97D54__CTOR_OFFSET UNITYSDK_OFFSET(0x146A9250)

inline static constexpr unsigned int Class_3_4BE4C531B2B97D54_TypeDefinitionIndex = 52906;

class Class_3_4BE4C531B2B97D54 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBossTotalHP*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBossTotalHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBossTotalHP*))((::PBYTE)hIl2Cpp + CLASS_3_4BE4C531B2B97D54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4BE4C531B2B97D54_ONTASKBEGIN_OFFSET))(this);
	}
};
