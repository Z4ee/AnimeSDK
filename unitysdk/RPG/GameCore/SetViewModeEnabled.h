#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETVIEWMODEENABLED_METHOD_3_0D2C9BE10736FF00_OFFSET UNITYSDK_OFFSET(0x18E49F70)
#define RPG_GAMECORE_SETVIEWMODEENABLED_METHOD_3_E30D77D281644AF9_OFFSET UNITYSDK_OFFSET(0x18E49FF0)
#define RPG_GAMECORE_SETVIEWMODEENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x18E49FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetViewModeEnabled_TypeDefinitionIndex = 22145;

	class SetViewModeEnabled : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODEENABLED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D2C9BE10736FF00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetViewModeEnabled*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetViewModeEnabled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODEENABLED_METHOD_3_0D2C9BE10736FF00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E30D77D281644AF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetViewModeEnabled* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetViewModeEnabled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODEENABLED_METHOD_3_E30D77D281644AF9_OFFSET))(a1, a2);
		}
	};
}
