#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_0EA77CCED904D1DF_OFFSET UNITYSDK_OFFSET(0x1C056110)
#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_C11E17BA95634945_OFFSET UNITYSDK_OFFSET(0x1C056160)
#define RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C056150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityOnEraFlippedListener_TypeDefinitionIndex = 21536;

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

		static ::System::Void Method_3_0EA77CCED904D1DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityOnEraFlippedListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityOnEraFlippedListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_0EA77CCED904D1DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C11E17BA95634945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYONERAFLIPPEDLISTENER_METHOD_3_C11E17BA95634945_OFFSET))(a1, a2);
		}
	};
}
