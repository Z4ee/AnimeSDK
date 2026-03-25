#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F89760)
#define RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F898D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantTipsShowCaseRow_TypeDefinitionIndex = 11559;

	class AssistantTipsShowCaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TipsIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::AssistantShowCaseType ShowCase; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AssistantTipsShowCaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistantTipsShowCaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
