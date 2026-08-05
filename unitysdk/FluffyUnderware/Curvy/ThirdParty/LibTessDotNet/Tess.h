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

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDCONTOUR_1_OFFSET UNITYSDK_OFFSET(0x1F031700)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET UNITYSDK_OFFSET(0x1F0316F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET UNITYSDK_OFFSET(0x1F02B420)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET UNITYSDK_OFFSET(0x1F02B8D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET UNITYSDK_OFFSET(0x1F02E100)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET UNITYSDK_OFFSET(0x1F02CEF0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET UNITYSDK_OFFSET(0x1F02CC70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET UNITYSDK_OFFSET(0x1F02BDE0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F02F8B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET UNITYSDK_OFFSET(0x1F02E860)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET UNITYSDK_OFFSET(0x1F02EC50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET UNITYSDK_OFFSET(0x1F02B4E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET UNITYSDK_OFFSET(0x1F02DAC0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET UNITYSDK_OFFSET(0x1F02DD50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET UNITYSDK_OFFSET(0x1F02D770)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET UNITYSDK_OFFSET(0x1F02B190)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET UNITYSDK_OFFSET(0x1F030690)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET UNITYSDK_OFFSET(0x1F02E350)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET UNITYSDK_OFFSET(0x1F02E780)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET UNITYSDK_OFFSET(0x1F02AE00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET UNITYSDK_OFFSET(0x1F02B670)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET UNITYSDK_OFFSET(0x1F02B5E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET UNITYSDK_OFFSET(0x1F02B200)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET UNITYSDK_OFFSET(0x1F02C6D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET UNITYSDK_OFFSET(0x1F030850)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1F02EBD0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTSARRAY_OFFSET UNITYSDK_OFFSET(0x1F02EBB0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTSLIST_OFFSET UNITYSDK_OFFSET(0x1F02EAD0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x1F02E9F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1F02E990)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1F02E9E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1F02E9D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET UNITYSDK_OFFSET(0x1F02E280)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET UNITYSDK_OFFSET(0x1F02E5D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET UNITYSDK_OFFSET(0x1F031200)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET UNITYSDK_OFFSET(0x1F030890)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET UNITYSDK_OFFSET(0x1F02FA50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET UNITYSDK_OFFSET(0x1F02ADC0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET UNITYSDK_OFFSET(0x1F02AD80)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET UNITYSDK_OFFSET(0x1F02E400)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET UNITYSDK_OFFSET(0x1F02E790)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET UNITYSDK_OFFSET(0x1F030710)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1F02E9B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET UNITYSDK_OFFSET(0x1F031640)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET UNITYSDK_OFFSET(0x1F02C5B0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET UNITYSDK_OFFSET(0x1F02DC60)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET UNITYSDK_OFFSET(0x1F030610)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET UNITYSDK_OFFSET(0x1F030150)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATE_1_OFFSET UNITYSDK_OFFSET(0x1F031A00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET UNITYSDK_OFFSET(0x1F0319E0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET UNITYSDK_OFFSET(0x1F02B250)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET UNITYSDK_OFFSET(0x1F02B390)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1F02C5D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET UNITYSDK_OFFSET(0x1F02C0F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02EBE0)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Tess_TypeDefinitionIndex = 29039;

	class Tess : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*>* _dict; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* _event; // 0x18
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::LTMesh* _mesh; // 0x20
		::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourVertex>* _vertices; // 0x28
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::CombineCallback* _combineCallback; // 0x30
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityQueue_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*>* _pq; // 0x38
		::System::Nullable_1<::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32>> elementsList; // 0x40
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _sUnit; // 0x58
		::System::Int32 _elementCount; // 0x64
		::System::Boolean NoEmptyPolygons; // 0x68
		::System::Boolean UsePooling; // 0x69
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _tUnit; // 0x6C
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 _normal; // 0x78
		::System::Single SUnitX; // 0x84
		::System::Int32 _vertexCount; // 0x88
		::System::Single _bmaxX; // 0x8C
		::System::Single _bminY; // 0x90
		::System::Single _bmaxY; // 0x94
		::System::Single _bminX; // 0x98
		::System::Single SentinelCoord; // 0x9C
		::System::Single SUnitY; // 0xA0
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::WindingRule _windingRule; // 0xA4

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
