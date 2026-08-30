#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_0C55CC501A60193D_OFFSET UNITYSDK_OFFSET(0x1C31D330)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_15B19C7D72978E5A_OFFSET UNITYSDK_OFFSET(0x1C31D2F0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_72868B275624E00B_OFFSET UNITYSDK_OFFSET(0x1C31D060)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_8CED1F00402D5D56_OFFSET UNITYSDK_OFFSET(0x1C31D0B0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31D0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorSavedValueV2_TypeDefinitionIndex = 20468;

	class ByCompareFloorSavedValueV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* DynamicName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Int16 CompareValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_72868B275624E00B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_72868B275624E00B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CED1F00402D5D56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_8CED1F00402D5D56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15B19C7D72978E5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_15B19C7D72978E5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C55CC501A60193D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_0C55CC501A60193D_OFFSET))(a1, a2);
		}
	};
}
