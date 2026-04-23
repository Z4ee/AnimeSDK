#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PerformDelayExecute; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_39141A8D7C0B4CA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E26090)
#define CLASS_3_39141A8D7C0B4CA4__CTOR_OFFSET UNITYSDK_OFFSET(0x9E26060)

inline static constexpr unsigned int Class_3_39141A8D7C0B4CA4_TypeDefinitionIndex = 50945;

class Class_3_39141A8D7C0B4CA4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PerformDelayExecute*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformDelayExecute* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformDelayExecute*))((::PBYTE)hIl2Cpp + CLASS_3_39141A8D7C0B4CA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39141A8D7C0B4CA4_ONTASKBEGIN_OFFSET))(this);
	}
};
