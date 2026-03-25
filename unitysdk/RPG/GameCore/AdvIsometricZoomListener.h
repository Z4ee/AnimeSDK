#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_339114C33656AB14_OFFSET UNITYSDK_OFFSET(0x16F32400)
#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_6153D53656EDEB84_OFFSET UNITYSDK_OFFSET(0x16F32380)
#define RPG_GAMECORE_ADVISOMETRICZOOMLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F323D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricZoomListener_TypeDefinitionIndex = 20402;

	class AdvIsometricZoomListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ZoomIn; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ZoomOut; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6153D53656EDEB84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricZoomListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricZoomListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_6153D53656EDEB84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_339114C33656AB14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICZOOMLISTENER_METHOD_3_339114C33656AB14_OFFSET))(a1, a2);
		}
	};
}
