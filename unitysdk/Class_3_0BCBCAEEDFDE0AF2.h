#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPlayerEnterAlertDeviceTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0BCBCAEEDFDE0AF2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139D4C00)
#define CLASS_3_0BCBCAEEDFDE0AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x139D4BD0)

inline static constexpr unsigned int Class_3_0BCBCAEEDFDE0AF2_TypeDefinitionIndex = 49068;

class Class_3_0BCBCAEEDFDE0AF2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_0BCBCAEEDFDE0AF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BCBCAEEDFDE0AF2_ONTASKBEGIN_OFFSET))(this);
	}
};
