#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/MeshUtils_Pooled_1.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Face; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Vertex; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_ADDEDGEVERTEX_OFFSET UNITYSDK_OFFSET(0x1B8AB3B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_CHECK_OFFSET UNITYSDK_OFFSET(0x1B8ABDC0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_CONNECT_OFFSET UNITYSDK_OFFSET(0x1B8AB610)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_DELETE_OFFSET UNITYSDK_OFFSET(0x1B8AB0C0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_MAKEEDGE_OFFSET UNITYSDK_OFFSET(0x1B8AAAF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_MERGECONVEXFACES_OFFSET UNITYSDK_OFFSET(0x1B8ABA90)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_ONFREE_OFFSET UNITYSDK_OFFSET(0x1B8AA9E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1B8AA9D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_SPLICE_OFFSET UNITYSDK_OFFSET(0x1B8AADF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_SPLITEDGE_OFFSET UNITYSDK_OFFSET(0x1B8AB470)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_ZAPFACE_OFFSET UNITYSDK_OFFSET(0x1B8AB850)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AA7C0)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int LTMesh_TypeDefinitionIndex = 25927;

	class LTMesh : public ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Pooled_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::LTMesh*>
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* _fHead; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _eHead; // 0x18
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* _vHead; // 0x20
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _eHeadSym; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_RESET_OFFSET))(this);
		}

		::System::Void OnFree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_ONFREE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* MakeEdge()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_MAKEEDGE_OFFSET))(this);
		}

		::System::Void Splice(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eOrg, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eDst)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_SPLICE_OFFSET))(this, eOrg, eDst);
		}

		::System::Void Delete(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eDel)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_DELETE_OFFSET))(this, eDel);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* AddEdgeVertex(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eOrg)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_ADDEDGEVERTEX_OFFSET))(this, eOrg);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* SplitEdge(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eOrg)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_SPLITEDGE_OFFSET))(this, eOrg);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* Connect(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eOrg, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eDst)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_CONNECT_OFFSET))(this, eOrg, eDst);
		}

		::System::Void ZapFace(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* fZap)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_ZAPFACE_OFFSET))(this, fZap);
		}

		::System::Void MergeConvexFaces(::System::Int32 maxVertsPerFace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_MERGECONVEXFACES_OFFSET))(this, maxVertsPerFace);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_LTMESH_CHECK_OFFSET))(this);
		}
	};
}
