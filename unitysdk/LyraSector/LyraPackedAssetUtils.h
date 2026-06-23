#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LYRASECTOR_LYRAPACKEDASSETUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA4F60)

namespace LyraSector
{
	inline static constexpr unsigned int LyraPackedAssetUtils_TypeDefinitionIndex = 26947;

	class LyraPackedAssetUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS__CTOR_OFFSET))(this);
		}
	};
}
