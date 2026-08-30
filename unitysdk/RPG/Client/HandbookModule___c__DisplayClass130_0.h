#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS130_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD3AA320)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS130_0___TRANSFERWITHCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xD3AE950)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass130_0_TypeDefinitionIndex = 65693;

	class HandbookModule___c__DisplayClass130_0 : public ::System::Object
	{
	public:
		::System::Action* transferCallback; // 0x10
		::System::UInt32 entranceID; // 0x18
		::System::UInt32 mappingInfoID; // 0x1C
		::System::UInt32 contentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS130_0__CTOR_OFFSET))(this);
		}

		::System::Void __TransferWithCheck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS130_0___TRANSFERWITHCHECK_B__0_OFFSET))(this);
		}
	};
}
