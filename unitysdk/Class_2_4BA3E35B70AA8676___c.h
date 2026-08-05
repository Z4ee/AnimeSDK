#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4BA3E35B70AA8676___C_METHOD_1_4D4ECC4E3082A76F_OFFSET UNITYSDK_OFFSET(0x1532FC20)
#define CLASS_2_4BA3E35B70AA8676___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1532FC40)
#define CLASS_2_4BA3E35B70AA8676___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1532FC10)
#define CLASS_2_4BA3E35B70AA8676___C_METHOD_1_E8FAF74CFDE46412_OFFSET UNITYSDK_OFFSET(0x1532FC00)
#define CLASS_2_4BA3E35B70AA8676___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1532FBB0)
#define CLASS_2_4BA3E35B70AA8676___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1532FBF0)

inline static constexpr unsigned int Class_2_4BA3E35B70AA8676___c_TypeDefinitionIndex = 48744;

class Class_2_4BA3E35B70AA8676___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__21_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4BA3E35B70AA8676___c_TypeDefinitionIndex)->GetStaticField(0x3BF60);
	}
	static ::Class_2_4BA3E35B70AA8676___c** StaticGet___9()
	{
		return (::Class_2_4BA3E35B70AA8676___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4BA3E35B70AA8676___c_TypeDefinitionIndex)->GetStaticField(0x3BF68);
	}
	static ::System::Action** StaticGet___9__21_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4BA3E35B70AA8676___c_TypeDefinitionIndex)->GetStaticField(0x3BF70);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__29_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4BA3E35B70AA8676___c_TypeDefinitionIndex)->GetStaticField(0x3BF78);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__29_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4BA3E35B70AA8676___c_TypeDefinitionIndex)->GetStaticField(0x3BF80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4BA3E35B70AA8676___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BA3E35B70AA8676___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_E8FAF74CFDE46412(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + CLASS_2_4BA3E35B70AA8676___C_METHOD_1_E8FAF74CFDE46412_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BA3E35B70AA8676___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Int32 Method_1_4D4ECC4E3082A76F(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + CLASS_2_4BA3E35B70AA8676___C_METHOD_1_4D4ECC4E3082A76F_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BA3E35B70AA8676___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}
};
