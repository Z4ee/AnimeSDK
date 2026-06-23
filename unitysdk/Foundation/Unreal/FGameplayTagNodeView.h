#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagNode.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEVIEW_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x35C000)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x38BFF0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagNodeView_TypeDefinitionIndex = 15985;

	struct alignas(8) FGameplayTagNodeView
	{
		::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode> _nodeTree; // 0x10
		::System::Int32 _nodeIndex; // 0x28

		::System::Void _ctor(::System::Int32 nodeIndex, ::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode> nodeTree)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEVIEW__CTOR_OFFSET))(this, nodeIndex, nodeTree);
		}

		::Foundation::Unreal::FGameplayTagNode& get_Value()
		{
			return ((::Foundation::Unreal::FGameplayTagNode&(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEVIEW_GET_VALUE_OFFSET))(this);
		}
	};
}
