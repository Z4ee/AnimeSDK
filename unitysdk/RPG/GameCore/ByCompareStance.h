#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_4F5E7533FF1A3EFE_OFFSET UNITYSDK_OFFSET(0x1CF002F0)
#define RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_7F980E1B269F8610_OFFSET UNITYSDK_OFFSET(0x1CF00030)
#define RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_CBB2FC81F1566EA1_OFFSET UNITYSDK_OFFSET(0x1CEFFFF0)
#define RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_F279BF120661D9F0_OFFSET UNITYSDK_OFFSET(0x1CF002C0)
#define RPG_GAMECORE_BYCOMPARESTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF00020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStance_TypeDefinitionIndex = 22299;

	class ByCompareStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean IncludeRedStance; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CBB2FC81F1566EA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_CBB2FC81F1566EA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F980E1B269F8610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_7F980E1B269F8610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F279BF120661D9F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_F279BF120661D9F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F5E7533FF1A3EFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_4F5E7533FF1A3EFE_OFFSET))(a1, a2);
		}
	};
}
