#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_0E0E5497E37FB4FB_OFFSET UNITYSDK_OFFSET(0x19E463E0)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_1BC4003B40DE696C_OFFSET UNITYSDK_OFFSET(0x19E461E0)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_384D7790067CB991_OFFSET UNITYSDK_OFFSET(0x19E46220)
#define RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_423CEDF4B761E8C5_OFFSET UNITYSDK_OFFSET(0x19E46410)
#define RPG_GAMECORE_VE_TARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E46210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_TargetCount_TypeDefinitionIndex = 22723;

	class VE_TargetCount : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BC4003B40DE696C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_TargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_1BC4003B40DE696C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_384D7790067CB991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_384D7790067CB991_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E0E5497E37FB4FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_0E0E5497E37FB4FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_423CEDF4B761E8C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_METHOD_3_423CEDF4B761E8C5_OFFSET))(a1, a2);
		}
	};
}
