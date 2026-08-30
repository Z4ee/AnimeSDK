#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_576E08067ED778DE_OFFSET UNITYSDK_OFFSET(0x1D18C560)
#define RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_7DCB065A69407B03_OFFSET UNITYSDK_OFFSET(0x1D18C520)
#define RPG_GAMECORE_QTECATCHGHOSTREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18C550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostRewind_TypeDefinitionIndex = 21798;

	class QteCatchGhostRewind : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Monster; // 0x18
		::RPG::GameCore::TargetEvaluator* TimeCrack; // 0x20
		::RPG::GameCore::TargetEvaluator* ShadowBox; // 0x28
		::RPG::GameCore::DynamicFloat* GoodRadius; // 0x30
		::RPG::GameCore::DynamicFloat* StruggleDuration; // 0x38
		::RPG::GameCore::DynamicFloat* InteractRadius; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DCB065A69407B03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostRewind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostRewind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_7DCB065A69407B03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_576E08067ED778DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostRewind* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostRewind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTREWIND_METHOD_3_576E08067ED778DE_OFFSET))(a1, a2);
		}
	};
}
