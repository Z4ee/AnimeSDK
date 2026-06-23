#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class TEdge; }

#define CLIPPERLIB_LOCALMINIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF8040)

namespace ClipperLib
{
	inline static constexpr unsigned int LocalMinima_TypeDefinitionIndex = 32783;

	class LocalMinima : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* LeftBound; // 0x10
		::ClipperLib::LocalMinima* Next; // 0x18
		::ClipperLib::TEdge* RightBound; // 0x20
		::System::Int64 Y; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_LOCALMINIMA__CTOR_OFFSET))(this);
		}
	};
}
