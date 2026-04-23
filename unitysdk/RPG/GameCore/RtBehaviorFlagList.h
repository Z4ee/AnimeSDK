#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBEHAVIORFLAGLIST_METHOD_2_5BCE7C12CA2A7F73_OFFSET UNITYSDK_OFFSET(0x18DC7A50)
#define RPG_GAMECORE_RTBEHAVIORFLAGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC7B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagList_TypeDefinitionIndex = 16748;

	class RtBehaviorFlagList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* BehaviorFlags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5BCE7C12CA2A7F73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBehaviorFlagList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBehaviorFlagList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLIST_METHOD_2_5BCE7C12CA2A7F73_OFFSET))(a1, a2);
		}
	};
}
