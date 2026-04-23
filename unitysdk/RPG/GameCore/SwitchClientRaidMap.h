#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWITCHCLIENTRAIDMAP_METHOD_3_5B4DCFE82AAB3B2D_OFFSET UNITYSDK_OFFSET(0x18EB9FC0)
#define RPG_GAMECORE_SWITCHCLIENTRAIDMAP_METHOD_3_6E9F99E215D95926_OFFSET UNITYSDK_OFFSET(0x18EB9F40)
#define RPG_GAMECORE_SWITCHCLIENTRAIDMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB9F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchClientRaidMap_TypeDefinitionIndex = 20409;

	class SwitchClientRaidMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntranceID; // 0x18
		::System::Boolean TargetIsClient; // 0x1C
		::System::String* FinishPerformanceMissionKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCLIENTRAIDMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E9F99E215D95926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchClientRaidMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchClientRaidMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCLIENTRAIDMAP_METHOD_3_6E9F99E215D95926_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B4DCFE82AAB3B2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchClientRaidMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchClientRaidMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCLIENTRAIDMAP_METHOD_3_5B4DCFE82AAB3B2D_OFFSET))(a1, a2);
		}
	};
}
