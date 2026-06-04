#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_30F64CF352EC7EAE_OFFSET UNITYSDK_OFFSET(0x19528910)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_84B91C6D481453EC_OFFSET UNITYSDK_OFFSET(0x195289F0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_AE4370B851C239E8_OFFSET UNITYSDK_OFFSET(0x19528D20)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_D06554D747749C85_OFFSET UNITYSDK_OFFSET(0x19528CA0)
#define RPG_GAMECORE_BYCOMPAREPROPHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19528990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropHPRatio_TypeDefinitionIndex = 21037;

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

		static ::System::Void Method_4_30F64CF352EC7EAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_30F64CF352EC7EAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84B91C6D481453EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_84B91C6D481453EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D06554D747749C85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_D06554D747749C85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE4370B851C239E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPHPRATIO_METHOD_4_AE4370B851C239E8_OFFSET))(a1, a2);
		}
	};
}
