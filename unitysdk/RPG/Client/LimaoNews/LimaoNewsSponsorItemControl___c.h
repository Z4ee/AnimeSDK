#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDAE790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDAE7D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorItemControl___c_TypeDefinitionIndex = 73846;

	class LimaoNewsSponsorItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsSponsorItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsSponsorItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsSponsorItemControl___c_TypeDefinitionIndex)->GetStaticField(0x484E0);
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
