#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7687F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA768830)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsWebsiteWindow___c_TypeDefinitionIndex = 68475;

	class LimaoNewsWebsiteWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsWebsiteWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsWebsiteWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsWebsiteWindow___c_TypeDefinitionIndex)->GetStaticField(0x1C5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSWEBSITEWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
