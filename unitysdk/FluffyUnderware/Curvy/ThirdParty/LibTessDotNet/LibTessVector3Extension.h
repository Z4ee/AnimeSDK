#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ContourVertex.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/Vec3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LIBTESSVECTOR3EXTENSION_CONTOURVERTEX_OFFSET UNITYSDK_OFFSET(0x1F02AA20)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LIBTESSVECTOR3EXTENSION_VEC3_OFFSET UNITYSDK_OFFSET(0x1F02AA00)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int LibTessVector3Extension_TypeDefinitionIndex = 29046;

	class LibTessVector3Extension : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 Vec3(::UnityEngine::Vector3 v)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LIBTESSVECTOR3EXTENSION_VEC3_OFFSET))(v);
		}

		static ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex ContourVertex(::UnityEngine::Vector3 v)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LIBTESSVECTOR3EXTENSION_CONTOURVERTEX_OFFSET))(v);
		}
	};
}
