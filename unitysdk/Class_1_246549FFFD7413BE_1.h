#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_246549FFFD7413BE_1_Struct_2_A89D9FEEC8FE463A_2.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D3B7D4BDDD2DA34D;
namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_246549FFFD7413BE_1_METHOD_1_126388F06D886138_OFFSET UNITYSDK_OFFSET(0x116A9490)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x116A6E30)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_44C56721D21E493F_OFFSET UNITYSDK_OFFSET(0x116A8FE0)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_555F3278CDABF72A_OFFSET UNITYSDK_OFFSET(0x116A6EB0)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_62D7A8F91842A5DC_OFFSET UNITYSDK_OFFSET(0x116A8B40)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_6826B142C4E0ADCA_1_OFFSET UNITYSDK_OFFSET(0x116A9B90)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_6826B142C4E0ADCA_2_OFFSET UNITYSDK_OFFSET(0x116A9D10)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_6826B142C4E0ADCA_OFFSET UNITYSDK_OFFSET(0x116A9AA0)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_8E33734FC30B82E9_OFFSET UNITYSDK_OFFSET(0x116A9A30)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_BBA7B48D3918837D_OFFSET UNITYSDK_OFFSET(0x116A9C80)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x116A8AC0)
#define CLASS_1_246549FFFD7413BE_1_METHOD_1_F06879183A43A267_OFFSET UNITYSDK_OFFSET(0x116A99B0)
#define CLASS_1_246549FFFD7413BE_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x116A9470)
#define CLASS_1_246549FFFD7413BE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x116A9420)

inline static constexpr unsigned int Class_1_246549FFFD7413BE_1_TypeDefinitionIndex = 82406;

class Class_1_246549FFFD7413BE_1 : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1_TypeDefinitionIndex)->GetStaticField(0xDD70);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1_TypeDefinitionIndex)->GetStaticField(0xDD74);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_246549FFFD7413BE_1_TypeDefinitionIndex)->GetStaticField(0xDD78);
	}
	::PipelineCamera::CircularBuffer_1<::Class_1_246549FFFD7413BE_1_Struct_2_A89D9FEEC8FE463A_2>* Field_1_6; // 0x10
	::System::Single Field_1_5; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_555F3278CDABF72A(::Class_1_D3B7D4BDDD2DA34D* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>> a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3B7D4BDDD2DA34D*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_555F3278CDABF72A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_62D7A8F91842A5DC(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_62D7A8F91842A5DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_44C56721D21E493F(::System::Single a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_44C56721D21E493F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_126388F06D886138(::System::Span_1<::Struct_2_31CE9F74ED7EF316_1> a1, ::System::Single a2, ::System::Single a3, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>* a4, ::System::Single& a5, ::System::Single& a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::Struct_2_31CE9F74ED7EF316_1>, ::System::Single, ::System::Single, ::System::Func_2<::UnityEngine::Vector3, ::System::Single>*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_126388F06D886138_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_F06879183A43A267(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_F06879183A43A267_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E33734FC30B82E9(::System::Single a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_8E33734FC30B82E9_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_6826B142C4E0ADCA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA_1(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_6826B142C4E0ADCA_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BBA7B48D3918837D(::System::Single& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_BBA7B48D3918837D_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6826B142C4E0ADCA_2(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_1_METHOD_1_6826B142C4E0ADCA_2_OFFSET))(a1, a2);
	}
};
