#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3DCF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DCF90)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorItemControl___c_TypeDefinitionIndex = 80401;

	class LimaoNewsSponsorItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsSponsorItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsSponsorItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsSponsorItemControl___c_TypeDefinitionIndex)->GetStaticField(0x209B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
