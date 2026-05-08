#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_STRUCTOPSTYPETRAITS_GET_CANZEROCREATE_OFFSET UNITYSDK_OFFSET(0x1AD98890)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1AD98880)
#define FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD98860)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int StructWrapper_FGameplayTag_StructOpsTypeTraits_TypeDefinitionIndex = 25182;

	class StructWrapper_FGameplayTag_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}

		::System::Boolean get_CanZeroCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_STRUCTWRAPPER_FGAMEPLAYTAG_STRUCTOPSTYPETRAITS_GET_CANZEROCREATE_OFFSET))(this);
		}
	};
}
