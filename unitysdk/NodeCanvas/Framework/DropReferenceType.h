#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define NODECANVAS_FRAMEWORK_DROPREFERENCETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A54A0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int DropReferenceType_TypeDefinitionIndex = 28006;

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
