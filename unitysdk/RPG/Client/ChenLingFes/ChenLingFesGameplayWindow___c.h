#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB61FA70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB61FAB0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayWindow___c_TypeDefinitionIndex = 73990;

	class ChenLingFesGameplayWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayWindow___c_TypeDefinitionIndex)->GetStaticField(0x61F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
