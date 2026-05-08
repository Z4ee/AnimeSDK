#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ContourOrientation.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ContourVertex.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ElementType.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/Vec3.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/WindingRule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class CombineCallback; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class LTMesh; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Face; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Vertex; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class Tess_ActiveRegion; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class Dict_1; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class PriorityQueue_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDCONTOUR_1_OFFSET UNITYSDK_OFFSET(0x1B8B2B50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET UNITYSDK_OFFSET(0x1B8B2B40)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET UNITYSDK_OFFSET(0x1B8AC8F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET UNITYSDK_OFFSET(0x1B8ACDB0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET UNITYSDK_OFFSET(0x1B8AF540)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET UNITYSDK_OFFSET(0x1B8AE2E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET UNITYSDK_OFFSET(0x1B8AE050)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET UNITYSDK_OFFSET(0x1B8AD190)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B8B0CF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET UNITYSDK_OFFSET(0x1B8AFCA0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET UNITYSDK_OFFSET(0x1B8B0080)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET UNITYSDK_OFFSET(0x1B8AC9B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET UNITYSDK_OFFSET(0x1B8AEF00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET UNITYSDK_OFFSET(0x1B8AF190)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET UNITYSDK_OFFSET(0x1B8AEBB0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET UNITYSDK_OFFSET(0x1B8AC660)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET UNITYSDK_OFFSET(0x1B8B1A70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET UNITYSDK_OFFSET(0x1B8AF780)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET UNITYSDK_OFFSET(0x1B8AFBC0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET UNITYSDK_OFFSET(0x1B8AC2D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET UNITYSDK_OFFSET(0x1B8ACB50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET UNITYSDK_OFFSET(0x1B8ACAC0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET UNITYSDK_OFFSET(0x1B8AC6D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET UNITYSDK_OFFSET(0x1B8ADAB0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET UNITYSDK_OFFSET(0x1B8B1C30)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8B0010)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTSARRAY_OFFSET UNITYSDK_OFFSET(0x1B8AFFF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTSLIST_OFFSET UNITYSDK_OFFSET(0x1B8AFF10)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x1B8AFE30)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1B8AFDD0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8AFE20)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1B8AFE10)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET UNITYSDK_OFFSET(0x1B8AF6B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET UNITYSDK_OFFSET(0x1B8AFA00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET UNITYSDK_OFFSET(0x1B8B2620)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET UNITYSDK_OFFSET(0x1B8B1C70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET UNITYSDK_OFFSET(0x1B8B0E90)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET UNITYSDK_OFFSET(0x1B8AC290)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET UNITYSDK_OFFSET(0x1B8AC250)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET UNITYSDK_OFFSET(0x1B8AF830)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET UNITYSDK_OFFSET(0x1B8AFBD0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET UNITYSDK_OFFSET(0x1B8B1AF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1B8AFDF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET UNITYSDK_OFFSET(0x1B8B2A90)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET UNITYSDK_OFFSET(0x1B8AD970)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET UNITYSDK_OFFSET(0x1B8AF0A0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET UNITYSDK_OFFSET(0x1B8B19F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET UNITYSDK_OFFSET(0x1B8B1530)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATE_1_OFFSET UNITYSDK_OFFSET(0x1B8B2E70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET UNITYSDK_OFFSET(0x1B8B2E50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET UNITYSDK_OFFSET(0x1B8AC720)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET UNITYSDK_OFFSET(0x1B8AC860)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B8AD990)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET UNITYSDK_OFFSET(0x1B8AD4A0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B0020)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Tess_TypeDefinitionIndex = 25941;

	class Tess : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* _event; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*>* _dict; // 0x18
		::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>> elementsList; // 0x20
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::CombineCallback* _combineCallback; // 0x38
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityQueue_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*>* _pq; // 0x40
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::LTMesh* _mesh; // 0x48
		::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* _vertices; // 0x50
		::System::Single _bmaxY; // 0x58
		::System::Single _bminX; // 0x5C
		::System::Int32 _elementCount; // 0x60
		::System::Single SUnitX; // 0x64
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _tUnit; // 0x68
		::System::Single _bmaxX; // 0x74
		::System::Single SUnitY; // 0x78
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _sUnit; // 0x7C
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _normal; // 0x88
		::System::Single SentinelCoord; // 0x94
		::System::Single _bminY; // 0x98
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule _windingRule; // 0x9C
		::System::Boolean NoEmptyPolygons; // 0xA0
		::System::Boolean UsePooling; // 0xA1
		::System::Int32 _vertexCount; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* RegionBelow(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET))(this, reg);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* RegionAbove(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET))(this, reg);
		}

		::System::Boolean EdgeLeq(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg1, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET))(this, reg1, reg2);
		}

		::System::Void DeleteRegion(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET))(this, reg);
		}

		::System::Void FixUpperEdge(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* newEdge)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET))(this, reg, newEdge);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* TopLeftRegion(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET))(this, reg);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* TopRightRegion(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET))(this, reg);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* AddRegionBelow(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regAbove, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eNewUp)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET))(this, regAbove, eNewUp);
		}

		::System::Void ComputeWinding(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET))(this, reg);
		}

		::System::Void FinishRegion(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET))(this, reg);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* FinishLeftRegions(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regFirst, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regLast)
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET))(this, regFirst, regLast);
		}

		::System::Void AddRightEdges(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eFirst, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eLast, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eTopLeft, ::System::Boolean cleanUp)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET))(this, regUp, eFirst, eLast, eTopLeft, cleanUp);
		}

		::System::Void SpliceMergeVertices(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* e1, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* e2)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET))(this, e1, e2);
		}

		::System::Void VertexWeights(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* isect, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* org, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* dst, ::System::Single& w0, ::System::Single& w1)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET))(this, isect, org, dst, w0, w1);
		}

		::System::Void GetIntersectData(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* isect, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* orgUp, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* dstUp, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* orgLo, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* dstLo)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET))(this, isect, orgUp, dstUp, orgLo, dstLo);
		}

		::System::Boolean CheckForRightSplice(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET))(this, regUp);
		}

		::System::Boolean CheckForLeftSplice(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET))(this, regUp);
		}

		::System::Boolean CheckForIntersect(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET))(this, regUp);
		}

		::System::Void WalkDirtyRegions(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET))(this, regUp);
		}

		::System::Void ConnectRightVertex(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* eBottomLeft)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET))(this, regUp, eBottomLeft);
		}

		::System::Void ConnectLeftDegenerate(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* regUp, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* vEvent)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET))(this, regUp, vEvent);
		}

		::System::Void ConnectLeftVertex(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* vEvent)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET))(this, vEvent);
		}

		::System::Void SweepEvent(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* vEvent)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET))(this, vEvent);
		}

		::System::Void AddSentinel(::System::Single smin, ::System::Single smax, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET))(this, smin, smax, t);
		}

		::System::Void InitEdgeDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET))(this);
		}

		::System::Void DoneEdgeDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET))(this);
		}

		::System::Void RemoveDegenerateEdges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET))(this);
		}

		::System::Void InitPriorityQ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET))(this);
		}

		::System::Void DonePriorityQ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET))(this);
		}

		::System::Void RemoveDegenerateFaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET))(this);
		}

		::System::Void ComputeInterior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 get_Normal()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_Normal(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET))(this, value);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* get_Vertices()
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Elements()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Int32>* get_ElementsList()
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTSLIST_OFFSET))(this);
		}

		::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>> get_ElementsArray()
		{
			return ((::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTSARRAY_OFFSET))(this);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET))(this);
		}

		::System::Void ComputeNormal(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3& norm)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET))(this, norm);
		}

		::System::Void CheckOrientation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET))(this);
		}

		::System::Void ProjectPolygon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET))(this);
		}

		::System::Void TessellateMonoRegion(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* face)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET))(this, face);
		}

		::System::Void TessellateInterior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET))(this);
		}

		::System::Void DiscardExterior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET))(this);
		}

		::System::Void SetWindingNumber(::System::Int32 value, ::System::Boolean keepOnlyBoundary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET))(this, value, keepOnlyBoundary);
		}

		::System::Int32 GetNeighbourFace(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* edge)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET))(this, edge);
		}

		::System::Void OutputPolymesh(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ElementType elementType, ::System::Int32 polySize)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ElementType, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET))(this, elementType, polySize);
		}

		::System::Void OutputContours()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET))(this);
		}

		::System::Single SignedArea(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* vertices)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET))(this, vertices);
		}

		::System::Void AddContour(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET))(this, vertices);
		}

		::System::Void AddContour_1(::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* vertices, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourOrientation forceOrientation)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>*, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourOrientation))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDCONTOUR_1_OFFSET))(this, vertices, forceOrientation);
		}

		::System::Void Tessellate(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule windingRule, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ElementType elementType, ::System::Int32 polySize)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ElementType, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET))(this, windingRule, elementType, polySize);
		}

		::System::Void Tessellate_1(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule windingRule, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ElementType elementType, ::System::Int32 polySize, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::CombineCallback* combineCallback)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ElementType, ::System::Int32, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::CombineCallback*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATE_1_OFFSET))(this, windingRule, elementType, polySize, combineCallback);
		}
	};
}
