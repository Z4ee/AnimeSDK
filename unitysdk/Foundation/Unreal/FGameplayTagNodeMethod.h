#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagNode.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagNodeIndex.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEMETHOD_GETCHILDTAGNODES_OFFSET UNITYSDK_OFFSET(0x1A5C86D0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEMETHOD_GETSINGLETAGCONTAINER_OFFSET UNITYSDK_OFFSET(0x1A5C86C0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagNodeMethod_TypeDefinitionIndex = 9149;

	class FGameplayTagNodeMethod : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTagContainer& GetSingleTagContainer(::Foundation::Unreal::FGameplayTagNode& self)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::Foundation::Unreal::FGameplayTagNode&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEMETHOD_GETSINGLETAGCONTAINER_OFFSET))(self);
		}

		static ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNodeIndex>* GetChildTagNodes(::Foundation::Unreal::FGameplayTagNode& self)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNodeIndex>*(*)(::Foundation::Unreal::FGameplayTagNode&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEMETHOD_GETCHILDTAGNODES_OFFSET))(self);
		}
	};
}
