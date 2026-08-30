#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_METHOD_3_206CEFF330FAF7A8_OFFSET UNITYSDK_OFFSET(0x1D4E2FE0)
#define RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_METHOD_3_AA143A0775510130_OFFSET UNITYSDK_OFFSET(0x1D4E3020)
#define RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E3010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleItemProgressInfo_TypeDefinitionIndex = 22983;

	class SetBattleItemProgressInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Progress; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::System::Boolean PlayLevelUp; // 0x28
		::System::Boolean PlayClearAnim; // 0x29
		::RPG::Client::TextID CountTextID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_206CEFF330FAF7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleItemProgressInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleItemProgressInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_METHOD_3_206CEFF330FAF7A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA143A0775510130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_METHOD_3_AA143A0775510130_OFFSET))(a1, a2);
		}
	};
}
