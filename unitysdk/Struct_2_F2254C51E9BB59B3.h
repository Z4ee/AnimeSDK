#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F2254C51E9BB59B3_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_F2254C51E9BB59B3_GET_CONTENTCEILING_OFFSET UNITYSDK_OFFSET(0x26200)
#define STRUCT_2_F2254C51E9BB59B3_GET_REASON_OFFSET UNITYSDK_OFFSET(0x11290)
#define STRUCT_2_F2254C51E9BB59B3_GET_VISIBILITYCEILING_OFFSET UNITYSDK_OFFSET(0x145A50)
#define STRUCT_2_F2254C51E9BB59B3_GET_WINNINGPRIORITY_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_F2254C51E9BB59B3__CTOR_OFFSET UNITYSDK_OFFSET(0x2BBB0D0)

inline static constexpr unsigned int Struct_2_F2254C51E9BB59B3_TypeDefinitionIndex = 58147;

struct alignas(8) Struct_2_F2254C51E9BB59B3
{
	::System::String* _BlockName_k__BackingField; // 0x10
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority _WinningPriority_k__BackingField; // 0x18
	::System::Nullable_1<::RPG::Client::RegionContentLevel> _ContentCeiling_k__BackingField; // 0x1C
	::System::Nullable_1<::RPG::Client::RegionVisibility> _VisibilityCeiling_k__BackingField; // 0x24
	::System::String* _Reason_k__BackingField; // 0x30

	::System::Void _ctor(::System::String* a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2, ::System::Nullable_1<::RPG::Client::RegionContentLevel> a3, ::System::Nullable_1<::RPG::Client::RegionVisibility> a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::System::Nullable_1<::RPG::Client::RegionContentLevel>, ::System::Nullable_1<::RPG::Client::RegionVisibility>, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F2254C51E9BB59B3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* get_BlockName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F2254C51E9BB59B3_GET_BLOCKNAME_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_WinningPriority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F2254C51E9BB59B3_GET_WINNINGPRIORITY_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::Client::RegionContentLevel> get_ContentCeiling()
	{
		return ((::System::Nullable_1<::RPG::Client::RegionContentLevel>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F2254C51E9BB59B3_GET_CONTENTCEILING_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::Client::RegionVisibility> get_VisibilityCeiling()
	{
		return ((::System::Nullable_1<::RPG::Client::RegionVisibility>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F2254C51E9BB59B3_GET_VISIBILITYCEILING_OFFSET))(this);
	}

	::System::String* get_Reason()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F2254C51E9BB59B3_GET_REASON_OFFSET))(this);
	}
};
