#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTIMELINEDATAEXTRATARGETENUMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C95C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineDataExtraTargetEnumMap_TypeDefinitionIndex = 52412;

	class ConfigTimelineDataExtraTargetEnumMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* TargetMap; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRATARGETENUMMAP__CTOR_OFFSET))(this);
		}
	};
}
