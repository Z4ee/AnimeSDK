#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphBodySizeHeightConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHCOMMONCONFIG_METHOD_2_100CE94BB5D81A94_OFFSET UNITYSDK_OFFSET(0x1D433B40)
#define RPG_GAMECORE_PHOTOGRAPHCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D433ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphCommonConfig_TypeDefinitionIndex = 18831;

	class PhotoGraphCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IdentifyAimOffset; // 0x10
		::System::Single IdentifyRadius; // 0x14
		::Il2CppArray<::System::String*>* HideEffects; // 0x18
		::Il2CppArray<::RPG::GameCore::PhotoGraphBodySizeHeightConfig*>* PhotoGraphBodySizeHeightConfigs; // 0x20
		::RPG::MVector3 TripodModePlayerOffset; // 0x28
		::System::Single TripodPhotoCameraResetAngleSpeed; // 0x34
		::System::Single TripodPhotoCameraColliderMinRadius; // 0x38
		::System::UInt32 MaleFakeAvatarID; // 0x3C
		::System::UInt32 MaleAvatarID; // 0x40
		::System::UInt32 FemaleFakeAvatarID; // 0x44
		::System::UInt32 FemaleAvatarID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_100CE94BB5D81A94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCOMMONCONFIG_METHOD_2_100CE94BB5D81A94_OFFSET))(a1, a2);
		}
	};
}
