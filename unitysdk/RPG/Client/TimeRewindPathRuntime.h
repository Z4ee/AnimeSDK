#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EntityTimelineControlNodeTransition; }
namespace RPG::Client { class TimeRewindNodeIndexInfo; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System { class String; }

#define RPG_CLIENT_TIMEREWINDPATHRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xE1FE3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindPathRuntime_TypeDefinitionIndex = 63828;

	class TimeRewindPathRuntime : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::Client::TimeRewindNodeIndexInfo*>* Nodes; // 0x18
		::Il2CppArray<::RPG::Client::EntityTimelineControlNodeTransition*>* PathTransitions; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* TransitionDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDPATHRUNTIME__CTOR_OFFSET))(this);
		}
	};
}
