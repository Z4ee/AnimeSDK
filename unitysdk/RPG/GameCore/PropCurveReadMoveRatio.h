#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEREADMOVERATIO_METHOD_3_99F28BDF3260B2A3_OFFSET UNITYSDK_OFFSET(0x1D176C60)
#define RPG_GAMECORE_PROPCURVEREADMOVERATIO_METHOD_3_AEAC275D27100814_OFFSET UNITYSDK_OFFSET(0x1D176D20)
#define RPG_GAMECORE_PROPCURVEREADMOVERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D176CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveReadMoveRatio_TypeDefinitionIndex = 20764;

	class PropCurveReadMoveRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* WriteTargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicFloatName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEREADMOVERATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99F28BDF3260B2A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveReadMoveRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveReadMoveRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEREADMOVERATIO_METHOD_3_99F28BDF3260B2A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEAC275D27100814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveReadMoveRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveReadMoveRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEREADMOVERATIO_METHOD_3_AEAC275D27100814_OFFSET))(a1, a2);
		}
	};
}
