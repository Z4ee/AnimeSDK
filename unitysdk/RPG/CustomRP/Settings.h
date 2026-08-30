#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE56140)
#define RPG_CUSTOMRP_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x185BD420)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 37231;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xEBF0);
		}
		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xEBF4);
		}
		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Settings_TypeDefinitionIndex)->GetStaticField(0xEBF8);
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
