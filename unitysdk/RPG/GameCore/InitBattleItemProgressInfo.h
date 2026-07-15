#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_3E22D4F9E6C0DF9F_OFFSET UNITYSDK_OFFSET(0x1B00FAA0)
#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_5275D65F0270A31E_OFFSET UNITYSDK_OFFSET(0x1B00FAE0)
#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00FAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitBattleItemProgressInfo_TypeDefinitionIndex = 22412;

	class InitBattleItemProgressInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BuffIcon; // 0x18
		::RPG::Client::TextID DescText; // 0x20
		::RPG::GameCore::DynamicFloat* InitCount; // 0x30
		::RPG::Client::TextID InitCountTextID; // 0x38
		::RPG::GameCore::DynamicFloat* InitProgress; // 0x48
		::System::UInt32 PrefabType; // 0x50
		::System::UInt32 TutorialGroupID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E22D4F9E6C0DF9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitBattleItemProgressInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitBattleItemProgressInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_3E22D4F9E6C0DF9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5275D65F0270A31E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_METHOD_3_5275D65F0270A31E_OFFSET))(a1, a2);
		}
	};
}
