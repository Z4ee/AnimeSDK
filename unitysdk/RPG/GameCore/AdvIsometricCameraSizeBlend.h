#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_METHOD_3_3ACF5845AFAD8B31_OFFSET UNITYSDK_OFFSET(0x1D6BA980)
#define RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_METHOD_3_AD5641F5D90F322E_OFFSET UNITYSDK_OFFSET(0x1D6BA940)
#define RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricCameraSizeBlend_TypeDefinitionIndex = 21967;

	class AdvIsometricCameraSizeBlend : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SizeCurve; // 0x18
		::System::Single OrthographicSize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD5641F5D90F322E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricCameraSizeBlend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricCameraSizeBlend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_METHOD_3_AD5641F5D90F322E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3ACF5845AFAD8B31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricCameraSizeBlend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricCameraSizeBlend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_METHOD_3_3ACF5845AFAD8B31_OFFSET))(a1, a2);
		}
	};
}
