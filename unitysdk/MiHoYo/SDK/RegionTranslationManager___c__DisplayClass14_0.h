#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class RegionTranslationManager; }
namespace System { class String; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184102D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager___c__DisplayClass14_0_TypeDefinitionIndex = 7905;

	class RegionTranslationManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* language; // 0x10
		::MiHoYo::SDK::RegionTranslationManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}
	};
}
