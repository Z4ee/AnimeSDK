#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENURLWEBVIEWRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB034E0)
#define RPG_GAMECORE_OPENURLWEBVIEWRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB03B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenURLWebViewRuleRow_TypeDefinitionIndex = 12834;

	class OpenURLWebViewRuleRow : public ::System::Object
	{
	public:
		::System::UInt32 Default; // 0x10
		::System::UInt32 iOS; // 0x14
		::System::UInt32 RuleID; // 0x18
		::System::UInt32 Windows; // 0x1C
		::System::UInt32 Android; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENURLWEBVIEWRULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenURLWebViewRuleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenURLWebViewRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENURLWEBVIEWRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
