#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_2C3526E9F541837B_OFFSET UNITYSDK_OFFSET(0x171573B0)
#define RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_374C89B013C1C901_OFFSET UNITYSDK_OFFSET(0x17156A40)
#define RPG_GAMECORE_DEVICERELATEDFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x17156A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedFloat_TypeDefinitionIndex = 15076;

	class DeviceRelatedFloat : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C3526E9F541837B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_2C3526E9F541837B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_374C89B013C1C901(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_374C89B013C1C901_OFFSET))(a1, a2);
		}
	};
}
