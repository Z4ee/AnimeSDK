#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Face; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Vertex; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACEAREA_OFFSET UNITYSDK_OFFSET(0x1F02AA80)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_KILLEDGE_OFFSET UNITYSDK_OFFSET(0x1F029E60)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_KILLFACE_OFFSET UNITYSDK_OFFSET(0x1F029B10)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_KILLVERTEX_OFFSET UNITYSDK_OFFSET(0x1F029A70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_MAKEEDGE_OFFSET UNITYSDK_OFFSET(0x1F0296C0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_MAKEFACE_OFFSET UNITYSDK_OFFSET(0x1F0298A0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_MAKEVERTEX_OFFSET UNITYSDK_OFFSET(0x1F029800)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_SPLICE_OFFSET UNITYSDK_OFFSET(0x1F029BB0)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_TypeDefinitionIndex = 29027;

	class MeshUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 Undef = 0xFFFFFFFF; // 0x0

		static ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* MakeEdge(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eNext)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_MAKEEDGE_OFFSET))(eNext);
		}

		static ::System::Void Splice(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* a, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* b)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_SPLICE_OFFSET))(a, b);
		}

		static ::System::Void MakeVertex(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eOrig, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* vNext)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_MAKEVERTEX_OFFSET))(eOrig, vNext);
		}

		static ::System::Void MakeFace(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eOrig, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* fNext)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_MAKEFACE_OFFSET))(eOrig, fNext);
		}

		static ::System::Void KillEdge(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eDel)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_KILLEDGE_OFFSET))(eDel);
		}

		static ::System::Void KillVertex(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* vDel, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* newOrg)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_KILLVERTEX_OFFSET))(vDel, newOrg);
		}

		static ::System::Void KillFace(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* fDel, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* newLFace)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_KILLFACE_OFFSET))(fDel, newLFace);
		}

		static ::System::Single FaceArea(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* f)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_FACEAREA_OFFSET))(f);
		}
	};
}
