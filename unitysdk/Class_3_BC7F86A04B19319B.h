#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByDamageDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC7F86A04B19319B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD24760)
#define CLASS_3_BC7F86A04B19319B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD24680)

inline static constexpr unsigned int Class_3_BC7F86A04B19319B_TypeDefinitionIndex = 55619;

class Class_3_BC7F86A04B19319B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByDamageDataProperty*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByDamageDataProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + CLASS_3_BC7F86A04B19319B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC7F86A04B19319B_ONTASKBEGIN_OFFSET))(this);
	}
};
