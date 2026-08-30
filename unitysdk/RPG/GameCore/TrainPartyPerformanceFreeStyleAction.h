#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION_METHOD_2_27F05C87CC57DE23_OFFSET UNITYSDK_OFFSET(0x1D5E0A70)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E0BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceFreeStyleAction_TypeDefinitionIndex = 16089;

	class TrainPartyPerformanceFreeStyleAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ActionName; // 0x10
		::Il2CppArray<::System::UInt32>* MotionIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_27F05C87CC57DE23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEFREESTYLEACTION_METHOD_2_27F05C87CC57DE23_OFFSET))(a1, a2);
		}
	};
}
