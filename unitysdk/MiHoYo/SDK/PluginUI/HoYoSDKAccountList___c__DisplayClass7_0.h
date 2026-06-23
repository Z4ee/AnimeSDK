#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7333E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0__REGISTERDELEGATE_B__6_OFFSET UNITYSDK_OFFSET(0x1C7333F0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList___c__DisplayClass7_0_TypeDefinitionIndex = 37107;

	class HoYoSDKAccountList___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* deleteCallback; // 0x10
		::System::Int32 nItemIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__6(::System::String* strResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DISPLAYCLASS7_0__REGISTERDELEGATE_B__6_OFFSET))(this, strResult);
		}
	};
}
