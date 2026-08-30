#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1EFC11DC8D7D24B8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A017A30)
#define CLASS_3_1EFC11DC8D7D24B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A017A70)
#define CLASS_3_1EFC11DC8D7D24B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A017A00)

inline static constexpr unsigned int Class_3_1EFC11DC8D7D24B8_TypeDefinitionIndex = 55687;

class Class_3_1EFC11DC8D7D24B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectProgress*))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EFC11DC8D7D24B8_ONTASKBEGIN_OFFSET))(this);
	}
};
