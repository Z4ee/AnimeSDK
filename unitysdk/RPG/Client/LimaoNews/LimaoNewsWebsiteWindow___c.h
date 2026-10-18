#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3EFCC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EFD00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWebsiteWindow___c_TypeDefinitionIndex = 80406;

	class LimaoNewsWebsiteWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsWebsiteWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsWebsiteWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsWebsiteWindow___c_TypeDefinitionIndex)->GetStaticField(0x24C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWEBSITEWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
