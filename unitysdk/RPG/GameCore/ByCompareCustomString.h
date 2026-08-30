#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_18416825FC03508D_OFFSET UNITYSDK_OFFSET(0x1C3139F0)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_1F12AABEE37CC8D6_OFFSET UNITYSDK_OFFSET(0x1C3137A0)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_26D82281C98CCF17_OFFSET UNITYSDK_OFFSET(0x1C313760)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_9CF4849E7A4BBFEA_OFFSET UNITYSDK_OFFSET(0x1C3139C0)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C313790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCustomString_TypeDefinitionIndex = 23526;

	class ByCompareCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::RPG::GameCore::DynamicString* LeftValue; // 0x28
		::RPG::GameCore::DynamicString* RightValue; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_26D82281C98CCF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_26D82281C98CCF17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F12AABEE37CC8D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_1F12AABEE37CC8D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CF4849E7A4BBFEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_9CF4849E7A4BBFEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18416825FC03508D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_18416825FC03508D_OFFSET))(a1, a2);
		}
	};
}
