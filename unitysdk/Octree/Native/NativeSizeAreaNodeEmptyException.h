#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define OCTREE_NATIVE_NATIVESIZEAREANODEEMPTYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC6190)

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaNodeEmptyException_TypeDefinitionIndex = 80002;

	class NativeSizeAreaNodeEmptyException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREANODEEMPTYEXCEPTION__CTOR_OFFSET))(this, msg);
		}
	};
}
