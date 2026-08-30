#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS_METHOD_2_5436A08B879E54E8_OFFSET UNITYSDK_OFFSET(0x1D62A420)
#define RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62A830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFreelook3rdExtraParams_TypeDefinitionIndex = 16237;

	class VCameraFreelook3rdExtraParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableRigParamSettings; // 0x10
		::RPG::MVector3 HeightGradient; // 0x14
		::RPG::MVector3 RadiusGradient; // 0x20
		::RPG::MVector2 AxisYRangeOverride; // 0x2C
		::System::String* EnableAxisYRangeOverride; // 0x38
		::System::Boolean EnableCorrectionSettings; // 0x40
		::RPG::MVector2 InputCorrectionPitchRange; // 0x44
		::System::Single LockedFieldOfViewRatio; // 0x4C
		::System::Boolean EnableExtraProtect; // 0x50
		::System::Single ExtraProtectCameraRadius; // 0x54
		::System::Boolean DisableDefaultExtraProtect; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5436A08B879E54E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraFreelook3rdExtraParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraFreelook3rdExtraParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS_METHOD_2_5436A08B879E54E8_OFFSET))(a1, a2);
		}
	};
}
