#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDG_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA123F30)
#define HDG_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA123F20)

namespace Hdg
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 44300;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x4140);
		}
		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x4144);
		}
		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x4148);
		}
		static ::System::Single* StaticGet_COMPONENT_UPDATE_TIME()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x414C);
		}
		static ::System::Single* StaticGet_GAMEOBJECT_UPDATE_TIME()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x4150);
		}
		static ::System::Int32* StaticGet_SERVER_PORT_MASK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x4154);
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
