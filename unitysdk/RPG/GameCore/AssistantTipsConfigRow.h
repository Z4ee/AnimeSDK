#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AssistantRuleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A064600)
#define RPG_GAMECORE_ASSISTANTTIPSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A064800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantTipsConfigRow_TypeDefinitionIndex = 12197;

	class AssistantTipsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::Client::TextID Content; // 0x18
		::RPG::GameCore::AssistantRuleType TipsRule; // 0x28
		::System::UInt32 TipsID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistantTipsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistantTipsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
