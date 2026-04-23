#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS124_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F71E0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS124_0__GOTOTOGUIDEROGUE_B__0_OFFSET UNITYSDK_OFFSET(0xA5FB3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass124_0_TypeDefinitionIndex = 60428;

	class HandbookModule___c__DisplayClass124_0 : public ::System::Object
	{
	public:
		::System::UInt32 customizedAreaID; // 0x10
		::System::Boolean useCustomizedAreaID; // 0x14
		::System::Boolean autoShow; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS124_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogue_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS124_0__GOTOTOGUIDEROGUE_B__0_OFFSET))(this);
		}
	};
}
