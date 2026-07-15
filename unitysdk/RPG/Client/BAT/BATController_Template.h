#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase_DrawMode.h"

#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1867A5D0)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1867A620)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1867A660)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1867A5E0)
#define RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1867A6A0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATController_Template_TypeDefinitionIndex = 70262;

	class BATController_Template : public ::RPG::Client::BAT::BATControllerBase
	{
	public:
		::RPG::Client::BAT::BATControllerBase_DrawMode _Mode_k__BackingField; // 0x70
		::System::Int32 ExampleProperty; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_GET_MODE_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_TEMPLATE_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}
	};
}
