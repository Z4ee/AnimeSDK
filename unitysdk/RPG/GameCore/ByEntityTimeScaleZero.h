#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_0B6131B44729635F_OFFSET UNITYSDK_OFFSET(0x195492B0)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_19685331186770CD_OFFSET UNITYSDK_OFFSET(0x195494B0)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_310E0C75F8458A81_OFFSET UNITYSDK_OFFSET(0x195491E0)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_5801D6A4D4BEE3C4_OFFSET UNITYSDK_OFFSET(0x19549430)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO__CTOR_OFFSET UNITYSDK_OFFSET(0x19549260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityTimeScaleZero_TypeDefinitionIndex = 19447;

	class ByEntityTimeScaleZero : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_310E0C75F8458A81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_310E0C75F8458A81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0B6131B44729635F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_0B6131B44729635F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5801D6A4D4BEE3C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_5801D6A4D4BEE3C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19685331186770CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_19685331186770CD_OFFSET))(a1, a2);
		}
	};
}
