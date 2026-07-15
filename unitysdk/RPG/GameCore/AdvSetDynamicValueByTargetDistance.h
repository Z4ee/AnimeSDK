#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_METHOD_3_0A89A9F2257FAFBF_OFFSET UNITYSDK_OFFSET(0x1BE2CDB0)
#define RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_METHOD_3_227E3B007FAFD2F7_OFFSET UNITYSDK_OFFSET(0x1BE2CE50)
#define RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetDynamicValueByTargetDistance_TypeDefinitionIndex = 19985;

	class AdvSetDynamicValueByTargetDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x18
		::RPG::GameCore::TargetEvaluator* To; // 0x20
		::System::Boolean IgnoreRadius; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x38
		::RPG::GameCore::DynamicString* DynamicKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A89A9F2257FAFBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_METHOD_3_0A89A9F2257FAFBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_227E3B007FAFD2F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_METHOD_3_227E3B007FAFD2F7_OFFSET))(a1, a2);
		}
	};
}
