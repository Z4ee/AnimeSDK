#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/Vec3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_CONTOURVERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8B020)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int ContourVertex_TypeDefinitionIndex = 29044;

	struct alignas(8) ContourVertex
	{
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 Position; // 0x10
		::System::Object* Data; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_CONTOURVERTEX_TOSTRING_OFFSET))(this);
		}
	};
}
