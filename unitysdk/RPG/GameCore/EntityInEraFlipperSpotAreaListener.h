#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_28B928B48EAF5F98_OFFSET UNITYSDK_OFFSET(0x1719FCF0)
#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_7A45E3BF83B28808_OFFSET UNITYSDK_OFFSET(0x1719FD70)
#define RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1719FD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityInEraFlipperSpotAreaListener_TypeDefinitionIndex = 20544;

	class EntityInEraFlipperSpotAreaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCallBack; // 0x18
		::System::Boolean ListenCallbackLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_28B928B48EAF5F98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_28B928B48EAF5F98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A45E3BF83B28808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYINERAFLIPPERSPOTAREALISTENER_METHOD_3_7A45E3BF83B28808_OFFSET))(a1, a2);
		}
	};
}
