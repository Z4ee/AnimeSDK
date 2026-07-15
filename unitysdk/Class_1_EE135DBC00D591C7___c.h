#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_EE135DBC00D591C7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC911A0)
#define CLASS_1_EE135DBC00D591C7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC911E0)
#define CLASS_1_EE135DBC00D591C7___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1AC911F0)
#define CLASS_1_EE135DBC00D591C7___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET UNITYSDK_OFFSET(0x1AC912D0)
#define CLASS_1_EE135DBC00D591C7___C__SORTFILEBYNAME_B__103_0_OFFSET UNITYSDK_OFFSET(0x1AC912E0)

inline static constexpr unsigned int Class_1_EE135DBC00D591C7___c_TypeDefinitionIndex = 33876;

class Class_1_EE135DBC00D591C7___c : public ::System::Object
{
public:
	static ::Class_1_EE135DBC00D591C7___c** StaticGet___9()
	{
		return (::Class_1_EE135DBC00D591C7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE135DBC00D591C7___c_TypeDefinitionIndex)->GetStaticField(0x425D0);
	}
	static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_1()
	{
		return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE135DBC00D591C7___c_TypeDefinitionIndex)->GetStaticField(0x425D8);
	}
	static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_0()
	{
		return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE135DBC00D591C7___c_TypeDefinitionIndex)->GetStaticField(0x425E0);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__103_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE135DBC00D591C7___c_TypeDefinitionIndex)->GetStaticField(0x425E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7___C__CTOR_OFFSET))(this);
	}

	::System::Void _RemoveDirectoryReadOnlyAttr_b__70_0(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _RemoveDirectoryReadOnlyAttr_b__70_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 _SortFileByName_b__103_0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7___C__SORTFILEBYNAME_B__103_0_OFFSET))(this, a1, a2);
	}
};
