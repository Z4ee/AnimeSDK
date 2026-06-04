#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBattleBuffChangeEvent_BuffDisplayData; }
namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELBATTLEBUFFCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC5012F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBattleBuffChangeEvent_TypeDefinitionIndex = 72788;

	class ChimeraDuelBattleBuffChangeEvent : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelBattleBuffChangeEvent_BuffDisplayData* NewlyAddedBuff; // 0x10
		::System::String* NewlyRemovedBuffUniqueName; // 0x18
		::System::Int32 TargetUniqueID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBATTLEBUFFCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
