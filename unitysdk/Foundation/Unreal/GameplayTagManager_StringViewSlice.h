#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETFULLSTRING_OFFSET UNITYSDK_OFFSET(0x9BDCA0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETSLICESTRING_OFFSET UNITYSDK_OFFSET(0x9BDC50)
#define FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagManager_StringViewSlice_TypeDefinitionIndex = 8814;

	struct alignas(4) GameplayTagManager_StringViewSlice
	{
		::System::Int32 _start; // 0x10
		::System::Int32 _length; // 0x14

		::System::Void _ctor(::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE__CTOR_OFFSET))(this, start, length);
		}

		/*
		::System::ReadOnlySpan_1<::System::Char> GetSliceString(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETSLICESTRING_OFFSET))(this, stringView);
		}
		*/

		/*
		::System::ReadOnlySpan_1<::System::Char> GetFullString(::System::ReadOnlySpan_1<::System::Char> stringView)
		{
			return ((::System::ReadOnlySpan_1<::System::Char>(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGMANAGER_STRINGVIEWSLICE_GETFULLSTRING_OFFSET))(this, stringView);
		}
		*/
	};
}
