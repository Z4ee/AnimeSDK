#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A35A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostItemControl___c_TypeDefinitionIndex = 79074;

	class LimaoNewsPostItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsPostItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsPostItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostItemControl___c_TypeDefinitionIndex)->GetStaticField(0x5DA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
