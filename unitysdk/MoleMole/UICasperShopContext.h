#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A92B20)

namespace MoleMole
{
	inline static constexpr unsigned int UICasperShopContext_TypeDefinitionIndex = 72523;

	class UICasperShopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* DetailTitle1; // 0x28
		::System::String* DetailTitle2; // 0x30
		::System::String* DetailContent; // 0x38
		::System::Action* BackToMainCityButtonAction; // 0x40
		::System::Boolean ShowDetailBtn; // 0x48
		::System::Boolean BackIsGOMainCity; // 0x49
		::System::Boolean ShowMainBtn; // 0x4A
		::System::Boolean IsCanShowLocked; // 0x4B
		::System::Int32 Index; // 0x4C
		::System::Int32 ShopID; // 0x50
		::System::Int32 DefaultShopTabID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICASPERSHOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
