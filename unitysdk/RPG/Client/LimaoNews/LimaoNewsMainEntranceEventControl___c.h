#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A77D6E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCEEVENTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77D720)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceEventControl___c_TypeDefinitionIndex = 75462;

	class LimaoNewsMainEntranceEventControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsMainEntranceEventControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsMainEntranceEventControl___c_TypeDefinitionIndex)->GetStaticField(0x36C10);
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
