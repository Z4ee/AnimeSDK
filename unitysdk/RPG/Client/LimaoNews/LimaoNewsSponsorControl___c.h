#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4AB840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AB880)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorControl___c_TypeDefinitionIndex = 79076;

	class LimaoNewsSponsorControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsSponsorControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsSponsorControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsSponsorControl___c_TypeDefinitionIndex)->GetStaticField(0x5DE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
