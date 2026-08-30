#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_NETWORKERRORDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD97D060)
#define RPG_CLIENT_NETWORKERRORDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD97D0A0)
#define RPG_CLIENT_NETWORKERRORDIALOG___C__SHOWNETWORKERROR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD97D0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkErrorDialog___c_TypeDefinitionIndex = 72649;

	class NetworkErrorDialog___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NetworkErrorDialog___c_TypeDefinitionIndex)->GetStaticField(0x2CDE0);
		}
		static ::RPG::Client::NetworkErrorDialog___c** StaticGet___9()
		{
			return (::RPG::Client::NetworkErrorDialog___c**)Il2CppClass::FromTypeDefinitionIndex(NetworkErrorDialog___c_TypeDefinitionIndex)->GetStaticField(0x2CDE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNetworkError_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___C__SHOWNETWORKERROR_B__0_0_OFFSET))(this);
		}
	};
}
