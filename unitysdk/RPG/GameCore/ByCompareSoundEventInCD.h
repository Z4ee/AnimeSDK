#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_6E4ACB246CCA4ADA_OFFSET UNITYSDK_OFFSET(0x1A8A5060)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_B32464D69809CF36_OFFSET UNITYSDK_OFFSET(0x1A8A4E70)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_CC3E61B8347EB9CD_OFFSET UNITYSDK_OFFSET(0x1A8A5030)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_CE79C2851D3ADDD7_OFFSET UNITYSDK_OFFSET(0x1A8A4EB0)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A4EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSoundEventInCD_TypeDefinitionIndex = 19830;

	class ByCompareSoundEventInCD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* SoundEventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B32464D69809CF36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_B32464D69809CF36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE79C2851D3ADDD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_CE79C2851D3ADDD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC3E61B8347EB9CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_CC3E61B8347EB9CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E4ACB246CCA4ADA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_METHOD_4_6E4ACB246CCA4ADA_OFFSET))(a1, a2);
		}
	};
}
