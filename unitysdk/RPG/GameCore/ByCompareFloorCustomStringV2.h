#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_7F64F9E5859523F3_OFFSET UNITYSDK_OFFSET(0x1C31BED0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_8585A65610E1C35C_OFFSET UNITYSDK_OFFSET(0x1C31BE90)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_87309496852D89B4_OFFSET UNITYSDK_OFFSET(0x1C31BC60)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_FFFDB48299B47745_OFFSET UNITYSDK_OFFSET(0x1C31BC10)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomStringV2_TypeDefinitionIndex = 20462;

	class ByCompareFloorCustomStringV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::RPG::GameCore::DynamicString* Name; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicString* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FFFDB48299B47745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_FFFDB48299B47745_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87309496852D89B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_87309496852D89B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8585A65610E1C35C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_8585A65610E1C35C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F64F9E5859523F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_7F64F9E5859523F3_OFFSET))(a1, a2);
		}
	};
}
