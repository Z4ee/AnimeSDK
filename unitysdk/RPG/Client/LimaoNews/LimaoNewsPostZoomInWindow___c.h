#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD48D960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD48D9A0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostZoomInWindow___c_TypeDefinitionIndex = 79088;

	class LimaoNewsPostZoomInWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsPostZoomInWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsPostZoomInWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostZoomInWindow___c_TypeDefinitionIndex)->GetStaticField(0x61290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTZOOMINWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
