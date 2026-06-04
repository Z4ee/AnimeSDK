#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionBlockExecutionMode.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_75D6A6CD8F418D47_GET_CONTENTCEILING_OFFSET UNITYSDK_OFFSET(0x145A50)
#define STRUCT_2_75D6A6CD8F418D47_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_75D6A6CD8F418D47_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x145A40)
#define STRUCT_2_75D6A6CD8F418D47_GET_MODE_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_75D6A6CD8F418D47_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x140A50)
#define STRUCT_2_75D6A6CD8F418D47_GET_VISIBILITYCEILING_OFFSET UNITYSDK_OFFSET(0x145A60)
#define STRUCT_2_75D6A6CD8F418D47_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1E110)
#define STRUCT_2_75D6A6CD8F418D47_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x145A70)
#define STRUCT_2_75D6A6CD8F418D47__CTOR_OFFSET UNITYSDK_OFFSET(0x145A10)

inline static constexpr unsigned int Struct_2_75D6A6CD8F418D47_TypeDefinitionIndex = 58138;

struct alignas(4) Struct_2_75D6A6CD8F418D47
{
	::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x10
	::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x14
	::RPG::Client::RegionBlockExecutionMode _Mode_k__BackingField; // 0x18
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority _Priority_k__BackingField; // 0x1C
	::System::Boolean _IsPreload_k__BackingField; // 0x20
	::System::Nullable_1<::RPG::Client::RegionContentLevel> _ContentCeiling_k__BackingField; // 0x24
	::System::Nullable_1<::RPG::Client::RegionVisibility> _VisibilityCeiling_k__BackingField; // 0x2C

	::System::Void _ctor(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2, ::RPG::Client::RegionBlockExecutionMode a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4, ::System::Boolean a5, ::System::Nullable_1<::RPG::Client::RegionContentLevel> a6, ::System::Nullable_1<::RPG::Client::RegionVisibility> a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::RegionBlockExecutionMode, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::System::Boolean, ::System::Nullable_1<::RPG::Client::RegionContentLevel>, ::System::Nullable_1<::RPG::Client::RegionVisibility>))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::Client::RegionContentLevel get_ContentLevel()
	{
		return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_CONTENTLEVEL_OFFSET))(this);
	}

	::RPG::Client::RegionVisibility get_Visibility()
	{
		return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_VISIBILITY_OFFSET))(this);
	}

	::RPG::Client::RegionBlockExecutionMode get_Mode()
	{
		return ((::RPG::Client::RegionBlockExecutionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_MODE_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_Priority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_PRIORITY_OFFSET))(this);
	}

	::System::Boolean get_IsPreload()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_ISPRELOAD_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::Client::RegionContentLevel> get_ContentCeiling()
	{
		return ((::System::Nullable_1<::RPG::Client::RegionContentLevel>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_CONTENTCEILING_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::Client::RegionVisibility> get_VisibilityCeiling()
	{
		return ((::System::Nullable_1<::RPG::Client::RegionVisibility>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_GET_VISIBILITYCEILING_OFFSET))(this);
	}

	/*
	::Struct_2_960171EC79068492 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_75D6A6CD8F418D47_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}
	*/
};
