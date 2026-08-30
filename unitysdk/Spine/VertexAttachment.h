#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"

namespace Spine { class Slot; }
namespace System { class Object; }
namespace System { class String; }

#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1E629050)
#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1E628F90)
#define SPINE_VERTEXATTACHMENT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1E628BF0)
#define SPINE_VERTEXATTACHMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E628BE0)
#define SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E628C50)
#define SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1E628C10)
#define SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1E628C30)
#define SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET UNITYSDK_OFFSET(0x1E628C00)
#define SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E628C60)
#define SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1E628C20)
#define SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x1E628C40)
#define SPINE_VERTEXATTACHMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E629900)
#define SPINE_VERTEXATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E628DB0)
#define SPINE_VERTEXATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E628C70)

namespace Spine
{
	inline static constexpr unsigned int VertexAttachment_TypeDefinitionIndex = 38365;

	class VertexAttachment : public ::Spine::Attachment
	{
	public:
		static ::System::Object** StaticGet_nextIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VertexAttachment_TypeDefinitionIndex)->GetStaticField(0xE00);
		}
		static ::System::Int32* StaticGet_nextID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VertexAttachment_TypeDefinitionIndex)->GetStaticField(0x740);
		}
		::Il2CppArray<::System::Single>* vertices; // 0x18
		::Il2CppArray<::System::Int32>* bones; // 0x20
		::Spine::VertexAttachment* timelineAttachment; // 0x28
		::System::Int32 id; // 0x30
		::System::Int32 worldVerticesLength; // 0x34

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
