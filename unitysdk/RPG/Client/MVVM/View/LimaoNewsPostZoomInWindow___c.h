#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMINWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA761950)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMINWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA761990)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostZoomInWindow___c_TypeDefinitionIndex = 68480;

	class LimaoNewsPostZoomInWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostZoomInWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostZoomInWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostZoomInWindow___c_TypeDefinitionIndex)->GetStaticField(0x1C1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMINWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTZOOMINWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
