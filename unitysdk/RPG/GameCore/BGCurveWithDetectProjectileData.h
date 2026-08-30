#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_METHOD_3_24A4CEF664331574_OFFSET UNITYSDK_OFFSET(0x1B2E5E60)
#define RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_METHOD_3_623907DCD0CE9BCB_OFFSET UNITYSDK_OFFSET(0x1B2E5D40)
#define RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E5DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BGCurveWithDetectProjectileData_TypeDefinitionIndex = 15498;

	class BGCurveWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* SubCurveIndex; // 0xB8
		::System::Single CollisionEnableDelay; // 0xC0
		::System::Single MaxLifeTime; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_623907DCD0CE9BCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BGCurveWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BGCurveWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_METHOD_3_623907DCD0CE9BCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24A4CEF664331574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BGCurveWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BGCurveWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_METHOD_3_24A4CEF664331574_OFFSET))(a1, a2);
		}
	};
}
