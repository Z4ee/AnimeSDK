#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GroupPredicate.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupConfig.h"

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIGWITHPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13854E70)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TraceGroupConfigWithPredicate_TypeDefinitionIndex = 39036;

	class TraceGroupConfigWithPredicate : public ::MoleMole::MonoEffectContrllerModule::TraceGroupConfig
	{
	public:
		::MoleMole::MonoEffectContrllerModule::GroupPredicate Predicate; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIGWITHPREDICATE__CTOR_OFFSET))(this);
		}
	};
}
