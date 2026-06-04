#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SCREENTRANSFERBASEACTION_METHOD_2_61C6ABC44E45A3F4_OFFSET UNITYSDK_OFFSET(0x19C1F360)
#define RPG_GAMECORE_SCREENTRANSFERBASEACTION_METHOD_2_F22C04E5812EFCFB_OFFSET UNITYSDK_OFFSET(0x19C1F5A0)
#define RPG_GAMECORE_SCREENTRANSFERBASEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C1EC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferBaseAction_TypeDefinitionIndex = 19714;

	class ScreenTransferBaseAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERBASEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61C6ABC44E45A3F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScreenTransferBaseAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenTransferBaseAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERBASEACTION_METHOD_2_61C6ABC44E45A3F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F22C04E5812EFCFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScreenTransferBaseAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenTransferBaseAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERBASEACTION_METHOD_2_F22C04E5812EFCFB_OFFSET))(a1, a2);
		}
	};
}
