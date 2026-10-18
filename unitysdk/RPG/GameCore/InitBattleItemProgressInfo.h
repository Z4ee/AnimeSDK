#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleItemProgressPrefabType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_AE8FAEAAE1550729_OFFSET UNITYSDK_OFFSET(0x1D7877C0)
#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_E373E9D9E6A76EB6_OFFSET UNITYSDK_OFFSET(0x1D787780)
#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7877B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitBattleItemProgressInfo_TypeDefinitionIndex = 23244;

	class InitBattleItemProgressInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BuffIcon; // 0x18
		::RPG::Client::TextID DescText; // 0x20
		::RPG::GameCore::DynamicFloat* InitCount; // 0x30
		::RPG::Client::TextID InitCountTextID; // 0x38
		::RPG::GameCore::DynamicFloat* InitProgress; // 0x48
		::RPG::GameCore::BattleItemProgressPrefabType PrefabType; // 0x50
		::System::UInt32 TutorialGroupID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E373E9D9E6A76EB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitBattleItemProgressInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitBattleItemProgressInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_E373E9D9E6A76EB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE8FAEAAE1550729(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_AE8FAEAAE1550729_OFFSET))(a1, a2);
		}
	};
}
