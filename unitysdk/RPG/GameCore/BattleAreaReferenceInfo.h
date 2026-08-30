#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAREAREFERENCEINFO_METHOD_2_D32310353F5C8363_OFFSET UNITYSDK_OFFSET(0x1B2F0650)
#define RPG_GAMECORE_BATTLEAREAREFERENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F0790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaReferenceInfo_TypeDefinitionIndex = 17039;

	class BattleAreaReferenceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 UnifiedBattleAreaID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAREFERENCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D32310353F5C8363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAreaReferenceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaReferenceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAREFERENCEINFO_METHOD_2_D32310353F5C8363_OFFSET))(a1, a2);
		}
	};
}
