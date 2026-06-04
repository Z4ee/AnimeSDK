#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_05857B824FE917C0_OFFSET UNITYSDK_OFFSET(0x19526B80)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_2613C42DD498E061_OFFSET UNITYSDK_OFFSET(0x19526DC0)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_825698B02ABFDF4A_OFFSET UNITYSDK_OFFSET(0x19526C50)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_F03A9DD75FB05505_OFFSET UNITYSDK_OFFSET(0x19526E40)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19526C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePhoneMessageItem_TypeDefinitionIndex = 19570;

	class ByComparePhoneMessageItem : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MessageItemID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_05857B824FE917C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_05857B824FE917C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_825698B02ABFDF4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_825698B02ABFDF4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2613C42DD498E061(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_2613C42DD498E061_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F03A9DD75FB05505(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_F03A9DD75FB05505_OFFSET))(a1, a2);
		}
	};
}
