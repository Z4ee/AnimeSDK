#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F9CED59F6AC83681___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8977B0)
#define CLASS_1_F9CED59F6AC83681___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8977F0)
#define CLASS_1_F9CED59F6AC83681___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1C897800)
#define CLASS_1_F9CED59F6AC83681___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET UNITYSDK_OFFSET(0x1C8978E0)
#define CLASS_1_F9CED59F6AC83681___C__SORTFILEBYNAME_B__103_0_OFFSET UNITYSDK_OFFSET(0x1C8978F0)

inline static constexpr unsigned int Class_1_F9CED59F6AC83681___c_TypeDefinitionIndex = 34643;

class Class_1_F9CED59F6AC83681___c : public ::System::Object
{
public:
	static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_0()
	{
		return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9CED59F6AC83681___c_TypeDefinitionIndex)->GetStaticField(0x5DB80);
	}
	static ::Class_1_F9CED59F6AC83681___c** StaticGet___9()
	{
		return (::Class_1_F9CED59F6AC83681___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9CED59F6AC83681___c_TypeDefinitionIndex)->GetStaticField(0x5DB88);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__103_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9CED59F6AC83681___c_TypeDefinitionIndex)->GetStaticField(0x5DB90);
	}
	static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_1()
	{
		return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9CED59F6AC83681___c_TypeDefinitionIndex)->GetStaticField(0x5DB98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__CTOR_OFFSET))(this);
	}

	::System::Void _RemoveDirectoryReadOnlyAttr_b__70_0(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _RemoveDirectoryReadOnlyAttr_b__70_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 _SortFileByName_b__103_0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681___C__SORTFILEBYNAME_B__103_0_OFFSET))(this, a1, a2);
	}
};
