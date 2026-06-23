#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B3DEB47E64F97B4_METHOD_1_826DF794DDCA5ECB_OFFSET UNITYSDK_OFFSET(0x13CD9300)
#define CLASS_1_9B3DEB47E64F97B4_METHOD_1_C701559DC04E4417_OFFSET UNITYSDK_OFFSET(0x13CD93F0)
#define CLASS_1_9B3DEB47E64F97B4_METHOD_1_CF347C8679BFB90C_OFFSET UNITYSDK_OFFSET(0x13CD92A0)
#define CLASS_1_9B3DEB47E64F97B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CD9220)

inline static constexpr unsigned int Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex = 86103;

class Class_1_9B3DEB47E64F97B4 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x113B0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x113B4);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x113B8);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x113BC);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B3DEB47E64F97B4_TypeDefinitionIndex)->GetStaticField(0x113C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CF347C8679BFB90C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4_METHOD_1_CF347C8679BFB90C_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_1_826DF794DDCA5ECB(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4_METHOD_1_826DF794DDCA5ECB_OFFSET))(a1);
	}

	static ::System::Void Method_1_C701559DC04E4417(::MoleMole::EntityHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B3DEB47E64F97B4_METHOD_1_C701559DC04E4417_OFFSET))(a1, a2, a3);
	}
};
