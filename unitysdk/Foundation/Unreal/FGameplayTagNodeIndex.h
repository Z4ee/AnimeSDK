#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_GET_1_OFFSET UNITYSDK_OFFSET(0x7C9690)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_GET_OFFSET UNITYSDK_OFFSET(0x7C9640)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_ISROOT_OFFSET UNITYSDK_OFFSET(0x7C9620)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_ISVALID_OFFSET UNITYSDK_OFFSET(0x7C9630)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1400CEB0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1400CEA0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1400CEC0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagNodeIndex_TypeDefinitionIndex = 16947;

	struct alignas(2) FGameplayTagNodeIndex
	{
		static ::Foundation::Unreal::FGameplayTagNodeIndex* StaticGet_Invalid()
		{
			return (::Foundation::Unreal::FGameplayTagNodeIndex*)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagNodeIndex_TypeDefinitionIndex)->GetStaticField(0x3DD0);
		}
		static ::Foundation::Unreal::FGameplayTagNodeIndex* StaticGet_Root()
		{
			return (::Foundation::Unreal::FGameplayTagNodeIndex*)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagNodeIndex_TypeDefinitionIndex)->GetStaticField(0x3DD2);
		}
		::System::UInt16 Index; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX__CCTOR_OFFSET))();
		}

		::System::Boolean IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_ISROOT_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_ISVALID_OFFSET))(this);
		}

		/*
		::Foundation::Unreal::FGameplayTagNode Get(::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNode>* nodeTree)
		{
			return ((::Foundation::Unreal::FGameplayTagNode(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTagNode>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_GET_OFFSET))(this, nodeTree);
		}
		*/

		/*
		::Foundation::Unreal::FGameplayTagNodeView Get_1(::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode> nodeTree)
		{
			return ((::Foundation::Unreal::FGameplayTagNodeView(*)(::PVOID, ::System::ReadOnlySpan_1<::Foundation::Unreal::FGameplayTagNode>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_GET_1_OFFSET))(this, nodeTree);
		}
		*/

		static ::System::Int32 op_Implicit(::Foundation::Unreal::FGameplayTagNodeIndex index)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::FGameplayTagNodeIndex))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_OP_IMPLICIT_OFFSET))(index);
		}

		static ::Foundation::Unreal::FGameplayTagNodeIndex op_Explicit(::System::Int32 index)
		{
			return ((::Foundation::Unreal::FGameplayTagNodeIndex(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGNODEINDEX_OP_EXPLICIT_OFFSET))(index);
		}
	};
}
