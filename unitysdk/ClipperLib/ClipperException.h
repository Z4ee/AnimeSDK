#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLIPPERLIB_CLIPPEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5E550)

namespace ClipperLib
{
	inline static constexpr unsigned int ClipperException_TypeDefinitionIndex = 31242;

	class ClipperException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPEREXCEPTION__CTOR_OFFSET))(this, description);
		}
	};
}
