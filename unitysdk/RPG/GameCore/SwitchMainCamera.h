#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainCameraType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMAINCAMERA_METHOD_3_8296F125E0D52DA4_OFFSET UNITYSDK_OFFSET(0x1E14F8B0)
#define RPG_GAMECORE_SWITCHMAINCAMERA_METHOD_3_A213E73CE13B65DD_OFFSET UNITYSDK_OFFSET(0x1E14F920)
#define RPG_GAMECORE_SWITCHMAINCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E14F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMainCamera_TypeDefinitionIndex = 23058;

	class SwitchMainCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MainCameraType CameraType; // 0x18
		::System::Boolean ModifyCameraParam; // 0x1C
		::System::Single FieldOfView; // 0x20
		::System::Single NearClipPlane; // 0x24
		::System::Single FarClipPlane; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMAINCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8296F125E0D52DA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMainCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMainCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMAINCAMERA_METHOD_3_8296F125E0D52DA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A213E73CE13B65DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMainCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMAINCAMERA_METHOD_3_A213E73CE13B65DD_OFFSET))(a1, a2);
		}
	};
}
