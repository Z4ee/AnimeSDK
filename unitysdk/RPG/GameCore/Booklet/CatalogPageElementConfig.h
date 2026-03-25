#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_METHOD_3_AC96D8C3E03F14AC_OFFSET UNITYSDK_OFFSET(0x16FEB490)
#define RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_METHOD_3_AEDA88A8E7CE2D52_OFFSET UNITYSDK_OFFSET(0x16FEB4F0)
#define RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEB4E0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int CatalogPageElementConfig_TypeDefinitionIndex = 22800;

	class CatalogPageElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::System::Int32 BeginIndex; // 0x18
		::System::Int32 EndIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC96D8C3E03F14AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::CatalogPageElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::CatalogPageElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_METHOD_3_AC96D8C3E03F14AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEDA88A8E7CE2D52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::CatalogPageElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::CatalogPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_METHOD_3_AEDA88A8E7CE2D52_OFFSET))(a1, a2);
		}
	};
}
