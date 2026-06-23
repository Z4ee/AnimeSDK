#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_246549FFFD7413BE_Struct_2_A89D9FEEC8FE463A_1.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_273278230A48923F;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_246549FFFD7413BE_METHOD_1_0DAB6E47AE48F43F_OFFSET UNITYSDK_OFFSET(0x140619C0)
#define CLASS_1_246549FFFD7413BE_METHOD_1_126388F06D886138_OFFSET UNITYSDK_OFFSET(0x14061E10)
#define CLASS_1_246549FFFD7413BE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1405F2B0)
#define CLASS_1_246549FFFD7413BE_METHOD_1_3FD5ECDD3789889D_OFFSET UNITYSDK_OFFSET(0x1405F880)
#define CLASS_1_246549FFFD7413BE_METHOD_1_6826B142C4E0ADCA_1_OFFSET UNITYSDK_OFFSET(0x14061BB0)
#define CLASS_1_246549FFFD7413BE_METHOD_1_6826B142C4E0ADCA_2_OFFSET UNITYSDK_OFFSET(0x14061CA0)
#define CLASS_1_246549FFFD7413BE_METHOD_1_6826B142C4E0ADCA_OFFSET UNITYSDK_OFFSET(0x14061AC0)
#define CLASS_1_246549FFFD7413BE_METHOD_1_7CB484237D76BD68_OFFSET UNITYSDK_OFFSET(0x1405FD10)
#define CLASS_1_246549FFFD7413BE_METHOD_1_BBA7B48D3918837D_OFFSET UNITYSDK_OFFSET(0x14061A30)
#define CLASS_1_246549FFFD7413BE_METHOD_1_C910D6DB718B5ED2_OFFSET UNITYSDK_OFFSET(0x1405F3B0)
#define CLASS_1_246549FFFD7413BE_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1405F330)
#define CLASS_1_246549FFFD7413BE_METHOD_1_E6CCFB6FCCF03701_OFFSET UNITYSDK_OFFSET(0x14061D90)
#define CLASS_1_246549FFFD7413BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x140619A0)
#define CLASS_1_246549FFFD7413BE__CTOR_OFFSET UNITYSDK_OFFSET(0x14061950)

inline static constexpr unsigned int Class_1_246549FFFD7413BE_TypeDefinitionIndex = 67862;

class Class_1_246549FFFD7413BE : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_TypeDefinitionIndex)->GetStaticField(0x10FC0);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_TypeDefinitionIndex)->GetStaticField(0x10FC4);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_TypeDefinitionIndex)->GetStaticField(0x10FC8);
	}
	::PipelineCamera::CircularBuffer_1<::Class_1_246549FFFD7413BE_Struct_2_A89D9FEEC8FE463A_1>* Field_1_3; // 0x10
	::System::Single Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_C910D6DB718B5ED2(::UnityEngine::Quaternion& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_C910D6DB718B5ED2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FD5ECDD3789889D(::System::Single a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_3FD5ECDD3789889D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CB484237D76BD68(::Class_1_273278230A48923F* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_273278230A48923F*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>>))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_7CB484237D76BD68_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0DAB6E47AE48F43F(::System::Single a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_0DAB6E47AE48F43F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_BBA7B48D3918837D(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_BBA7B48D3918837D_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_6826B142C4E0ADCA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA_1(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_6826B142C4E0ADCA_1_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA_2(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_6826B142C4E0ADCA_2_OFFSET))(a1, a2);
	}

	::System::Void Method_1_E6CCFB6FCCF03701(::UnityEngine::Quaternion& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_E6CCFB6FCCF03701_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_126388F06D886138(::System::Span_1<::Struct_2_31CE9F74ED7EF316_2> a1, ::System::Single a2, ::System::Single a3, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>* a4, ::System::Single& a5, ::System::Single& a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316_2>, ::System::Single, ::System::Single, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_METHOD_1_126388F06D886138_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
