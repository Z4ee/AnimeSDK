#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class RegionTranslationManager___c__DisplayClass14_0; }
namespace System { class String; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1710EB50)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1__ONGETREMOTEVERSION_B__0_OFFSET UNITYSDK_OFFSET(0x1710EEC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager___c__DisplayClass14_1_TypeDefinitionIndex = 7912;

	class RegionTranslationManager___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::RegionTranslationManager___c__DisplayClass14_0* CS___8__locals1; // 0x10
		::System::Int32 latestVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetRemoteVersion_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1__ONGETREMOTEVERSION_B__0_OFFSET))(this, a1);
		}
	};
}
