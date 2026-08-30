#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_19AA049BF7E0F882_OFFSET UNITYSDK_OFFSET(0x1CEC8590)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_C4D4C106E1F6692B_OFFSET UNITYSDK_OFFSET(0x1CEC8760)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_E4F0AA8E988C0343_OFFSET UNITYSDK_OFFSET(0x1CEC8550)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_EEB6EE66342A73C4_OFFSET UNITYSDK_OFFSET(0x1CEC8730)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC8580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGraphDynamicString_TypeDefinitionIndex = 20474;

	class ByCompareGraphDynamicString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4F0AA8E988C0343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_E4F0AA8E988C0343_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19AA049BF7E0F882(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_19AA049BF7E0F882_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEB6EE66342A73C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_EEB6EE66342A73C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4D4C106E1F6692B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_C4D4C106E1F6692B_OFFSET))(a1, a2);
		}
	};
}
