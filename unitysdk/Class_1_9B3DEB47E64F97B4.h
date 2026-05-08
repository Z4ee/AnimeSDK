#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B3DEB47E64F97B4_METHOD_1_826DF794DDCA5ECB_OFFSET UNITYSDK_OFFSET(0x10473060)
#define CLASS_1_9B3DEB47E64F97B4_METHOD_1_C701559DC04E4417_OFFSET UNITYSDK_OFFSET(0x10472570)
#define CLASS_1_9B3DEB47E64F97B4_METHOD_1_CF347C8679BFB90C_OFFSET UNITYSDK_OFFSET(0x10473000)
#define CLASS_1_9B3DEB47E64F97B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x104724F0)

inline static constexpr unsigned int Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex = 52139;

class Class_1_9B3DEB47E64F97B4 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x11A80);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x11A84);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x11A88);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x11A8C);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x11A90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_C701559DC04E4417(::MoleMole::EntityHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4_METHOD_1_C701559DC04E4417_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4_METHOD_1_CF347C8679BFB90C_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_1_826DF794DDCA5ECB(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4_METHOD_1_826DF794DDCA5ECB_OFFSET))(a1);
	}
};
