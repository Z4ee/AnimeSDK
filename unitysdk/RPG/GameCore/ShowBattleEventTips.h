#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLEEVENTTIPS_METHOD_3_40D29FF81360AF56_OFFSET UNITYSDK_OFFSET(0x1E0A3410)
#define RPG_GAMECORE_SHOWBATTLEEVENTTIPS_METHOD_3_B5C79D1685159719_OFFSET UNITYSDK_OFFSET(0x1E0A3450)
#define RPG_GAMECORE_SHOWBATTLEEVENTTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleEventTips_TypeDefinitionIndex = 22686;

	class ShowBattleEventTips : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextTips; // 0x18
		::System::Single TotalTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTTIPS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40D29FF81360AF56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleEventTips*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleEventTips*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTTIPS_METHOD_3_40D29FF81360AF56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5C79D1685159719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleEventTips* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleEventTips*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEEVENTTIPS_METHOD_3_B5C79D1685159719_OFFSET))(a1, a2);
		}
	};
}
