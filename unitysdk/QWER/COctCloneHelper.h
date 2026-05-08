#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace QWER { class COctStream; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define QWER_COCTCLONEHELPER_CLONEOCTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C558260)
#define QWER_COCTCLONEHELPER_CLONETOOCTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C5582E0)

namespace QWER
{
	inline static constexpr unsigned int COctCloneHelper_TypeDefinitionIndex = 8589;

	class COctCloneHelper : public ::System::Object
	{
	public:
		static ::QWER::COctStream* CloneOctStream(::QWER::COctStream* from)
		{
			return ((::QWER::COctStream*(*)(::QWER::COctStream*))((::PBYTE)hIl2Cpp + QWER_COCTCLONEHELPER_CLONEOCTSTREAM_OFFSET))(from);
		}

		static ::System::Void CloneToOctStream(::QWER::COctStream* from, ::QWER::COctStream* to)
		{
			return ((::System::Void(*)(::QWER::COctStream*, ::QWER::COctStream*))((::PBYTE)hIl2Cpp + QWER_COCTCLONEHELPER_CLONETOOCTSTREAM_OFFSET))(from, to);
		}
	};
}
