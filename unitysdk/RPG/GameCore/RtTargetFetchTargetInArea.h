#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_METHOD_4_9E0E6D7ED20C3A97_OFFSET UNITYSDK_OFFSET(0x18DD9B00)
#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_METHOD_4_EE94ACD85E603775_OFFSET UNITYSDK_OFFSET(0x18DD99A0)
#define RPG_GAMECORE_RTTARGETFETCHTARGETINAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD9A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchTargetInArea_TypeDefinitionIndex = 23250;

	class RtTargetFetchTargetInArea : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* BasePos; // 0x10
		::RPG::GameCore::TargetEvaluator* BaseDir; // 0x18
		::RPG::GameCore::RtCollision2DShapeConfig* Shape; // 0x20
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* OffsetX; // 0x30
		::RPG::GameCore::ValueEvaluatorConfig* OffsetZ; // 0x38
		::RPG::GameCore::ValueEvaluatorConfig* YawAngle; // 0x40
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* Layers; // 0x48
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x50
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x58
		::RPG::GameCore::PredicateConfig* Filter; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EE94ACD85E603775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTargetInArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTargetInArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_METHOD_4_EE94ACD85E603775_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9E0E6D7ED20C3A97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchTargetInArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTARGETINAREA_METHOD_4_9E0E6D7ED20C3A97_OFFSET))(a1, a2);
		}
	};
}
