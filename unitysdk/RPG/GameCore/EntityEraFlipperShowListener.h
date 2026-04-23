#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_METHOD_3_85699B1EEFF1989E_OFFSET UNITYSDK_OFFSET(0x188AD240)
#define RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_METHOD_3_C0D0D27D00E551AF_OFFSET UNITYSDK_OFFSET(0x188AD2C0)
#define RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x188AD290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityEraFlipperShowListener_TypeDefinitionIndex = 21228;

	class EntityEraFlipperShowListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShowCallBack; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHideCallBack; // 0x20
		::System::Boolean ListenCallbackLoop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85699B1EEFF1989E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityEraFlipperShowListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityEraFlipperShowListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_METHOD_3_85699B1EEFF1989E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0D0D27D00E551AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityEraFlipperShowListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityEraFlipperShowListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYERAFLIPPERSHOWLISTENER_METHOD_3_C0D0D27D00E551AF_OFFSET))(a1, a2);
		}
	};
}
