#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_06AF9B854C9B5A46_Struct_2_310EFBE712F46D77.h"
#include "unitysdk/Enum_3_C309ACBCE1E1BEB9.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define CLASS_1_06AF9B854C9B5A46_METHOD_1_177573CF9B08451A_OFFSET UNITYSDK_OFFSET(0x1E788D40)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_292F5DF952F180C0_OFFSET UNITYSDK_OFFSET(0x1E787720)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_2EA4D84A9E935829_OFFSET UNITYSDK_OFFSET(0x1E787A10)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_3BC80F9260F59D93_OFFSET UNITYSDK_OFFSET(0x1E787890)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_4875ECCABD4EFBE2_OFFSET UNITYSDK_OFFSET(0x1E787390)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1E787070)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_9FFE09A863AF903B_OFFSET UNITYSDK_OFFSET(0x1E788DB0)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_A2035DEE3A57E3D1_OFFSET UNITYSDK_OFFSET(0x1E787940)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_A81383A11736BA8A_OFFSET UNITYSDK_OFFSET(0x1E788E50)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_ADF8D333DD9F132F_OFFSET UNITYSDK_OFFSET(0x1E788C60)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0x1E789070)
#define CLASS_1_06AF9B854C9B5A46_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1E787340)
#define CLASS_1_06AF9B854C9B5A46__CTOR_OFFSET UNITYSDK_OFFSET(0x1E786E60)

inline static constexpr unsigned int Class_1_06AF9B854C9B5A46_TypeDefinitionIndex = 90951;

class Class_1_06AF9B854C9B5A46 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06AF9B854C9B5A46_TypeDefinitionIndex)->GetStaticField(0x12DB0);
	}
	::UnityEngine::GameObject* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::UnityEngine::Transform* Field_1_8; // 0x20
	::Class_1_0C791B68CB2A5BF5* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_06AF9B854C9B5A46_Struct_2_310EFBE712F46D77>* Field_1_1; // 0x30
	::UnityEngine::MaterialPropertyBlock* Field_1_7; // 0x38
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_1_2; // 0x40
	::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* Field_1_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	::System::Void Method_1_4875ECCABD4EFBE2(::UnityEngine::Vector3 a1, ::Class_1_06AF9B854C9B5A46_Struct_2_310EFBE712F46D77& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_06AF9B854C9B5A46_Struct_2_310EFBE712F46D77&))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_4875ECCABD4EFBE2_OFFSET))(this, a1, a2);
	}

	::Class_1_E13183B148E560DC* Method_1_A2035DEE3A57E3D1(::UnityEngine::SpriteRenderer* a1)
	{
		return ((::Class_1_E13183B148E560DC*(*)(::PVOID, ::UnityEngine::SpriteRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_A2035DEE3A57E3D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EA4D84A9E935829(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_2EA4D84A9E935829_OFFSET))(this, a1);
	}

	static ::Class_1_06AF9B854C9B5A46* Method_1_ADF8D333DD9F132F(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a3)
	{
		return ((::Class_1_06AF9B854C9B5A46*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_ADF8D333DD9F132F_OFFSET))(a1, a2, a3);
	}

	::Class_1_E13183B148E560DC* Method_1_3BC80F9260F59D93(::UnityEngine::SpriteRenderer* a1, ::MoleMole::TextureSheetType a2, ::System::String* a3)
	{
		return ((::Class_1_E13183B148E560DC*(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_3BC80F9260F59D93_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_292F5DF952F180C0()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_292F5DF952F180C0_OFFSET))(this);
	}

	::Class_1_06AF9B854C9B5A46* Method_1_177573CF9B08451A(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a3)
	{
		return ((::Class_1_06AF9B854C9B5A46*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_177573CF9B08451A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9FFE09A863AF903B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_9FFE09A863AF903B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A81383A11736BA8A(::System::UInt32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_C309ACBCE1E1BEB9 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_C309ACBCE1E1BEB9, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_A81383A11736BA8A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_E975629435F9C6D4(::Class_1_06AF9B854C9B5A46* a1)
	{
		return ((::System::Void(*)(::Class_1_06AF9B854C9B5A46*))((::PBYTE)hIl2Cpp + CLASS_1_06AF9B854C9B5A46_METHOD_1_E975629435F9C6D4_OFFSET))(a1);
	}
};
