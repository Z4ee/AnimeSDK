#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESVCAMERACONFIG_METHOD_2_0B5278971023681C_OFFSET UNITYSDK_OFFSET(0x1CFB2BC0)
#define RPG_GAMECORE_CHENLINGFESVCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB5930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesVCameraConfig_TypeDefinitionIndex = 18213;

	class ChenLingFesVCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CameraCenterFollowOffset; // 0x10
		::RPG::MVector3 CameraCenterLookAtOffset; // 0x1C
		::System::Single CameraFOV; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B5278971023681C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesVCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesVCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVCAMERACONFIG_METHOD_2_0B5278971023681C_OFFSET))(a1, a2);
		}
	};
}
