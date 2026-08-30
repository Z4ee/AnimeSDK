#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }

#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_5_69D3C2A117464277_OFFSET UNITYSDK_OFFSET(0x1D2467B0)
#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_5_B91BCE26DAAC5C07_OFFSET UNITYSDK_OFFSET(0x1D246750)
#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2467A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetStyleWeightAction_TypeDefinitionIndex = 24626;

	class SetStyleWeightAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* StyleWeights; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B91BCE26DAAC5C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetStyleWeightAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetStyleWeightAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_5_B91BCE26DAAC5C07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_69D3C2A117464277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetStyleWeightAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetStyleWeightAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_5_69D3C2A117464277_OFFSET))(a1, a2);
		}
	};
}
