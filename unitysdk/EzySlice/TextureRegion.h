#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EZYSLICE_TEXTUREREGION_GET_ENDX_OFFSET UNITYSDK_OFFSET(0xCC90)
#define EZYSLICE_TEXTUREREGION_GET_ENDY_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define EZYSLICE_TEXTUREREGION_GET_END_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EZYSLICE_TEXTUREREGION_GET_STARTX_OFFSET UNITYSDK_OFFSET(0xCC50)
#define EZYSLICE_TEXTUREREGION_GET_STARTY_OFFSET UNITYSDK_OFFSET(0xCC70)
#define EZYSLICE_TEXTUREREGION_GET_START_OFFSET UNITYSDK_OFFSET(0x5580)
#define EZYSLICE_TEXTUREREGION_MAP_1_OFFSET UNITYSDK_OFFSET(0x24CA0)
#define EZYSLICE_TEXTUREREGION_MAP_2_OFFSET UNITYSDK_OFFSET(0x8C0B340)
#define EZYSLICE_TEXTUREREGION_MAP_OFFSET UNITYSDK_OFFSET(0x24C50)
#define EZYSLICE_TEXTUREREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)

namespace EzySlice
{
	inline static constexpr unsigned int TextureRegion_TypeDefinitionIndex = 43811;

	struct alignas(4) TextureRegion
	{
		::System::Single pos_start_x; // 0x10
		::System::Single pos_start_y; // 0x14
		::System::Single pos_end_x; // 0x18
		::System::Single pos_end_y; // 0x1C

		::System::Void _ctor(::System::Single startX, ::System::Single startY, ::System::Single endX, ::System::Single endY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION__CTOR_OFFSET))(this, startX, startY, endX, endY);
		}

		::System::Single get_startX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_STARTX_OFFSET))(this);
		}

		::System::Single get_startY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_STARTY_OFFSET))(this);
		}

		::System::Single get_endX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_ENDX_OFFSET))(this);
		}

		::System::Single get_endY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_ENDY_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_start()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_START_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_end()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_END_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 Map(::UnityEngine::Vector2 uv)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_MAP_OFFSET))(this, uv);
		}
		*/

		/*
		::UnityEngine::Vector2 Map_1(::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_MAP_1_OFFSET))(this, x, y);
		}
		*/

		static ::System::Single MAP_2(::System::Single x, ::System::Single in_min, ::System::Single in_max, ::System::Single out_min, ::System::Single out_max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_MAP_2_OFFSET))(x, in_min, in_max, out_min, out_max);
		}
	};
}
