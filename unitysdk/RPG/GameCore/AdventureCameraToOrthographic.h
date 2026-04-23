#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCameraOrthographicResetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_METHOD_3_EE029D45ED00EC2C_OFFSET UNITYSDK_OFFSET(0x18673110)
#define RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_METHOD_3_FF581D7F79249F2D_OFFSET UNITYSDK_OFFSET(0x18673190)
#define RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18673160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraToOrthographic_TypeDefinitionIndex = 21002;

	class AdventureCameraToOrthographic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::RPG::GameCore::DynamicFloat* OrethographicSize; // 0x20
		::RPG::GameCore::DynamicFloat* BlendIn; // 0x28
		::RPG::GameCore::DynamicFloat* BlendOut; // 0x30
		::RPG::GameCore::DynamicString* BlendInCurve; // 0x38
		::RPG::GameCore::DynamicString* BlendOutCurve; // 0x40
		::System::Boolean ResetImmediately; // 0x48
		::RPG::GameCore::AdventureCameraOrthographicResetMode ResetMode; // 0x4C
		::RPG::GameCore::DynamicFloat* Fov; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE029D45ED00EC2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraToOrthographic*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraToOrthographic*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_METHOD_3_EE029D45ED00EC2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF581D7F79249F2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraToOrthographic* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraToOrthographic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_METHOD_3_FF581D7F79249F2D_OFFSET))(a1, a2);
		}
	};
}
