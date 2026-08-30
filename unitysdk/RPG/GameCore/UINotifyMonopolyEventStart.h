#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_METHOD_3_030ACF25DABD3330_OFFSET UNITYSDK_OFFSET(0x1D2AAFA0)
#define RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_METHOD_3_DFADBF672E579C6D_OFFSET UNITYSDK_OFFSET(0x1D2AB070)
#define RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AB060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UINotifyMonopolyEventStart_TypeDefinitionIndex = 20688;

	class UINotifyMonopolyEventStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_030ACF25DABD3330(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UINotifyMonopolyEventStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UINotifyMonopolyEventStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_METHOD_3_030ACF25DABD3330_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFADBF672E579C6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UINotifyMonopolyEventStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UINotifyMonopolyEventStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_METHOD_3_DFADBF672E579C6D_OFFSET))(a1, a2);
		}
	};
}
