#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTINGSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E4C890)
#define RPG_GAMECORE_SETTINGSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4CBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingsConfig_TypeDefinitionIndex = 23445;

	class SettingsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Single>* ChangeTargetSensitivity; // 0x10
		::Il2CppArray<::System::Single>* ChangeTargetSensitivityForController; // 0x18
		::Il2CppArray<::System::Single>* CameraZoomGearForPhone; // 0x20
		::Il2CppArray<::System::Single>* CameraZoomGearForPC; // 0x28
		::Il2CppArray<::System::Single>* CameraZoomGearForController; // 0x30
		::Il2CppArray<::RPG::MVector2>* CameraRotationGearForPhone; // 0x38
		::Il2CppArray<::RPG::MVector2>* CameraRotationGearForPC; // 0x40
		::Il2CppArray<::RPG::MVector2>* CameraRotationGearForController; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SettingsConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SettingsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGSCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
