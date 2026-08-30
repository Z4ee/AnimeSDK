#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_METHOD_3_1043E90DFC94D75C_OFFSET UNITYSDK_OFFSET(0x1D2FC9A0)
#define RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_METHOD_3_FC9485E352726E9D_OFFSET UNITYSDK_OFFSET(0x1D2FC950)
#define RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FC990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnControlEraFlipperLightDeviceListener_TypeDefinitionIndex = 22102;

	class OnControlEraFlipperLightDeviceListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfGroupEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOtherGroupEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x28
		::System::Boolean ListenCallbackLoop; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC9485E352726E9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_METHOD_3_FC9485E352726E9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1043E90DFC94D75C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnControlEraFlipperLightDeviceListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONCONTROLERAFLIPPERLIGHTDEVICELISTENER_METHOD_3_1043E90DFC94D75C_OFFSET))(a1, a2);
		}
	};
}
