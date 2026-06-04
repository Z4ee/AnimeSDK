#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEVICERELATEDBOOL_METHOD_3_5082C8008E9769E7_OFFSET UNITYSDK_OFFSET(0x1969C940)
#define RPG_GAMECORE_DEVICERELATEDBOOL_METHOD_3_F98AB2C4375257BD_OFFSET UNITYSDK_OFFSET(0x1969C8E0)
#define RPG_GAMECORE_DEVICERELATEDBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1969C930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedBool_TypeDefinitionIndex = 15648;

	class DeviceRelatedBool : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Boolean Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F98AB2C4375257BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDBOOL_METHOD_3_F98AB2C4375257BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5082C8008E9769E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDBOOL_METHOD_3_5082C8008E9769E7_OFFSET))(a1, a2);
		}
	};
}
