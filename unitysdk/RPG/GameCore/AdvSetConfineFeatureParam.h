#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_1729D0A72D5242BB_OFFSET UNITYSDK_OFFSET(0x1D381780)
#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_65884BA33087BDAA_OFFSET UNITYSDK_OFFSET(0x1D381740)
#define RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D381770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetConfineFeatureParam_TypeDefinitionIndex = 21813;

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

		static ::System::Void Method_3_65884BA33087BDAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetConfineFeatureParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetConfineFeatureParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_65884BA33087BDAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1729D0A72D5242BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetConfineFeatureParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetConfineFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCONFINEFEATUREPARAM_METHOD_3_1729D0A72D5242BB_OFFSET))(a1, a2);
		}
	};
}
