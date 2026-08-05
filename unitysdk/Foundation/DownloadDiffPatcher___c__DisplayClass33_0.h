#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadDiffPatcher; }

#define FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15414300)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS33_0__DOCOLLECT_B__0_OFFSET UNITYSDK_OFFSET(0x15414310)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher___c__DisplayClass33_0_TypeDefinitionIndex = 52898;

	class DownloadDiffPatcher___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::Struct_2_DAA84C1CDD754F37 pickInfo; // 0x10
		::Foundation::DownloadDiffPatcher* __4__this; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoCollect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS33_0__DOCOLLECT_B__0_OFFSET))(this);
		}
	};
}
