#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_216C14200ED8AFB3_OFFSET UNITYSDK_OFFSET(0x1C31B4B0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_8545FD24898AE274_OFFSET UNITYSDK_OFFSET(0x1C31B240)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_A7A24FE42338C405_OFFSET UNITYSDK_OFFSET(0x1C31B1F0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_E4092035CBEC9E1C_OFFSET UNITYSDK_OFFSET(0x1C31B470)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31B230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomString_TypeDefinitionIndex = 20455;

	class ByCompareFloorCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::RPG::GameCore::DynamicString* Name; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicString* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A7A24FE42338C405(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_A7A24FE42338C405_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8545FD24898AE274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_8545FD24898AE274_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4092035CBEC9E1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_E4092035CBEC9E1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_216C14200ED8AFB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_216C14200ED8AFB3_OFFSET))(a1, a2);
		}
	};
}
