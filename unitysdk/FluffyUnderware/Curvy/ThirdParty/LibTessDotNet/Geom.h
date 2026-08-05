#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/WindingRule.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Vertex; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_ADDWINDING_OFFSET UNITYSDK_OFFSET(0x1F028B20)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEEVAL_OFFSET UNITYSDK_OFFSET(0x1F0287B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEGOESLEFT_OFFSET UNITYSDK_OFFSET(0x1F0289E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEGOESRIGHT_OFFSET UNITYSDK_OFFSET(0x1F028A70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1F028BE0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGESIGN_OFFSET UNITYSDK_OFFSET(0x1F028830)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0x1F028B70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_ISWINDINGINSIDE_OFFSET UNITYSDK_OFFSET(0x1F028600)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_SWAP_OFFSET UNITYSDK_OFFSET(0x1F028BD0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_TRANSEVAL_OFFSET UNITYSDK_OFFSET(0x1F0288F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_TRANSLEQ_OFFSET UNITYSDK_OFFSET(0x1F0288A0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_TRANSSIGN_OFFSET UNITYSDK_OFFSET(0x1F028970)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTCCW_OFFSET UNITYSDK_OFFSET(0x1F0286A0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTEQ_OFFSET UNITYSDK_OFFSET(0x1F028710)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTL1DIST_OFFSET UNITYSDK_OFFSET(0x1F028AE0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTLEQ_OFFSET UNITYSDK_OFFSET(0x1F028760)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Geom_TypeDefinitionIndex = 29024;

	class Geom : public ::System::Object
	{
	public:
		static ::System::Boolean IsWindingInside(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule rule, ::System::Int32 n)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_ISWINDINGINSIDE_OFFSET))(rule, n);
		}

		static ::System::Boolean VertCCW(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTCCW_OFFSET))(u, v, w);
		}

		static ::System::Boolean VertEq(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* lhs, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTEQ_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean VertLeq(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* lhs, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTLEQ_OFFSET))(lhs, rhs);
		}

		static ::System::Single EdgeEval(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEEVAL_OFFSET))(u, v, w);
		}

		static ::System::Single EdgeSign(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGESIGN_OFFSET))(u, v, w);
		}

		static ::System::Boolean TransLeq(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* lhs, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_TRANSLEQ_OFFSET))(lhs, rhs);
		}

		static ::System::Single TransEval(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_TRANSEVAL_OFFSET))(u, v, w);
		}

		static ::System::Single TransSign(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* w)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_TRANSSIGN_OFFSET))(u, v, w);
		}

		static ::System::Boolean EdgeGoesLeft(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* e)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEGOESLEFT_OFFSET))(e);
		}

		static ::System::Boolean EdgeGoesRight(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* e)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEGOESRIGHT_OFFSET))(e);
		}

		static ::System::Single VertL1dist(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* u, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_VERTL1DIST_OFFSET))(u, v);
		}

		static ::System::Void AddWinding(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eDst, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eSrc)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_ADDWINDING_OFFSET))(eDst, eSrc);
		}

		static ::System::Single Interpolate(::System::Single a, ::System::Single x, ::System::Single b, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_INTERPOLATE_OFFSET))(a, x, b, y);
		}

		static ::System::Void Swap(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*& a, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*& b)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*&, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_SWAP_OFFSET))(a, b);
		}

		static ::System::Void EdgeIntersect(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* o1, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* d1, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* o2, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* d2, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* v)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_GEOM_EDGEINTERSECT_OFFSET))(o1, d1, o2, d2, v);
		}
	};
}
