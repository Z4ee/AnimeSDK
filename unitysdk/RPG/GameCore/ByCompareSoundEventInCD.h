#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_0F07B4036AAFD799_OFFSET UNITYSDK_OFFSET(0x19532620)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_CE79C2851D3ADDD7_OFFSET UNITYSDK_OFFSET(0x195326F0)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_F6521D3FE0D0ACB5_OFFSET UNITYSDK_OFFSET(0x195328F0)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_FFBA5991C2165AAC_OFFSET UNITYSDK_OFFSET(0x19532870)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD__CTOR_OFFSET UNITYSDK_OFFSET(0x195326A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSoundEventInCD_TypeDefinitionIndex = 19472;

	class ByCompareSoundEventInCD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* SoundEventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F07B4036AAFD799(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_0F07B4036AAFD799_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE79C2851D3ADDD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_CE79C2851D3ADDD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FFBA5991C2165AAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_FFBA5991C2165AAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6521D3FE0D0ACB5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_F6521D3FE0D0ACB5_OFFSET))(a1, a2);
		}
	};
}
