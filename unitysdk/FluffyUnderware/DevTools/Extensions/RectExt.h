#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_GETSIZE_OFFSET UNITYSDK_OFFSET(0x1B2D25A0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_INCLUDE_OFFSET UNITYSDK_OFFSET(0x1B2D2690)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SCALEBY_1_OFFSET UNITYSDK_OFFSET(0x1B2D2600)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SCALEBY_OFFSET UNITYSDK_OFFSET(0x1B2D25D0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETBETWEEN_OFFSET UNITYSDK_OFFSET(0x1B2D2510)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1B2D2580)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2D2560)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1B2D25B0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SET_OFFSET UNITYSDK_OFFSET(0x1B2D24E0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SHIFTBY_1_OFFSET UNITYSDK_OFFSET(0x1B2D2670)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SHIFTBY_OFFSET UNITYSDK_OFFSET(0x1B2D2640)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int RectExt_TypeDefinitionIndex = 25913;

	class RectExt : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect Set(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pos, ::UnityEngine::Vector2 size)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SET_OFFSET))(rect, pos, size);
		}

		static ::UnityEngine::Rect SetBetween(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pos, ::UnityEngine::Vector2 pos2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETBETWEEN_OFFSET))(rect, pos, pos2);
		}

		static ::UnityEngine::Rect SetPosition(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETPOSITION_OFFSET))(rect, pos);
		}

		static ::UnityEngine::Rect SetPosition_1(::UnityEngine::Rect rect, ::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETPOSITION_1_OFFSET))(rect, x, y);
		}

		static ::UnityEngine::Vector2 GetSize(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_GETSIZE_OFFSET))(rect);
		}

		static ::UnityEngine::Rect SetSize(::UnityEngine::Rect rect, ::UnityEngine::Vector2 size)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SETSIZE_OFFSET))(rect, size);
		}

		static ::UnityEngine::Rect ScaleBy(::UnityEngine::Rect rect, ::System::Int32 pixel)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SCALEBY_OFFSET))(rect, pixel);
		}

		static ::UnityEngine::Rect ScaleBy_1(::UnityEngine::Rect rect, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SCALEBY_1_OFFSET))(rect, x, y);
		}

		static ::UnityEngine::Rect ShiftBy(::UnityEngine::Rect rect, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SHIFTBY_OFFSET))(rect, x, y);
		}

		static ::UnityEngine::Rect ShiftBy_1(::UnityEngine::Rect rect, ::UnityEngine::Vector2 shift)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_SHIFTBY_1_OFFSET))(rect, shift);
		}

		static ::UnityEngine::Rect Include(::UnityEngine::Rect rect, ::UnityEngine::Rect other)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_RECTEXT_INCLUDE_OFFSET))(rect, other);
		}
	};
}
