#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/Client/RegionBlockExecutionMode.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/RPG/Client/ResolvedIntentKind.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_0116DF2DF707827A_GET_COMPATKEY_OFFSET UNITYSDK_OFFSET(0x7A7E30)
#define STRUCT_2_0116DF2DF707827A_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define STRUCT_2_0116DF2DF707827A_GET_KIND_OFFSET UNITYSDK_OFFSET(0x167710)
#define STRUCT_2_0116DF2DF707827A_GET_MODE_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define STRUCT_2_0116DF2DF707827A_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define STRUCT_2_0116DF2DF707827A_METHOD_2_36746808E6729B12_OFFSET UNITYSDK_OFFSET(0x1605EA80)
#define STRUCT_2_0116DF2DF707827A_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x1605EA20)
#define STRUCT_2_0116DF2DF707827A__CTOR_OFFSET UNITYSDK_OFFSET(0x38FBE00)

inline static constexpr unsigned int Struct_2_0116DF2DF707827A_TypeDefinitionIndex = 59412;

struct alignas(4) Struct_2_0116DF2DF707827A
{
	::RPG::Client::ResolvedIntentKind _Kind_k__BackingField; // 0x10
	::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x14
	::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x18
	::RPG::Client::CompatKey _CompatKey_k__BackingField; // 0x1C
	::RPG::Client::RegionBlockExecutionMode _Mode_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::ResolvedIntentKind a1, ::RPG::Client::RegionContentLevel a2, ::RPG::Client::RegionVisibility a3, ::RPG::Client::CompatKey a4, ::RPG::Client::RegionBlockExecutionMode a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ResolvedIntentKind, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::CompatKey, ::RPG::Client::RegionBlockExecutionMode))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Struct_2_0116DF2DF707827A Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_0116DF2DF707827A(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}

	static ::Struct_2_0116DF2DF707827A Method_2_36746808E6729B12(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2, ::RPG::Client::RegionBlockExecutionMode a3)
	{
		return ((::Struct_2_0116DF2DF707827A(*)(::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::RegionBlockExecutionMode))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_METHOD_2_36746808E6729B12_OFFSET))(a1, a2, a3);
	}

	::RPG::Client::ResolvedIntentKind get_Kind()
	{
		return ((::RPG::Client::ResolvedIntentKind(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_GET_KIND_OFFSET))(this);
	}

	::RPG::Client::RegionContentLevel get_ContentLevel()
	{
		return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_GET_CONTENTLEVEL_OFFSET))(this);
	}

	::RPG::Client::RegionVisibility get_Visibility()
	{
		return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_GET_VISIBILITY_OFFSET))(this);
	}

	::RPG::Client::CompatKey get_CompatKey()
	{
		return ((::RPG::Client::CompatKey(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_GET_COMPATKEY_OFFSET))(this);
	}

	::RPG::Client::RegionBlockExecutionMode get_Mode()
	{
		return ((::RPG::Client::RegionBlockExecutionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0116DF2DF707827A_GET_MODE_OFFSET))(this);
	}
};
