#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_95190318CE71599D_OFFSET UNITYSDK_OFFSET(0x18E57280)
#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_DE2037151DF4A5EC_OFFSET UNITYSDK_OFFSET(0x18E57300)
#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON__CTOR_OFFSET UNITYSDK_OFFSET(0x18E572D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActionCountDownIcon_TypeDefinitionIndex = 22687;

	class ShowActionCountDownIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ActionIndex; // 0x18
		::System::UInt32 StageBattleEventId; // 0x1C
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95190318CE71599D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionCountDownIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionCountDownIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_95190318CE71599D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE2037151DF4A5EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowActionCountDownIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowActionCountDownIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_METHOD_3_DE2037151DF4A5EC_OFFSET))(a1, a2);
		}
	};
}
