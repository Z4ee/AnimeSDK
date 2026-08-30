#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_B2C753CAD7FC4A97_OFFSET UNITYSDK_OFFSET(0x1D022C50)
#define RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_ED35481A76A4682D_OFFSET UNITYSDK_OFFSET(0x1D0235E0)
#define RPG_GAMECORE_DEVICERELATEDFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D022C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedFloat_TypeDefinitionIndex = 16295;

	class DeviceRelatedFloat : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED35481A76A4682D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_ED35481A76A4682D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2C753CAD7FC4A97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_METHOD_3_B2C753CAD7FC4A97_OFFSET))(a1, a2);
		}
	};
}
