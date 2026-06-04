#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_6598FE21E0756C17_OFFSET UNITYSDK_OFFSET(0x19E146C0)
#define RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_8240D7D95B22E866_OFFSET UNITYSDK_OFFSET(0x19E14640)
#define RPG_GAMECORE_TRIGGERENTERSAFEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19E14690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnterSafeUI_TypeDefinitionIndex = 20857;

	class TriggerEnterSafeUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnterSafe; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8240D7D95B22E866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnterSafeUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnterSafeUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_8240D7D95B22E866_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6598FE21E0756C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEnterSafeUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEnterSafeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_METHOD_3_6598FE21E0756C17_OFFSET))(a1, a2);
		}
	};
}
