#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1817DC60)
#define RPG_CUSTOMRP_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1817DC50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 35290;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x10F30);
		}
		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x10F34);
		}
		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0x10F38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SETTINGS__CCTOR_OFFSET))();
		}
	};
}
