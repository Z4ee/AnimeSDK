#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/MeshUtils_Pooled_1.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/PQHandle.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/Vec3.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }
namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_VERTEX_RESET_OFFSET UNITYSDK_OFFSET(0x1F02AD20)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02AD50)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Vertex_TypeDefinitionIndex = 29029;

	class MeshUtils_Vertex : public ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Pooled_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*>
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* _next; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _anEdge; // 0x18
		::System::Object* _data; // 0x20
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* _prev; // 0x28
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PQHandle _pqHandle; // 0x30
		::System::Int32 _n; // 0x34
		::System::Single _s; // 0x38
		::System::Single _t; // 0x3C
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _coords; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_VERTEX__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_VERTEX_RESET_OFFSET))(this);
		}
	};
}
