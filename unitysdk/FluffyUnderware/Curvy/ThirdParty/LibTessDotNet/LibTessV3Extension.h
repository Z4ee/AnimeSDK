#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/Vec3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LIBTESSV3EXTENSION_VECTOR3_OFFSET UNITYSDK_OFFSET(0x1B8ABE90)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int LibTessV3Extension_TypeDefinitionIndex = 25949;

	class LibTessV3Extension : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Vector3(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 v)
		{
			return ((::UnityEngine::Vector3(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LIBTESSV3EXTENSION_VECTOR3_OFFSET))(v);
		}
	};
}
