#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define NODECANVAS_FRAMEWORK_DROPREFERENCETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB34D90)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int DropReferenceType_TypeDefinitionIndex = 30771;

	class DropReferenceType : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_DROPREFERENCETYPE__CTOR_OFFSET))(this, type);
		}
	};
}
