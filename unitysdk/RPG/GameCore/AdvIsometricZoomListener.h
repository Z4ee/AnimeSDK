#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_46B73FD96AA25BCE_OFFSET UNITYSDK_OFFSET(0x1BE1FFA0)
#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_FF06E938FB66A419_OFFSET UNITYSDK_OFFSET(0x1BE1FF60)
#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1FF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricZoomListener_TypeDefinitionIndex = 21403;

	class AdvIsometricZoomListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ZoomIn; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ZoomOut; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF06E938FB66A419(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricZoomListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricZoomListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_FF06E938FB66A419_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46B73FD96AA25BCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_46B73FD96AA25BCE_OFFSET))(a1, a2);
		}
	};
}
