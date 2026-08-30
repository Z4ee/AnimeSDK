#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseSortConfig.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/ResolveMultiValueType.h"
#include "unitysdk/RPG/GameCore/SortRuleType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SORTBYMODIFIERVALUE_METHOD_3_0AF2CDC00A1579AD_OFFSET UNITYSDK_OFFSET(0x1D0A70F0)
#define RPG_GAMECORE_SORTBYMODIFIERVALUE_METHOD_3_D5B9E37A1B4C83DC_OFFSET UNITYSDK_OFFSET(0x1D0A70A0)
#define RPG_GAMECORE_SORTBYMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A70E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SortByModifierValue_TypeDefinitionIndex = 18045;

	class SortByModifierValue : public ::RPG::GameCore::BaseSortConfig
	{
	public:
		::RPG::GameCore::SortRuleType SortRule; // 0x10
		::RPG::GameCore::ResolveMultiValueType ResolveType; // 0x14
		::System::String* ModifierName; // 0x18
		::RPG::GameCore::ModifierValueType ValueType; // 0x20
		::RPG::GameCore::TargetEvaluator* ModifierCaster; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5B9E37A1B4C83DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SortByModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SortByModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERVALUE_METHOD_3_D5B9E37A1B4C83DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AF2CDC00A1579AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SortByModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SortByModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERVALUE_METHOD_3_0AF2CDC00A1579AD_OFFSET))(a1, a2);
		}
	};
}
