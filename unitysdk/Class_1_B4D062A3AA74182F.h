#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace UnityEngine::UI { class VertexHelper; }

#define CLASS_1_B4D062A3AA74182F_GET_VERTEXHELPER_OFFSET UNITYSDK_OFFSET(0x113C1F20)
#define CLASS_1_B4D062A3AA74182F_METHOD_1_919EAABE1DE143F5_OFFSET UNITYSDK_OFFSET(0x113C2190)
#define CLASS_1_B4D062A3AA74182F_METHOD_1_C7A86E665C83271A_OFFSET UNITYSDK_OFFSET(0x113C1F40)
#define CLASS_1_B4D062A3AA74182F_SET_VERTEXHELPER_OFFSET UNITYSDK_OFFSET(0x113C1F30)
#define CLASS_1_B4D062A3AA74182F__CCTOR_OFFSET UNITYSDK_OFFSET(0x113C2450)
#define CLASS_1_B4D062A3AA74182F__CTOR_OFFSET UNITYSDK_OFFSET(0x113C2410)

inline static constexpr unsigned int Class_1_B4D062A3AA74182F_TypeDefinitionIndex = 60267;

class Class_1_B4D062A3AA74182F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4D062A3AA74182F_TypeDefinitionIndex)->GetStaticField(0x10280);
	}
	::UnityEngine::UI::VertexHelper* _VertexHelper_k__BackingField; // 0x10
	::Il2CppArray<::UnityEngine::UIVertex>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4D062A3AA74182F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4D062A3AA74182F__CCTOR_OFFSET))();
	}

	::UnityEngine::UI::VertexHelper* get_VertexHelper()
	{
		return ((::UnityEngine::UI::VertexHelper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4D062A3AA74182F_GET_VERTEXHELPER_OFFSET))(this);
	}

	::System::Void set_VertexHelper(::UnityEngine::UI::VertexHelper* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + CLASS_1_B4D062A3AA74182F_SET_VERTEXHELPER_OFFSET))(this, value);
	}

	::System::Boolean Method_1_C7A86E665C83271A(::System::Int32 a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_1_B4D062A3AA74182F_METHOD_1_C7A86E665C83271A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_919EAABE1DE143F5(::System::Int32 a1, ::Il2CppArray<::UnityEngine::UIVertex>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + CLASS_1_B4D062A3AA74182F_METHOD_1_919EAABE1DE143F5_OFFSET))(this, a1, a2);
	}
};
