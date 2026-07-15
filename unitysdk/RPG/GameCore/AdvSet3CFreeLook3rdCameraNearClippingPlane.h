#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_METHOD_3_080733B88959B110_OFFSET UNITYSDK_OFFSET(0x1BE2A970)
#define RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_METHOD_3_956F1B4D9C6154D3_OFFSET UNITYSDK_OFFSET(0x1BE2A920)
#define RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2A960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSet3CFreeLook3rdCameraNearClippingPlane_TypeDefinitionIndex = 19513;

	class AdvSet3CFreeLook3rdCameraNearClippingPlane : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single NearClippingPlane; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_956F1B4D9C6154D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_METHOD_3_956F1B4D9C6154D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_080733B88959B110(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_METHOD_3_080733B88959B110_OFFSET))(a1, a2);
		}
	};
}
