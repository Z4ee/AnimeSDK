#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5343E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C534420)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInteractionControl___c_TypeDefinitionIndex = 79032;

	class LimaoNewsInteractionControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsInteractionControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsInteractionControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInteractionControl___c_TypeDefinitionIndex)->GetStaticField(0x5AB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
