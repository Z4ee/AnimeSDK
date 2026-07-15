#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"

namespace Spine { class Slot; }
namespace System { class Object; }
namespace System { class String; }

#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1D2749D0)
#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1D274910)
#define SPINE_VERTEXATTACHMENT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1D274570)
#define SPINE_VERTEXATTACHMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D274560)
#define SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1D2745D0)
#define SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1D274590)
#define SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1D2745B0)
#define SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET UNITYSDK_OFFSET(0x1D274580)
#define SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1D2745E0)
#define SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1D2745A0)
#define SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1D2745C0)
#define SPINE_VERTEXATTACHMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D275280)
#define SPINE_VERTEXATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D274730)
#define SPINE_VERTEXATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2745F0)

namespace Spine
{
	inline static constexpr unsigned int VertexAttachment_TypeDefinitionIndex = 37506;

	class VertexAttachment : public ::Spine::Attachment
	{
	public:
		static ::System::Object** StaticGet_nextIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VertexAttachment_TypeDefinitionIndex)->GetStaticField(0xC50);
		}
		static ::System::Int32* StaticGet_nextID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VertexAttachment_TypeDefinitionIndex)->GetStaticField(0x830);
		}
		::Il2CppArray<::System::Single>* vertices; // 0x18
		::Spine::VertexAttachment* timelineAttachment; // 0x20
		::Il2CppArray<::System::Int32>* bones; // 0x28
		::System::Int32 worldVerticesLength; // 0x30
		::System::Int32 id; // 0x34

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::VertexAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT__CCTOR_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Bones()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_BONES_OFFSET))(this);
		}

		::System::Void set_Bones(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_Vertices()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_Vertices(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET))(this, a1);
		}

		::System::Int32 get_WorldVerticesLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET))(this);
		}

		::System::Void set_WorldVerticesLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET))(this, a1);
		}

		::Spine::VertexAttachment* get_TimelineAttachment()
		{
			return ((::Spine::VertexAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET))(this);
		}

		::System::Void set_TimelineAttachment(::Spine::VertexAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET))(this, a1);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(this, a1, a2);
		}

		::System::Void ComputeWorldVertices_1(::Spine::Slot* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
