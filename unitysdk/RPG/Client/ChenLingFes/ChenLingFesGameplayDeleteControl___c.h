#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5F2480)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F24C0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayDeleteControl___c_TypeDefinitionIndex = 73965;

	class ChenLingFesGameplayDeleteControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayDeleteControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayDeleteControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayDeleteControl___c_TypeDefinitionIndex)->GetStaticField(0x612A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
