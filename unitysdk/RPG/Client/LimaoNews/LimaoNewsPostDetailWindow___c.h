#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A78FD00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78FD40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow___c_TypeDefinitionIndex = 75503;

	class LimaoNewsPostDetailWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsPostDetailWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsPostDetailWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostDetailWindow___c_TypeDefinitionIndex)->GetStaticField(0x376D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTDETAILWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
