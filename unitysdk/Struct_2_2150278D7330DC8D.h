#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContentParticipation.h"
#include "unitysdk/RPG/Client/RegionBlockExecutionMode.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/RPG/Client/VisibilityPriority.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_2150278D7330DC8D_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_2150278D7330DC8D_GET_CONTENTPARTICIPATION_OFFSET UNITYSDK_OFFSET(0x6E30)
#define STRUCT_2_2150278D7330DC8D_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x15C450)
#define STRUCT_2_2150278D7330DC8D_GET_MODE_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define STRUCT_2_2150278D7330DC8D_GET_VISIBILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x6E40)
#define STRUCT_2_2150278D7330DC8D_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1E120)
#define STRUCT_2_2150278D7330DC8D_METHOD_2_3E339FEAB414DEEA_OFFSET UNITYSDK_OFFSET(0x15C4B0)
#define STRUCT_2_2150278D7330DC8D_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x15C460)
#define STRUCT_2_2150278D7330DC8D__CTOR_OFFSET UNITYSDK_OFFSET(0x15C420)

inline static constexpr unsigned int Struct_2_2150278D7330DC8D_TypeDefinitionIndex = 62240;

struct alignas(4) Struct_2_2150278D7330DC8D
{
	::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x10
	::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x14
	::RPG::Client::RegionBlockExecutionMode _Mode_k__BackingField; // 0x18
	::System::Boolean _IsPreload_k__BackingField; // 0x1C
	::RPG::Client::ContentParticipation _ContentParticipation_k__BackingField; // 0x20
	::RPG::Client::VisibilityPriority _VisibilityPriority_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2, ::RPG::Client::RegionBlockExecutionMode a3, ::System::Boolean a4, ::RPG::Client::ContentParticipation a5, ::RPG::Client::VisibilityPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::RegionBlockExecutionMode, ::System::Boolean, ::RPG::Client::ContentParticipation, ::RPG::Client::VisibilityPriority))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::RegionContentLevel get_ContentLevel()
	{
		return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_GET_CONTENTLEVEL_OFFSET))(this);
	}

	::RPG::Client::RegionVisibility get_Visibility()
	{
		return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_GET_VISIBILITY_OFFSET))(this);
	}

	::RPG::Client::RegionBlockExecutionMode get_Mode()
	{
		return ((::RPG::Client::RegionBlockExecutionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_GET_MODE_OFFSET))(this);
	}

	::System::Boolean get_IsPreload()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_GET_ISPRELOAD_OFFSET))(this);
	}

	::RPG::Client::ContentParticipation get_ContentParticipation()
	{
		return ((::RPG::Client::ContentParticipation(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_GET_CONTENTPARTICIPATION_OFFSET))(this);
	}

	::RPG::Client::VisibilityPriority get_VisibilityPriority()
	{
		return ((::RPG::Client::VisibilityPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_GET_VISIBILITYPRIORITY_OFFSET))(this);
	}

	/*
	::Struct_2_960171EC79068492 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_3E339FEAB414DEEA(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + STRUCT_2_2150278D7330DC8D_METHOD_2_3E339FEAB414DEEA_OFFSET))(this, a1);
	}
};
