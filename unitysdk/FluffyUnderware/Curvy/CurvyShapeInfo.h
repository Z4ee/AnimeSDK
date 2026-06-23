#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_CURVYSHAPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB085C0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyShapeInfo_TypeDefinitionIndex = 38891;

	class CurvyShapeInfo : public ::System::Attribute
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean Is2D; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Boolean is2D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPEINFO__CTOR_OFFSET))(this, name, is2D);
		}
	};
}
