#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_034FD32887F69155_OFFSET UNITYSDK_OFFSET(0x1C054270)
#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_8967B17D24D0661A_OFFSET UNITYSDK_OFFSET(0x1C0542C0)
#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0542B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityInEraFlipperSpotAreaListener_TypeDefinitionIndex = 21537;

	class EntityInEraFlipperSpotAreaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCallBack; // 0x18
		::System::Boolean ListenCallbackLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_034FD32887F69155(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_034FD32887F69155_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8967B17D24D0661A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_8967B17D24D0661A_OFFSET))(a1, a2);
		}
	};
}
