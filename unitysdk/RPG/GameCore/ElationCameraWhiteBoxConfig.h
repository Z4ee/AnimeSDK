#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG_METHOD_2_9A95506F21538684_OFFSET UNITYSDK_OFFSET(0x1DB25260)
#define RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB253F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationCameraWhiteBoxConfig_TypeDefinitionIndex = 16372;

	class ElationCameraWhiteBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single FOV; // 0x10
		::RPG::MVector3 AnchorOffset; // 0x14
		::System::String* TargetAttachPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A95506F21538684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationCameraWhiteBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationCameraWhiteBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCAMERAWHITEBOXCONFIG_METHOD_2_9A95506F21538684_OFFSET))(a1, a2);
		}
	};
}
