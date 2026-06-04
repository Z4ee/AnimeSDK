#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/Client/RegionBlockExecutionMode.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/RPG/Client/ResolvedIntentKind.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_381AF865BCEEB63D_GET_COMPATKEY_OFFSET UNITYSDK_OFFSET(0x140A50)
#define STRUCT_2_381AF865BCEEB63D_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1E110)
#define STRUCT_2_381AF865BCEEB63D_GET_KIND_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_381AF865BCEEB63D_GET_MODE_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define STRUCT_2_381AF865BCEEB63D_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define STRUCT_2_381AF865BCEEB63D_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_381AF865BCEEB63D_METHOD_2_01389EC55ABB72B0_OFFSET UNITYSDK_OFFSET(0x13820B30)
#define STRUCT_2_381AF865BCEEB63D_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x13820AD0)
#define STRUCT_2_381AF865BCEEB63D__CTOR_OFFSET UNITYSDK_OFFSET(0x2BBF910)

inline static constexpr unsigned int Struct_2_381AF865BCEEB63D_TypeDefinitionIndex = 58145;

struct alignas(4) Struct_2_381AF865BCEEB63D
{
	::RPG::Client::ResolvedIntentKind _Kind_k__BackingField; // 0x10
	::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x14
	::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x18
	::RPG::Client::CompatKey _CompatKey_k__BackingField; // 0x1C
	::RPG::Client::RegionBlockExecutionMode _Mode_k__BackingField; // 0x20
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority _Priority_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::Client::ResolvedIntentKind a1, ::RPG::Client::RegionContentLevel a2, ::RPG::Client::RegionVisibility a3, ::RPG::Client::CompatKey a4, ::RPG::Client::RegionBlockExecutionMode a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ResolvedIntentKind, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::CompatKey, ::RPG::Client::RegionBlockExecutionMode, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Struct_2_381AF865BCEEB63D Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_381AF865BCEEB63D(*)())((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}

	static ::Struct_2_381AF865BCEEB63D Method_2_01389EC55ABB72B0(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2, ::RPG::Client::RegionBlockExecutionMode a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::Struct_2_381AF865BCEEB63D(*)(::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::RegionBlockExecutionMode, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_METHOD_2_01389EC55ABB72B0_OFFSET))(a1, a2, a3, a4);
	}

	::RPG::Client::ResolvedIntentKind get_Kind()
	{
		return ((::RPG::Client::ResolvedIntentKind(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_GET_KIND_OFFSET))(this);
	}

	::RPG::Client::RegionContentLevel get_ContentLevel()
	{
		return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_GET_CONTENTLEVEL_OFFSET))(this);
	}

	::RPG::Client::RegionVisibility get_Visibility()
	{
		return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_GET_VISIBILITY_OFFSET))(this);
	}

	::RPG::Client::CompatKey get_CompatKey()
	{
		return ((::RPG::Client::CompatKey(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_GET_COMPATKEY_OFFSET))(this);
	}

	::RPG::Client::RegionBlockExecutionMode get_Mode()
	{
		return ((::RPG::Client::RegionBlockExecutionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_GET_MODE_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_Priority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_381AF865BCEEB63D_GET_PRIORITY_OFFSET))(this);
	}
};
