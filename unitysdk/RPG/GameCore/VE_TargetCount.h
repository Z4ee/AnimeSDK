#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_9AE6A4DABBDAD9CB_OFFSET UNITYSDK_OFFSET(0x190EFCD0)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_EC51F05EF27A0F82_OFFSET UNITYSDK_OFFSET(0x190EFD10)
#define RPG_GAMECORE_VE_TARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_TargetCount_TypeDefinitionIndex = 23035;

	class VE_TargetCount : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AE6A4DABBDAD9CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_TargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_9AE6A4DABBDAD9CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC51F05EF27A0F82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_EC51F05EF27A0F82_OFFSET))(a1, a2);
		}
	};
}
