#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagNodeIndex.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1BE2C5A0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE2C980)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagNode_TypeDefinitionIndex = 8901;

	struct alignas(8) FGameplayTagNode
	{
		static ::Foundation::Unreal::FGameplayTagNode* StaticGet_Root()
		{
			return (::Foundation::Unreal::FGameplayTagNode*)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagNode_TypeDefinitionIndex)->GetStaticField(0x7E20);
		}
		::Foundation::Unreal::FName Tag; // 0x10
		::Foundation::Unreal::FGameplayTagContainer CompleteTagWithParents; // 0x18
		::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNodeIndex>* ChildTags; // 0x88
		::Foundation::Unreal::FGameplayTagNodeIndex ParentTag; // 0x90

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODE__CCTOR_OFFSET))();
		}

		static ::Foundation::Unreal::FGameplayTagNode Create(::Foundation::Unreal::FName shortTag, ::Foundation::Unreal::FName fullTag, ::Foundation::Unreal::FGameplayTagNodeIndex parentTagIndex, ::Foundation::Unreal::FGameplayTagNode& parentTag)
		{
			return ((::Foundation::Unreal::FGameplayTagNode(*)(::Foundation::Unreal::FName, ::Foundation::Unreal::FName, ::Foundation::Unreal::FGameplayTagNodeIndex, ::Foundation::Unreal::FGameplayTagNode&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODE_CREATE_OFFSET))(shortTag, fullTag, parentTagIndex, parentTag);
		}
	};
}
