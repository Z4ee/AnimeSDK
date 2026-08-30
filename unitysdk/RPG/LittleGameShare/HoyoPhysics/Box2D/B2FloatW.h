#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FLOATW_ASSPAN_OFFSET UNITYSDK_OFFSET(0x82E420)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FLOATW_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x82E3A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FLOATW__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2FloatW_TypeDefinitionIndex = 35993;

	struct alignas(4) B2FloatW
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18
		::System::Single W; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FLOATW__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single& get_Item(::System::Int32 a1)
		{
			return ((::System::Single&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FLOATW_GET_ITEM_OFFSET))(this, a1);
		}

		/*
		::System::Span_1<::System::Single> AsSpan()
		{
			return ((::System::Span_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FLOATW_ASSPAN_OFFSET))(this);
		}
		*/
	};
}
