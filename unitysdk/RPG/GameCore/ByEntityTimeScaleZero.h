#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_0B6131B44729635F_OFFSET UNITYSDK_OFFSET(0x1A8C1180)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_3B3BF599154ACB3B_OFFSET UNITYSDK_OFFSET(0x1A8C1330)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_53BCEA178FE070B5_OFFSET UNITYSDK_OFFSET(0x1A8C1300)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_6A95AFED7A90BAFE_OFFSET UNITYSDK_OFFSET(0x1A8C1140)
#define RPG_GAMECORE_BYENTITYTIMESCALEZERO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C1170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityTimeScaleZero_TypeDefinitionIndex = 19805;

	class ByEntityTimeScaleZero : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A95AFED7A90BAFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_6A95AFED7A90BAFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0B6131B44729635F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_0B6131B44729635F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53BCEA178FE070B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_53BCEA178FE070B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B3BF599154ACB3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYTIMESCALEZERO_METHOD_4_3B3BF599154ACB3B_OFFSET))(a1, a2);
		}
	};
}
