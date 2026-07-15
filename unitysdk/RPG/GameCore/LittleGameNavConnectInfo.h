#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameNavConnectType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO_METHOD_2_CAFCEEF925C1CF02_OFFSET UNITYSDK_OFFSET(0x1BCC3B00)
#define RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC3CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameNavConnectInfo_TypeDefinitionIndex = 16640;

	class LittleGameNavConnectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameNavConnectType ConnectionType; // 0x10
		::System::UInt32 LevelGroupID; // 0x14
		::System::UInt32 LevelInstanceID; // 0x18
		::System::UInt32 LittleGameEntityID; // 0x1C
		::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* ConditionInfos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CAFCEEF925C1CF02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameNavConnectInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameNavConnectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO_METHOD_2_CAFCEEF925C1CF02_OFFSET))(a1, a2);
		}
	};
}
