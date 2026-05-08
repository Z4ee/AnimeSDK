#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ParallelFileVerifier; }
namespace Foundation { class ParallelFileVerifier_FileInfoCheckResult; }

#define FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13637E60)
#define FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS0_0__DOSLICE_CHECKFINISHRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x13637E70)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier___c__DisplayClass0_0_TypeDefinitionIndex = 62637;

	class ParallelFileVerifier___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Foundation::ParallelFileVerifier* __4__this; // 0x10
		::Foundation::ParallelFileVerifier_FileInfoCheckResult* result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoSlice_CheckFinishResult_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER___C__DISPLAYCLASS0_0__DOSLICE_CHECKFINISHRESULT_B__0_OFFSET))(this);
		}
	};
}
