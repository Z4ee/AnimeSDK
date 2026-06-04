#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AssistantRuleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194846D0)
#define RPG_GAMECORE_ASSISTANTTIPSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194848D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantTipsConfigRow_TypeDefinitionIndex = 12065;

	class AssistantTipsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::AssistantRuleType TipsRule; // 0x18
		::System::UInt32 TipsID; // 0x1C
		::RPG::Client::TextID Content; // 0x20

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
