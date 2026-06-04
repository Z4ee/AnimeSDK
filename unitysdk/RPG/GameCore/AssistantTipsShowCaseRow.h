#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194848E0)
#define RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19484A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantTipsShowCaseRow_TypeDefinitionIndex = 12063;

	class AssistantTipsShowCaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TipsIDList; // 0x10
		::RPG::GameCore::AssistantShowCaseType ShowCase; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistantTipsShowCaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistantTipsShowCaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
