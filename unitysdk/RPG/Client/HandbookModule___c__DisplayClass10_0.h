#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookChapterData; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5ED7A0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS10_0__GETCHAPTERDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA5FB3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass10_0_TypeDefinitionIndex = 60427;

	class HandbookModule___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChapterData_b__0(::RPG::Client::HandbookChapterData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HandbookChapterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS10_0__GETCHAPTERDATA_B__0_OFFSET))(this, x);
		}
	};
}
