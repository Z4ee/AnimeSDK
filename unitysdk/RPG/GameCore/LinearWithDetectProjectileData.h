#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LINEARWITHDETECTPROJECTILEDATA_METHOD_3_C866378BA3E9BE12_OFFSET UNITYSDK_OFFSET(0x1D1F67C0)
#define RPG_GAMECORE_LINEARWITHDETECTPROJECTILEDATA_METHOD_3_CE2BEFC0E19FA98D_OFFSET UNITYSDK_OFFSET(0x1D1F68E0)
#define RPG_GAMECORE_LINEARWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F6860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LinearWithDetectProjectileData_TypeDefinitionIndex = 15490;

	class LinearWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xB8
		::System::Single CollisionEnableDelay; // 0xC0
		::System::Single MaxLifeTime; // 0xC4
		::System::Single Gravity; // 0xC8
		::System::Boolean UseCameraForwardMode; // 0xCC
		::RPG::MVector3 CameraAnchorOffset; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C866378BA3E9BE12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LinearWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LinearWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARWITHDETECTPROJECTILEDATA_METHOD_3_C866378BA3E9BE12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE2BEFC0E19FA98D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LinearWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LinearWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARWITHDETECTPROJECTILEDATA_METHOD_3_CE2BEFC0E19FA98D_OFFSET))(a1, a2);
		}
	};
}
