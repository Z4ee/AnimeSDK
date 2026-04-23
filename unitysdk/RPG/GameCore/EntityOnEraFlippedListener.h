#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_531791B1D529E117_OFFSET UNITYSDK_OFFSET(0x188AF410)
#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_7770C2DB08C2B5F7_OFFSET UNITYSDK_OFFSET(0x188AF390)
#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x188AF3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityOnEraFlippedListener_TypeDefinitionIndex = 21226;

	class EntityOnEraFlippedListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfSwitchToState1; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfSwitchToState2; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfDitherIn; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelfDitherOut; // 0x30
		::System::Boolean ListenCallbackLoop; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7770C2DB08C2B5F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityOnEraFlippedListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityOnEraFlippedListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_7770C2DB08C2B5F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_531791B1D529E117(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_531791B1D529E117_OFFSET))(a1, a2);
		}
	};
}
