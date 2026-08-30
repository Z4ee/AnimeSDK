#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_METHOD_3_2207D189A8976569_OFFSET UNITYSDK_OFFSET(0x1E15FB30)
#define RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_METHOD_3_5DC2B11252038013_OFFSET UNITYSDK_OFFSET(0x1E15FB90)
#define RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFCameraComponentConfig_TypeDefinitionIndex = 18685;

	class TRFCameraComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::RPG::MVector3 MoveRange; // 0x28
		::System::Single OrthographicSize; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2207D189A8976569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFCameraComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFCameraComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_METHOD_3_2207D189A8976569_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DC2B11252038013(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFCameraComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFCameraComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCAMERACOMPONENTCONFIG_METHOD_3_5DC2B11252038013_OFFSET))(a1, a2);
		}
	};
}
