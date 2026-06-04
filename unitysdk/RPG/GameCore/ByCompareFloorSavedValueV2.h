#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_36AD62BE269B6180_OFFSET UNITYSDK_OFFSET(0x19514110)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_8CED1F00402D5D56_OFFSET UNITYSDK_OFFSET(0x195141F0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_ACCFF8B4B95961A2_OFFSET UNITYSDK_OFFSET(0x195144B0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_D5938E80A98ACF83_OFFSET UNITYSDK_OFFSET(0x19514430)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19514190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorSavedValueV2_TypeDefinitionIndex = 19563;

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

		static ::System::Void Method_4_36AD62BE269B6180(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_36AD62BE269B6180_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CED1F00402D5D56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_8CED1F00402D5D56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5938E80A98ACF83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_D5938E80A98ACF83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ACCFF8B4B95961A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUEV2_METHOD_4_ACCFF8B4B95961A2_OFFSET))(a1, a2);
		}
	};
}
