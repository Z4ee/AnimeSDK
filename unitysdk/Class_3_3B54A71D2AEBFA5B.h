#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetReportCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3B54A71D2AEBFA5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89DAB60)
#define CLASS_3_3B54A71D2AEBFA5B__CTOR_OFFSET UNITYSDK_OFFSET(0x89DAB30)

inline static constexpr unsigned int Class_3_3B54A71D2AEBFA5B_TypeDefinitionIndex = 44497;

class Class_3_3B54A71D2AEBFA5B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetReportCustomValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetReportCustomValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetReportCustomValue*))((::PBYTE)hIl2Cpp + CLASS_3_3B54A71D2AEBFA5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B54A71D2AEBFA5B_ONTASKBEGIN_OFFSET))(this);
	}
};
