#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadDiffPatcher_DiffResult; }

#define FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132EF1A0)
#define FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS34_0__DOMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x132EF1B0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher___c__DisplayClass34_0_TypeDefinitionIndex = 80175;

	class DownloadDiffPatcher___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::Foundation::DownloadDiffPatcher_DiffResult* diffResult; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoMove_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER___C__DISPLAYCLASS34_0__DOMOVE_B__0_OFFSET))(this);
		}
	};
}
