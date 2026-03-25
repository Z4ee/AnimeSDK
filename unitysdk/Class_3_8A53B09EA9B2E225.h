#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8A53B09EA9B2E225_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x110CC070)
#define CLASS_3_8A53B09EA9B2E225_ONSKIP_OFFSET UNITYSDK_OFFSET(0x110CC080)
#define CLASS_3_8A53B09EA9B2E225_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110CBEA0)
#define CLASS_3_8A53B09EA9B2E225__CTOR_OFFSET UNITYSDK_OFFSET(0x110CBE70)

inline static constexpr unsigned int Class_3_8A53B09EA9B2E225_TypeDefinitionIndex = 42385;

class Class_3_8A53B09EA9B2E225 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntityStopLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_8A53B09EA9B2E225__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A53B09EA9B2E225_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A53B09EA9B2E225_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A53B09EA9B2E225_ONSKIP_OFFSET))(this);
	}
};
