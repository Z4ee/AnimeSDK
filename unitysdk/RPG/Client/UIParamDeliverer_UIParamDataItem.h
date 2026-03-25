#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_UIPARAMDELIVERER_UIPARAMDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA722A30)

namespace RPG::Client
{
	inline static constexpr unsigned int UIParamDeliverer_UIParamDataItem_TypeDefinitionIndex = 56470;

	class UIParamDeliverer_UIParamDataItem : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::String* Desc; // 0x18
		::System::String* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_UIPARAMDATAITEM__CTOR_OFFSET))(this);
		}
	};
}
