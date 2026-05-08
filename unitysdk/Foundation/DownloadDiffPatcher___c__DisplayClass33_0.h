#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadDiffPatcher; }

#define FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132EF0B0)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS33_0__DOCOLLECT_B__0_OFFSET UNITYSDK_OFFSET(0x132EF0C0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher___c__DisplayClass33_0_TypeDefinitionIndex = 80178;

	class DownloadDiffPatcher___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::Foundation::DownloadDiffPatcher* __4__this; // 0x10
		::Struct_2_DAA84C1CDD754F37 pickInfo; // 0x18

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
