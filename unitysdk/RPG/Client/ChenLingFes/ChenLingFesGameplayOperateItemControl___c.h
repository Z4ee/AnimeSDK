#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5FCA40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5FCA80)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayOperateItemControl___c_TypeDefinitionIndex = 73972;

	class ChenLingFesGameplayOperateItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayOperateItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayOperateItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayOperateItemControl___c_TypeDefinitionIndex)->GetStaticField(0x61440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
