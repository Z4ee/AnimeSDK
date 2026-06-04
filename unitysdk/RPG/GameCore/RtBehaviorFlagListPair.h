#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR_METHOD_2_941353DBFAB69BBB_OFFSET UNITYSDK_OFFSET(0x19BDE5C0)
#define RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDE6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagListPair_TypeDefinitionIndex = 16770;

	class RtBehaviorFlagListPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtBehaviorFlag Key; // 0x10
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* BehaviorFlags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_941353DBFAB69BBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBehaviorFlagListPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBehaviorFlagListPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR_METHOD_2_941353DBFAB69BBB_OFFSET))(a1, a2);
		}
	};
}
