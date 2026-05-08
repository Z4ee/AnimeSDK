#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/EFindName.h"
#include "unitysdk/Foundation/Unreal/FNameEntryId.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_UNREAL_FNAME_FINDSTRING_OFFSET UNITYSDK_OFFSET(0x1BA63670)
#define FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_1_OFFSET UNITYSDK_OFFSET(0x1BA63BC0)
#define FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define FOUNDATION_UNREAL_FNAME_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9A0120)
#define FOUNDATION_UNREAL_FNAME_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1BA63E80)
#define FOUNDATION_UNREAL_FNAME_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0x9A00B0)
#define FOUNDATION_UNREAL_FNAME_GET_NUMBERPART_OFFSET UNITYSDK_OFFSET(0x9A00E0)
#define FOUNDATION_UNREAL_FNAME_GET_STRINGPART_OFFSET UNITYSDK_OFFSET(0x9A00D0)
#define FOUNDATION_UNREAL_FNAME_MAKEDETECTNUMBER_OFFSET UNITYSDK_OFFSET(0x1BA635C0)
#define FOUNDATION_UNREAL_FNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA63E60)
#define FOUNDATION_UNREAL_FNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA63E70)
#define FOUNDATION_UNREAL_FNAME_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define FOUNDATION_UNREAL_FNAME_SPLIT_OFFSET UNITYSDK_OFFSET(0x1BA632B0)
#define FOUNDATION_UNREAL_FNAME_TOUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x98AE10)
#define FOUNDATION_UNREAL_FNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9A01C0)
#define FOUNDATION_UNREAL_FNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x293FB0)
#define FOUNDATION_UNREAL_FNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x9A01B0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FName_TypeDefinitionIndex = 8847;

	struct alignas(4) FName
	{
		static ::Foundation::Unreal::FName* StaticGet_None()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FName_TypeDefinitionIndex)->GetStaticField(0x3D00);
		}
		::Foundation::Unreal::FNameEntryId _comparisonIndex; // 0x10
		::System::UInt32 _number; // 0x14

		::System::Void _ctor(::System::String* value, ::Foundation::Unreal::EFindName findType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME__CTOR_OFFSET))(this, value, findType);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::Char> stringView, ::Foundation::Unreal::EFindName findType)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME__CTOR_1_OFFSET))(this, stringView, findType);
		}
		*/

		::System::Void _ctor_2(::Foundation::Unreal::FNameEntryId entryId, ::System::UInt32 number)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FNameEntryId, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME__CTOR_2_OFFSET))(this, entryId, number);
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GET_ISNONE_OFFSET))(this);
		}

		/*
		static ::System::UInt32 Split(::System::ReadOnlySpan_1<::System::Char> stringView, ::System::ReadOnlySpan_1<::System::Char>& stringPartView)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_SPLIT_OFFSET))(stringView, stringPartView);
		}
		*/

		/*
		static ::Foundation::Unreal::FName MakeDetectNumber(::System::ReadOnlySpan_1<::System::Char> stringView, ::Foundation::Unreal::EFindName findType)
		{
			return ((::Foundation::Unreal::FName(*)(::System::ReadOnlySpan_1<::System::Char>, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_MAKEDETECTNUMBER_OFFSET))(stringView, findType);
		}
		*/

		/*
		static ::Foundation::Unreal::FNameEntryId FindString(::System::ReadOnlySpan_1<::System::Char> stringView, ::Foundation::Unreal::EFindName findType)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::System::ReadOnlySpan_1<::System::Char>, ::Foundation::Unreal::EFindName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_FINDSTRING_OFFSET))(stringView, findType);
		}
		*/

		::System::String* get_StringPart()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GET_STRINGPART_OFFSET))(this);
		}

		::System::String* get_NumberPart()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GET_NUMBERPART_OFFSET))(this);
		}

		::Foundation::Unreal::FNameEntryId GetComparisonIndex()
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_OFFSET))(this);
		}

		::System::Void SetNumber(::System::UInt32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_SETNUMBER_OFFSET))(this, number);
		}

		::System::String* GetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETSTRING_OFFSET))(this);
		}

		::System::UInt64 ToUnstableInt()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_TOUNSTABLEINT_OFFSET))(this);
		}

		static ::Foundation::Unreal::FNameEntryId GetComparisonIndex_1(::System::UInt64 unstableInt)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETCOMPARISONINDEX_1_OFFSET))(unstableInt);
		}

		static ::System::Boolean op_Equality(::Foundation::Unreal::FName left, ::Foundation::Unreal::FName right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::Unreal::FName left, ::Foundation::Unreal::FName right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::UInt32 GetTypeHash(::Foundation::Unreal::FName self)
		{
			return ((::System::UInt32(*)(::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME_GETTYPEHASH_OFFSET))(self);
		}
	};
}
