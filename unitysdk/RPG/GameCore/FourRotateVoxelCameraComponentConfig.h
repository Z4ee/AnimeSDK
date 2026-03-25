#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_METHOD_3_07762468080494A5_OFFSET UNITYSDK_OFFSET(0x1721A940)
#define RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_METHOD_3_9E7BCF224A18D834_OFFSET UNITYSDK_OFFSET(0x1721A8D0)
#define RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1721A920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelCameraComponentConfig_TypeDefinitionIndex = 15351;

	class FourRotateVoxelCameraComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCamera; // 0x10
		::System::String* CameraPathRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E7BCF224A18D834(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_METHOD_3_9E7BCF224A18D834_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07762468080494A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_METHOD_3_07762468080494A5_OFFSET))(a1, a2);
		}
	};
}
