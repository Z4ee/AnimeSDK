#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F5001838B73D62A7;
namespace MoleMole { class CGRuntimeUnit; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5EDF0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP___C__DISPLAYCLASS4_1__REBIND_B__1_OFFSET UNITYSDK_OFFSET(0x15E5EE00)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineMap___c__DisplayClass4_1_TypeDefinitionIndex = 63420;

	class RuntimeTimelineMap___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::MoleMole::CGRuntimeUnit* unitReferenceInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _Rebind_b__1(::Class_1_F5001838B73D62A7* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F5001838B73D62A7*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP___C__DISPLAYCLASS4_1__REBIND_B__1_OFFSET))(this, item);
		}
	};
}
