#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace Spine { class Sequence; }
namespace Spine { class Slot; }
namespace Spine { class TextureRegion; }
namespace System { class String; }

#define SPINE_MESHATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x183A1610)
#define SPINE_MESHATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x183A1990)
#define SPINE_MESHATTACHMENT_GET_A_OFFSET UNITYSDK_OFFSET(0x183A0BD0)
#define SPINE_MESHATTACHMENT_GET_B_OFFSET UNITYSDK_OFFSET(0x183A0BB0)
#define SPINE_MESHATTACHMENT_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x183A0C90)
#define SPINE_MESHATTACHMENT_GET_G_OFFSET UNITYSDK_OFFSET(0x183A0B90)
#define SPINE_MESHATTACHMENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x183A0CD0)
#define SPINE_MESHATTACHMENT_GET_HULLLENGTH_OFFSET UNITYSDK_OFFSET(0x183A0AF0)
#define SPINE_MESHATTACHMENT_GET_PARENTMESH_OFFSET UNITYSDK_OFFSET(0x183A0C30)
#define SPINE_MESHATTACHMENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x183A0BF0)
#define SPINE_MESHATTACHMENT_GET_REGIONUVS_OFFSET UNITYSDK_OFFSET(0x183A0B10)
#define SPINE_MESHATTACHMENT_GET_REGION_OFFSET UNITYSDK_OFFSET(0x183A0AE0)
#define SPINE_MESHATTACHMENT_GET_R_OFFSET UNITYSDK_OFFSET(0x183A0B70)
#define SPINE_MESHATTACHMENT_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x183A0C10)
#define SPINE_MESHATTACHMENT_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x183A0B50)
#define SPINE_MESHATTACHMENT_GET_UVS_OFFSET UNITYSDK_OFFSET(0x183A0B30)
#define SPINE_MESHATTACHMENT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x183A0CB0)
#define SPINE_MESHATTACHMENT_NEWLINKEDMESH_OFFSET UNITYSDK_OFFSET(0x183A1880)
#define SPINE_MESHATTACHMENT_SET_A_OFFSET UNITYSDK_OFFSET(0x183A0BE0)
#define SPINE_MESHATTACHMENT_SET_B_OFFSET UNITYSDK_OFFSET(0x183A0BC0)
#define SPINE_MESHATTACHMENT_SET_EDGES_OFFSET UNITYSDK_OFFSET(0x183A0CA0)
#define SPINE_MESHATTACHMENT_SET_G_OFFSET UNITYSDK_OFFSET(0x183A0BA0)
#define SPINE_MESHATTACHMENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x183A0CE0)
#define SPINE_MESHATTACHMENT_SET_HULLLENGTH_OFFSET UNITYSDK_OFFSET(0x183A0B00)
#define SPINE_MESHATTACHMENT_SET_PARENTMESH_OFFSET UNITYSDK_OFFSET(0x183A0C40)
#define SPINE_MESHATTACHMENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x183A0C00)
#define SPINE_MESHATTACHMENT_SET_REGIONUVS_OFFSET UNITYSDK_OFFSET(0x183A0B20)
#define SPINE_MESHATTACHMENT_SET_REGION_OFFSET UNITYSDK_OFFSET(0x183988E0)
#define SPINE_MESHATTACHMENT_SET_R_OFFSET UNITYSDK_OFFSET(0x183A0B80)
#define SPINE_MESHATTACHMENT_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x183A0C20)
#define SPINE_MESHATTACHMENT_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x183A0B60)
#define SPINE_MESHATTACHMENT_SET_UVS_OFFSET UNITYSDK_OFFSET(0x183A0B40)
#define SPINE_MESHATTACHMENT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x183A0CC0)
#define SPINE_MESHATTACHMENT_UPDATEREGION_OFFSET UNITYSDK_OFFSET(0x183A1110)
#define SPINE_MESHATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183A0CF0)
#define SPINE_MESHATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18398880)

namespace Spine
{
	inline static constexpr unsigned int MeshAttachment_TypeDefinitionIndex = 30698;

	class MeshAttachment : public ::Spine::VertexAttachment
	{
	public:
		::Il2CppArray<::System::Single>* uvs; // 0x38
		::System::String* path; // 0x40
		::Spine::Sequence* sequence; // 0x48
		::Il2CppArray<::System::Int32>* _Edges_k__BackingField; // 0x50
		::Spine::MeshAttachment* parentMesh; // 0x58
		::Il2CppArray<::System::Single>* regionUVs; // 0x60
		::Il2CppArray<::System::Int32>* triangles; // 0x68
		::Spine::TextureRegion* region; // 0x70
		::System::Single g; // 0x78
		::System::Single _Width_k__BackingField; // 0x7C
		::System::Single a; // 0x80
		::System::Single _Height_k__BackingField; // 0x84
		::System::Single r; // 0x88
		::System::Single b; // 0x8C
		::System::Int32 hullLength; // 0x90

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::MeshAttachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT__CTOR_1_OFFSET))(this, other);
		}

		::Spine::TextureRegion* get_Region()
		{
			return ((::Spine::TextureRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_REGION_OFFSET))(this);
		}

		::System::Void set_Region(::Spine::TextureRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TextureRegion*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_REGION_OFFSET))(this, value);
		}

		::System::Int32 get_HullLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_HULLLENGTH_OFFSET))(this);
		}

		::System::Void set_HullLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_HULLLENGTH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_RegionUVs()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_REGIONUVS_OFFSET))(this);
		}

		::System::Void set_RegionUVs(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_REGIONUVS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_UVs()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_UVS_OFFSET))(this);
		}

		::System::Void set_UVs(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_UVS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_Triangles()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_Triangles(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_TRIANGLES_OFFSET))(this, value);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_R_OFFSET))(this, value);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_G_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_B_OFFSET))(this, value);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_A_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_PATH_OFFSET))(this, value);
		}

		::Spine::Sequence* get_Sequence()
		{
			return ((::Spine::Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_SEQUENCE_OFFSET))(this);
		}

		::System::Void set_Sequence(::Spine::Sequence* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_SEQUENCE_OFFSET))(this, value);
		}

		::Spine::MeshAttachment* get_ParentMesh()
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_PARENTMESH_OFFSET))(this);
		}

		::System::Void set_ParentMesh(::Spine::MeshAttachment* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::MeshAttachment*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_PARENTMESH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_Edges()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_EDGES_OFFSET))(this);
		}

		::System::Void set_Edges(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_EDGES_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Void UpdateRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_UPDATEREGION_OFFSET))(this);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* slot, ::System::Int32 start, ::System::Int32 count, ::Il2CppArray<::System::Single>* worldVertices, ::System::Int32 offset, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_MESHATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(this, slot, start, count, worldVertices, offset, stride);
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
