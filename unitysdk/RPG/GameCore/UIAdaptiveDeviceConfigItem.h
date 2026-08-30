#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM_METHOD_2_2D965FFF1A4711D0_OFFSET UNITYSDK_OFFSET(0x1D61B060)
#define RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61B1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIAdaptiveDeviceConfigItem_TypeDefinitionIndex = 24149;

	class UIAdaptiveDeviceConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DeviceModelList; // 0x10
		::RPG::GameCore::UIAdaptiveDeviceType DeviceType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D965FFF1A4711D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIAdaptiveDeviceConfigItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIAdaptiveDeviceConfigItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIADAPTIVEDEVICECONFIGITEM_METHOD_2_2D965FFF1A4711D0_OFFSET))(a1, a2);
		}
	};
}
