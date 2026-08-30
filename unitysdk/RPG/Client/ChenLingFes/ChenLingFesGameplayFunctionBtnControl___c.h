#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B725400)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B725440)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayFunctionBtnControl___c_TypeDefinitionIndex = 79984;

	class ChenLingFesGameplayFunctionBtnControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayFunctionBtnControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayFunctionBtnControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayFunctionBtnControl___c_TypeDefinitionIndex)->GetStaticField(0x3C360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFUNCTIONBTNCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
