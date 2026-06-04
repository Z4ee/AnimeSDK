#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_A5DFC69A6DA016D8_OFFSET UNITYSDK_OFFSET(0x19529410)
#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_AD4111DD0FB5AADC_OFFSET UNITYSDK_OFFSET(0x19529260)
#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_ADBB29BD68DC9778_OFFSET UNITYSDK_OFFSET(0x19529190)
#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_CD5D467750A1E6FF_OFFSET UNITYSDK_OFFSET(0x19529490)
#define RPG_GAMECORE_BYCOMPAREPROPID__CTOR_OFFSET UNITYSDK_OFFSET(0x19529210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropID_TypeDefinitionIndex = 20737;

	class ByComparePropID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 PropID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ADBB29BD68DC9778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_ADBB29BD68DC9778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD4111DD0FB5AADC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_AD4111DD0FB5AADC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5DFC69A6DA016D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_A5DFC69A6DA016D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD5D467750A1E6FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_CD5D467750A1E6FF_OFFSET))(a1, a2);
		}
	};
}
