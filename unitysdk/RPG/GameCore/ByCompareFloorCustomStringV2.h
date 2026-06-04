#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_60E3FCF181DE4806_OFFSET UNITYSDK_OFFSET(0x195132B0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_87309496852D89B4_OFFSET UNITYSDK_OFFSET(0x19513390)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_88F40705A23509BC_OFFSET UNITYSDK_OFFSET(0x19513640)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_90C081FF18789D61_OFFSET UNITYSDK_OFFSET(0x195135C0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19513330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomStringV2_TypeDefinitionIndex = 19557;

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

		static ::System::Void Method_4_60E3FCF181DE4806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_60E3FCF181DE4806_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_87309496852D89B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_87309496852D89B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90C081FF18789D61(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_90C081FF18789D61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88F40705A23509BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRINGV2_METHOD_4_88F40705A23509BC_OFFSET))(a1, a2);
		}
	};
}
