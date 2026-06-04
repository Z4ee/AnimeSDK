#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_2A99F93A53185243_OFFSET UNITYSDK_OFFSET(0x19D2B850)
#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_7FB2F87850E9FDAA_OFFSET UNITYSDK_OFFSET(0x19D1D250)
#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_E4A028C13521E48E_OFFSET UNITYSDK_OFFSET(0x19D2C8F0)
#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_F0E2B86E870FE4D6_OFFSET UNITYSDK_OFFSET(0x19D2C960)
#define RPG_GAMECORE_TARGETSORTBYAITAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1D230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByAITag_TypeDefinitionIndex = 22673;

	class TargetSortByAITag : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* AITagKey; // 0x10
		::System::Boolean HighestFirst; // 0x18
		::RPG::GameCore::DynamicFloat* MaxClamp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4A028C13521E48E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_E4A028C13521E48E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FB2F87850E9FDAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_7FB2F87850E9FDAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A99F93A53185243(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_2A99F93A53185243_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0E2B86E870FE4D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_F0E2B86E870FE4D6_OFFSET))(a1, a2);
		}
	};
}
