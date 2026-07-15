#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_00E9D23E00A5D6E8_OFFSET UNITYSDK_OFFSET(0x19CFFCF0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_0C8045341E676DF0_OFFSET UNITYSDK_OFFSET(0x19CFF9F0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_7A5AA98BF096BA8F_OFFSET UNITYSDK_OFFSET(0x19CFFD30)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_84B91C6D481453EC_OFFSET UNITYSDK_OFFSET(0x19CFFA40)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFFA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropHPRatio_TypeDefinitionIndex = 21452;

	class ByComparePropHPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* UniqueName; // 0x20
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 GroupPropID; // 0x2C
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::FixPoint CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0C8045341E676DF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_0C8045341E676DF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84B91C6D481453EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_84B91C6D481453EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00E9D23E00A5D6E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_00E9D23E00A5D6E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7A5AA98BF096BA8F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_7A5AA98BF096BA8F_OFFSET))(a1, a2);
		}
	};
}
