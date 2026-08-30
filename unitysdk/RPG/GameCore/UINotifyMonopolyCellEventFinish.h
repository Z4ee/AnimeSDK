#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_58BD4E0F59BA7FB6_OFFSET UNITYSDK_OFFSET(0x1D2AAEE0)
#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_AF0FCD939A7191F3_OFFSET UNITYSDK_OFFSET(0x1D2AAE10)
#define RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AAED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UINotifyMonopolyCellEventFinish_TypeDefinitionIndex = 21480;

	class UINotifyMonopolyCellEventFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF0FCD939A7191F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_AF0FCD939A7191F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58BD4E0F59BA7FB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYCELLEVENTFINISH_METHOD_3_58BD4E0F59BA7FB6_OFFSET))(a1, a2);
		}
	};
}
