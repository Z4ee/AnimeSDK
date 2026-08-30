#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDG_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A5FFB0)
#define HDG_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5FFA0)

namespace Hdg
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 47406;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xFD20);
		}
		static ::System::Single* StaticGet_COMPONENT_UPDATE_TIME()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xFD24);
		}
		static ::System::Int32* StaticGet_SERVER_PORT_MASK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xFD28);
		}
		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xFD2C);
		}
		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xFD30);
		}
		static ::System::Single* StaticGet_GAMEOBJECT_UPDATE_TIME()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xFD34);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_SETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_SETTINGS__CCTOR_OFFSET))();
		}
	};
}
