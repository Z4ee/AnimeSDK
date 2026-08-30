#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C546B90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C546BD0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceEventControl___c_TypeDefinitionIndex = 79039;

	class LimaoNewsMainEntranceEventControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsMainEntranceEventControl___c_TypeDefinitionIndex)->GetStaticField(0x5BBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
