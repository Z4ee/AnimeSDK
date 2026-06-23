#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x144BA2B0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___C__DISPLAYCLASS21_0___SORTROUTEPOINTLISTBYFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0x144BA2C0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultMapGenerator___c__DisplayClass21_0_TypeDefinitionIndex = 85701;

	class AbyssS2_DefaultMapGenerator___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::AbyssS2_GenConfigMeta meta; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortRoutePointListByFloor_b__0(::System::Int32 l, ::System::Int32 r)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___C__DISPLAYCLASS21_0___SORTROUTEPOINTLISTBYFLOOR_B__0_OFFSET))(this, l, r);
		}
	};
}
