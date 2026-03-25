#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_D94041FFD446F4F5_OFFSET UNITYSDK_OFFSET(0x16F40450)
#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_F7A2F31455B41CE3_OFFSET UNITYSDK_OFFSET(0x16F404D0)
#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F404A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetConfineFeatureParam_TypeDefinitionIndex = 19980;

	class AdvSetConfineFeatureParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FloatHeight; // 0x18
		::RPG::GameCore::DynamicFloat* FloatRange; // 0x20
		::RPG::GameCore::DynamicFloat* FloatPeriod; // 0x28
		::RPG::GameCore::DynamicFloat* FloatTransitionTime; // 0x30
		::System::Boolean DisableMonsterSelect; // 0x38
		::System::Boolean DisableMonsterCable; // 0x39
		::RPG::MVector3 RotationAngleSpeed; // 0x3C
		::RPG::GameCore::DynamicFloat* RotationAngleSpeedDamp; // 0x48
		::RPG::GameCore::DynamicFloat* RotationTransitionOut; // 0x50
		::RPG::GameCore::DynamicFloat* ScaleCharacterModel; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D94041FFD446F4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetConfineFeatureParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetConfineFeatureParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_D94041FFD446F4F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7A2F31455B41CE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetConfineFeatureParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetConfineFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_F7A2F31455B41CE3_OFFSET))(a1, a2);
		}
	};
}
