#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC543D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC54410)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameBuffRewardWindow___c_TypeDefinitionIndex = 80015;

	class ChenLingFesGameBuffRewardWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameBuffRewardWindow___c_TypeDefinitionIndex)->GetStaticField(0x38EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEBUFFREWARDWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
