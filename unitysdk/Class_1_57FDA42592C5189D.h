#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace UnityEngine::UI { class VertexHelper; }

#define CLASS_1_57FDA42592C5189D_GET_VERTEXHELPER_OFFSET UNITYSDK_OFFSET(0xB6D4340)
#define CLASS_1_57FDA42592C5189D_METHOD_1_DFD77DF15D46DF5A_OFFSET UNITYSDK_OFFSET(0xB6D4500)
#define CLASS_1_57FDA42592C5189D_METHOD_1_EE4C3222B0356263_OFFSET UNITYSDK_OFFSET(0xB6D4360)
#define CLASS_1_57FDA42592C5189D_SET_VERTEXHELPER_OFFSET UNITYSDK_OFFSET(0xB6D4350)
#define CLASS_1_57FDA42592C5189D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6D4700)
#define CLASS_1_57FDA42592C5189D__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D46C0)

inline static constexpr unsigned int Class_1_57FDA42592C5189D_TypeDefinitionIndex = 73441;

class Class_1_57FDA42592C5189D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LKLHOEPPMOK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_57FDA42592C5189D_TypeDefinitionIndex)->GetStaticField(0x150D0);
	}
	::UnityEngine::UI::VertexHelper* _VertexHelper_k__BackingField; // 0x10
	::Il2CppArray<::UnityEngine::UIVertex>* IPACDKEBGIJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57FDA42592C5189D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_57FDA42592C5189D__CCTOR_OFFSET))();
	}

	::UnityEngine::UI::VertexHelper* get_VertexHelper()
	{
		return ((::UnityEngine::UI::VertexHelper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57FDA42592C5189D_GET_VERTEXHELPER_OFFSET))(this);
	}

	::System::Void set_VertexHelper(::UnityEngine::UI::VertexHelper* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + CLASS_1_57FDA42592C5189D_SET_VERTEXHELPER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE4C3222B0356263(::System::Int32 a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_1_57FDA42592C5189D_METHOD_1_EE4C3222B0356263_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFD77DF15D46DF5A(::System::Int32 a1, ::Il2CppArray<::UnityEngine::UIVertex>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + CLASS_1_57FDA42592C5189D_METHOD_1_DFD77DF15D46DF5A_OFFSET))(this, a1, a2);
	}
};
