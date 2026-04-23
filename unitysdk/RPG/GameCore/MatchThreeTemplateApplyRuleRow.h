#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeTemplateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC4A50)
#define RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC4C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeTemplateApplyRuleRow_TypeDefinitionIndex = 11369;

	class MatchThreeTemplateApplyRuleRow : public ::System::Object
	{
	public:
		::System::String* Mode; // 0x10
		::System::String* TemplatePath; // 0x18
		::System::UInt32 Round; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 PR; // 0x28
		::RPG::GameCore::MatchThreeTemplateType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
