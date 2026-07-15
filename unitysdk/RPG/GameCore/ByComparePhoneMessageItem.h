#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_14B83C1441B566F3_OFFSET UNITYSDK_OFFSET(0x19CFD8A0)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_1AD8E884CD02065C_OFFSET UNITYSDK_OFFSET(0x19CFD870)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_825698B02ABFDF4A_OFFSET UNITYSDK_OFFSET(0x19CFD700)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_98F0BD4D2B7A8217_OFFSET UNITYSDK_OFFSET(0x19CFD6C0)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFD6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePhoneMessageItem_TypeDefinitionIndex = 19929;

	class ByComparePhoneMessageItem : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MessageItemID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98F0BD4D2B7A8217(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_98F0BD4D2B7A8217_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_825698B02ABFDF4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_825698B02ABFDF4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1AD8E884CD02065C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_1AD8E884CD02065C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14B83C1441B566F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_METHOD_4_14B83C1441B566F3_OFFSET))(a1, a2);
		}
	};
}
