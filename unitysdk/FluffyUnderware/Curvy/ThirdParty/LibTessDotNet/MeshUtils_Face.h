#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/MeshUtils_Pooled_1.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACE_GET_VERTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1F02A8C0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACE_RESET_OFFSET UNITYSDK_OFFSET(0x1F02ACE0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02AD00)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Face_TypeDefinitionIndex = 29030;

	class MeshUtils_Face : public ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Pooled_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*>
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* _next; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* _prev; // 0x18
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _anEdge; // 0x20
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* _trail; // 0x28
		::System::Boolean _inside; // 0x30
		::System::Boolean _marked; // 0x31
		::System::Int32 _n; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_VertsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACE_GET_VERTSCOUNT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACE_RESET_OFFSET))(this);
		}
	};
}
