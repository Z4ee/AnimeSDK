#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGPath.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGShape; }
namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroupCollection; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_CALCSEGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE9AED0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_CROSSDISTANCETOF_OFFSET UNITYSDK_OFFSET(0x1DE9B020)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_CROSSFTODISTANCE_OFFSET UNITYSDK_OFFSET(0x1DE9AFE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE993C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETCROSSFINDEX_OFFSET UNITYSDK_OFFSET(0x1DE9B070)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETCROSSLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE9A9B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1DE9B060)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETSEGMENTINDICES_OFFSET UNITYSDK_OFFSET(0x1DE9ADF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETSEGMENTVERTICES_OFFSET UNITYSDK_OFFSET(0x1DE9B190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETVERTEXINDEX_1_OFFSET UNITYSDK_OFFSET(0x1DE9A0E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETVERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x1DE9B100)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSCUSTOMVALUES_OFFSET UNITYSDK_OFFSET(0x1DE97AB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSF_OFFSET UNITYSDK_OFFSET(0x1DE98070)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSMAP_OFFSET UNITYSDK_OFFSET(0x1DE98230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSRELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x1DE97990)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSSIZE_OFFSET UNITYSDK_OFFSET(0x1DE92A70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_OFFSET UNITYSDK_OFFSET(0x1DE99880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_SCALES_OFFSET UNITYSDK_OFFSET(0x1DE97BD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_SEGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE983F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DE98460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEXNORMALS_OFFSET UNITYSDK_OFFSET(0x1DE97870)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEXNORMAL_OFFSET UNITYSDK_OFFSET(0x1DE97EB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEX_OFFSET UNITYSDK_OFFSET(0x1DE97CF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1DE97750)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUMEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1DE9A4A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUMEPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE9A1F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUMEUP_OFFSET UNITYSDK_OFFSET(0x1DE9A720)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUME_OFFSET UNITYSDK_OFFSET(0x1DE99D00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSCUSTOMVALUES_OFFSET UNITYSDK_OFFSET(0x1DE97AC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSF_OFFSET UNITYSDK_OFFSET(0x1DE981A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSMAP_OFFSET UNITYSDK_OFFSET(0x1DE98360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSRELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x1DE979A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_SCALES_OFFSET UNITYSDK_OFFSET(0x1DE97BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_SEGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1DE98450)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTEXNORMALS_OFFSET UNITYSDK_OFFSET(0x1DE97880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTEXNORMAL_OFFSET UNITYSDK_OFFSET(0x1DE97FE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTEX_OFFSET UNITYSDK_OFFSET(0x1DE97E20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1DE97760)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE98480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DE98960)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DE98E50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE98470)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGVolume_TypeDefinitionIndex = 38959;

	class CGVolume : public ::FluffyUnderware::Curvy::Generator::CGPath
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> crossRelativeDistances; // 0xA8
		::Il2CppArray<::System::Single>* _segmentLength; // 0xB8
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> vertexNormals; // 0xC0
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> vertices; // 0xD0
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> scales; // 0xE0
		::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroupCollection* CrossMaterialGroups; // 0xF0
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> crossCustomValues; // 0xF8
		::System::Boolean CrossSeamless; // 0x108
		::System::Boolean CrossClosed; // 0x109
		::System::Single CrossFShift; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 samplePoints, ::FluffyUnderware::Curvy::Generator::CGShape* crossShape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_1_OFFSET))(this, samplePoints, crossShape);
		}

		::System::Void _ctor_2(::FluffyUnderware::Curvy::Generator::CGPath* path, ::FluffyUnderware::Curvy::Generator::CGShape* crossShape)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGPath*, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_2_OFFSET))(this, path, crossShape);
		}

		::System::Void _ctor_3(::FluffyUnderware::Curvy::Generator::CGVolume* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME__CTOR_3_OFFSET))(this, source);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_Vertices()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_Vertices(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTICES_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_VertexNormals()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEXNORMALS_OFFSET))(this);
		}

		::System::Void set_VertexNormals(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTEXNORMALS_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> get_CrossRelativeDistances()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSRELATIVEDISTANCES_OFFSET))(this);
		}

		::System::Void set_CrossRelativeDistances(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSRELATIVEDISTANCES_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> get_CrossCustomValues()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSCUSTOMVALUES_OFFSET))(this);
		}

		::System::Void set_CrossCustomValues(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSCUSTOMVALUES_OFFSET))(this, value);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> get_Scales()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_SCALES_OFFSET))(this);
		}

		::System::Void set_Scales(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_SCALES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Vertex()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEX_OFFSET))(this);
		}

		::System::Void set_Vertex(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTEX_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_VertexNormal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEXNORMAL_OFFSET))(this);
		}

		::System::Void set_VertexNormal(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_VERTEXNORMAL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_CrossF()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSF_OFFSET))(this);
		}

		::System::Void set_CrossF(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSF_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_CrossMap()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSMAP_OFFSET))(this);
		}

		::System::Void set_CrossMap(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_CROSSMAP_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_SegmentLength()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_SEGMENTLENGTH_OFFSET))(this);
		}

		::System::Void set_SegmentLength(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_SET_SEGMENTLENGTH_OFFSET))(this, value);
		}

		::System::Int32 get_CrossSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_CROSSSIZE_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_DISPOSE_OFFSET))(this, disposing);
		}

		static ::FluffyUnderware::Curvy::Generator::CGVolume* Get(::FluffyUnderware::Curvy::Generator::CGVolume* data, ::FluffyUnderware::Curvy::Generator::CGPath* path, ::FluffyUnderware::Curvy::Generator::CGShape* crossShape)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGVolume*(*)(::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::Curvy::Generator::CGPath*, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GET_OFFSET))(data, path, crossShape);
		}

		::System::Void InterpolateVolume(::System::Single f, ::System::Single crossF, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& dir, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUME_OFFSET))(this, f, crossF, pos, dir, up);
		}

		::UnityEngine::Vector3 InterpolateVolumePosition(::System::Single f, ::System::Single crossF)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUMEPOSITION_OFFSET))(this, f, crossF);
		}

		::UnityEngine::Vector3 InterpolateVolumeDirection(::System::Single f, ::System::Single crossF)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUMEDIRECTION_OFFSET))(this, f, crossF);
		}

		::UnityEngine::Vector3 InterpolateVolumeUp(::System::Single f, ::System::Single crossF)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_INTERPOLATEVOLUMEUP_OFFSET))(this, f, crossF);
		}

		::System::Single GetCrossLength(::System::Single pathF)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETCROSSLENGTH_OFFSET))(this, pathF);
		}

		::System::Single CrossFToDistance(::System::Single f, ::System::Single crossF, ::FluffyUnderware::Curvy::CurvyClamping crossClamping)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_CROSSFTODISTANCE_OFFSET))(this, f, crossF, crossClamping);
		}

		::System::Single CrossDistanceToF(::System::Single f, ::System::Single distance, ::FluffyUnderware::Curvy::CurvyClamping crossClamping)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_CROSSDISTANCETOF_OFFSET))(this, f, distance, crossClamping);
		}

		::System::Void GetSegmentIndices(::System::Single pathF, ::System::Int32& segment0Index, ::System::Int32& segment1Index, ::System::Single& frag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETSEGMENTINDICES_OFFSET))(this, pathF, segment0Index, segment1Index, frag);
		}

		::System::Int32 GetSegmentIndex(::System::Int32 segment)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETSEGMENTINDEX_OFFSET))(this, segment);
		}

		::System::Int32 GetCrossFIndex(::System::Single crossF, ::System::Single& frag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETCROSSFINDEX_OFFSET))(this, crossF, frag);
		}

		::System::Int32 GetVertexIndex(::System::Single pathF, ::System::Single& pathFrag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETVERTEXINDEX_OFFSET))(this, pathF, pathFrag);
		}

		::System::Int32 GetVertexIndex_1(::System::Single pathF, ::System::Single crossF, ::System::Single& pathFrag, ::System::Single& crossFrag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETVERTEXINDEX_1_OFFSET))(this, pathF, crossF, pathFrag, crossFrag);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetSegmentVertices(::Il2CppArray<::System::Int32>* segmentIndices)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_GETSEGMENTVERTICES_OFFSET))(this, segmentIndices);
		}

		::System::Single calcSegmentLength(::System::Int32 segmentIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGVOLUME_CALCSEGMENTLENGTH_OFFSET))(this, segmentIndex);
		}
	};
}
