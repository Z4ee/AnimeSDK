#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace Spine { class Sequence; }
namespace Spine { class Slot; }
namespace Spine { class TextureRegion; }
namespace System { class String; }

#define SPINE_MESHATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1AC58DE0)
#define SPINE_MESHATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1AC59170)
#define SPINE_MESHATTACHMENT_GET_A_OFFSET UNITYSDK_OFFSET(0x1AC58480)
#define SPINE_MESHATTACHMENT_GET_B_OFFSET UNITYSDK_OFFSET(0x1AC58460)
#define SPINE_MESHATTACHMENT_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x1AC58550)
#define SPINE_MESHATTACHMENT_GET_G_OFFSET UNITYSDK_OFFSET(0x1AC58440)
#define SPINE_MESHATTACHMENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC58590)
#define SPINE_MESHATTACHMENT_GET_HULLLENGTH_OFFSET UNITYSDK_OFFSET(0x1AC583A0)
#define SPINE_MESHATTACHMENT_GET_PARENTMESH_OFFSET UNITYSDK_OFFSET(0x1AC584E0)
#define SPINE_MESHATTACHMENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1AC584A0)
#define SPINE_MESHATTACHMENT_GET_REGIONUVS_OFFSET UNITYSDK_OFFSET(0x1AC583C0)
#define SPINE_MESHATTACHMENT_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1AC58390)
#define SPINE_MESHATTACHMENT_GET_R_OFFSET UNITYSDK_OFFSET(0x1AC58420)
#define SPINE_MESHATTACHMENT_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AC584C0)
#define SPINE_MESHATTACHMENT_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1AC58400)
#define SPINE_MESHATTACHMENT_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1AC583E0)
#define SPINE_MESHATTACHMENT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC58570)
#define SPINE_MESHATTACHMENT_NEWLINKEDMESH_OFFSET UNITYSDK_OFFSET(0x1AC59050)
#define SPINE_MESHATTACHMENT_SET_A_OFFSET UNITYSDK_OFFSET(0x1AC58490)
#define SPINE_MESHATTACHMENT_SET_B_OFFSET UNITYSDK_OFFSET(0x1AC58470)
#define SPINE_MESHATTACHMENT_SET_EDGES_OFFSET UNITYSDK_OFFSET(0x1AC58560)
#define SPINE_MESHATTACHMENT_SET_G_OFFSET UNITYSDK_OFFSET(0x1AC58450)
#define SPINE_MESHATTACHMENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC585A0)
#define SPINE_MESHATTACHMENT_SET_HULLLENGTH_OFFSET UNITYSDK_OFFSET(0x1AC583B0)
#define SPINE_MESHATTACHMENT_SET_PARENTMESH_OFFSET UNITYSDK_OFFSET(0x1AC584F0)
#define SPINE_MESHATTACHMENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1AC584B0)
#define SPINE_MESHATTACHMENT_SET_REGIONUVS_OFFSET UNITYSDK_OFFSET(0x1AC583D0)
#define SPINE_MESHATTACHMENT_SET_REGION_OFFSET UNITYSDK_OFFSET(0x1AC50AD0)
#define SPINE_MESHATTACHMENT_SET_R_OFFSET UNITYSDK_OFFSET(0x1AC58430)
#define SPINE_MESHATTACHMENT_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AC584D0)
#define SPINE_MESHATTACHMENT_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1AC58410)
#define SPINE_MESHATTACHMENT_SET_UVS_OFFSET UNITYSDK_OFFSET(0x1AC583F0)
#define SPINE_MESHATTACHMENT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC58580)
#define SPINE_MESHATTACHMENT_UPDATEREGION_OFFSET UNITYSDK_OFFSET(0x1AC589C0)
#define SPINE_MESHATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC585B0)
#define SPINE_MESHATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC50A70)

namespace Spine
{
	inline static constexpr unsigned int MeshAttachment_TypeDefinitionIndex = 36718;

	class MeshAttachment : public ::Spine::VertexAttachment
	{
	public:
		::Il2CppArray<::System::Int32>* _Edges_k__BackingField; // 0x38
		::Spine::MeshAttachment* parentMesh; // 0x40
		::Il2CppArray<::System::Single>* regionUVs; // 0x48
		::Il2CppArray<::System::Single>* uvs; // 0x50
		::Il2CppArray<::System::Int32>* triangles; // 0x58
		::Spine::TextureRegion* region; // 0x60
		::System::String* path; // 0x68
		::Spine::Sequence* sequence; // 0x70
		::System::Single _Width_k__BackingField; // 0x78
		::System::Single g; // 0x7C
		::System::Single _Height_k__BackingField; // 0x80
		::System::Single b; // 0x84
		::System::Int32 hullLength; // 0x88
		::System::Single a; // 0x8C
		::System::Single r; // 0x90

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::MeshAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		::Spine::TextureRegion* get_Region()
		{
			return ((::Spine::TextureRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_REGION_OFFSET))(this);
		}

		::System::Void set_Region(::Spine::TextureRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TextureRegion*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_REGION_OFFSET))(this, a1);
		}

		::System::Int32 get_HullLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_HULLLENGTH_OFFSET))(this);
		}

		::System::Void set_HullLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_HULLLENGTH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_RegionUVs()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_REGIONUVS_OFFSET))(this);
		}

		::System::Void set_RegionUVs(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_REGIONUVS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_UVs()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_UVS_OFFSET))(this);
		}

		::System::Void set_UVs(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_UVS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Triangles()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_Triangles(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_TRIANGLES_OFFSET))(this, a1);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_R_OFFSET))(this, a1);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_G_OFFSET))(this, a1);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_B_OFFSET))(this, a1);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_A_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_PATH_OFFSET))(this, a1);
		}

		::Spine::Sequence* get_Sequence()
		{
			return ((::Spine::Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_SEQUENCE_OFFSET))(this);
		}

		::System::Void set_Sequence(::Spine::Sequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_SEQUENCE_OFFSET))(this, a1);
		}

		::Spine::MeshAttachment* get_ParentMesh()
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_PARENTMESH_OFFSET))(this);
		}

		::System::Void set_ParentMesh(::Spine::MeshAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_PARENTMESH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Edges()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_EDGES_OFFSET))(this);
		}

		::System::Void set_Edges(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_EDGES_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Void UpdateRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_UPDATEREGION_OFFSET))(this);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Spine::MeshAttachment* NewLinkedMesh()
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_NEWLINKEDMESH_OFFSET))(this);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
