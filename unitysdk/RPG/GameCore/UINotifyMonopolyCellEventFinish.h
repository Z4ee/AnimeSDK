#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_58BD4E0F59BA7FB6_OFFSET UNITYSDK_OFFSET(0x19E2FF90)
#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_830127DD0C400CEA_OFFSET UNITYSDK_OFFSET(0x19E2FE80)
#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2FF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UINotifyMonopolyCellEventFinish_TypeDefinitionIndex = 20509;

	class UINotifyMonopolyCellEventFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_830127DD0C400CEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_830127DD0C400CEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58BD4E0F59BA7FB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_58BD4E0F59BA7FB6_OFFSET))(a1, a2);
		}
	};
}
