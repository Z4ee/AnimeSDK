#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAVELSHIPHIDEUI_METHOD_3_65B7419566ADE79D_OFFSET UNITYSDK_OFFSET(0x1B03EB30)
#define RPG_GAMECORE_TRAVELSHIPHIDEUI_METHOD_3_CCB6A3C1686A92DE_OFFSET UNITYSDK_OFFSET(0x1B03EB70)
#define RPG_GAMECORE_TRAVELSHIPHIDEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B03EB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipHideUI_TypeDefinitionIndex = 20191;

	class TravelShipHideUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65B7419566ADE79D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipHideUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipHideUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEUI_METHOD_3_65B7419566ADE79D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCB6A3C1686A92DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipHideUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipHideUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEUI_METHOD_3_CCB6A3C1686A92DE_OFFSET))(a1, a2);
		}
	};
}
