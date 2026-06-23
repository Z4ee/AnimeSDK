#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"

namespace Spine { class Slot; }
namespace System { class Object; }
namespace System { class String; }

#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1E5822B0)
#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1E582270)
#define SPINE_VERTEXATTACHMENT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1E581E30)
#define SPINE_VERTEXATTACHMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E581E20)
#define SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E581E90)
#define SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1E581E50)
#define SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1E581E70)
#define SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET UNITYSDK_OFFSET(0x1E581E40)
#define SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E581EA0)
#define SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1E581E60)
#define SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1E581E80)
#define SPINE_VERTEXATTACHMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E582CB0)
#define SPINE_VERTEXATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E582060)
#define SPINE_VERTEXATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E581EB0)

namespace Spine
{
	inline static constexpr unsigned int VertexAttachment_TypeDefinitionIndex = 32867;

	class VertexAttachment : public ::Spine::Attachment
	{
	public:
		static ::System::Object** StaticGet_nextIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VertexAttachment_TypeDefinitionIndex)->GetStaticField(0x271B0);
		}
		static ::System::Int32* StaticGet_nextID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VertexAttachment_TypeDefinitionIndex)->GetStaticField(0x80B0);
		}
		::Il2CppArray<::System::Single>* vertices; // 0x18
		::Spine::VertexAttachment* timelineAttachment; // 0x20
		::Il2CppArray<::System::Int32>* bones; // 0x28
		::System::Int32 worldVerticesLength; // 0x30
		::System::Int32 id; // 0x34

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::VertexAttachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_Bones(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_Vertices()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_Vertices(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_WorldVerticesLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET))(this);
		}

		::System::Void set_WorldVerticesLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET))(this, value);
		}

		::Spine::VertexAttachment* get_TimelineAttachment()
		{
			return ((::Spine::VertexAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET))(this);
		}

		::System::Void set_TimelineAttachment(::Spine::VertexAttachment* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET))(this, value);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* slot, ::Il2CppArray<::System::Single>* worldVertices)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(this, slot, worldVertices);
		}

		::System::Void ComputeWorldVertices_1(::Spine::Slot* slot, ::System::Int32 start, ::System::Int32 count, ::Il2CppArray<::System::Single>* worldVertices, ::System::Int32 offset, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_1_OFFSET))(this, slot, start, count, worldVertices, offset, stride);
		}
	};
}
