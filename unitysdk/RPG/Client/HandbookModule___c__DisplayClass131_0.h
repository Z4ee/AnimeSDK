#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS131_0__CTOR_OFFSET UNITYSDK_OFFSET(0x990C8A0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS131_0___TRANSFERWITHCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x9910810)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass131_0_TypeDefinitionIndex = 53296;

	class HandbookModule___c__DisplayClass131_0 : public ::System::Object
	{
	public:
		::System::Action* transferCallback; // 0x10
		::System::UInt32 mappingInfoID; // 0x18
		::System::UInt32 entranceID; // 0x1C
		::System::UInt32 contentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS131_0__CTOR_OFFSET))(this);
		}

		::System::Void __TransferWithCheck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS131_0___TRANSFERWITHCHECK_B__0_OFFSET))(this);
		}
	};
}
