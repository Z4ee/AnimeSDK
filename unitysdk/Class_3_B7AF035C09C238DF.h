#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityStopTurnInPlace; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B7AF035C09C238DF_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB6E9F80)
#define CLASS_3_B7AF035C09C238DF_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB6E9F90)
#define CLASS_3_B7AF035C09C238DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6E9EB0)
#define CLASS_3_B7AF035C09C238DF__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E9E80)

inline static constexpr unsigned int Class_3_B7AF035C09C238DF_TypeDefinitionIndex = 52646;

class Class_3_B7AF035C09C238DF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntityStopTurnInPlace*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityStopTurnInPlace* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityStopTurnInPlace*))((::PBYTE)hIl2Cpp + CLASS_3_B7AF035C09C238DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7AF035C09C238DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7AF035C09C238DF_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7AF035C09C238DF_ONSKIP_OFFSET))(this);
	}
};
