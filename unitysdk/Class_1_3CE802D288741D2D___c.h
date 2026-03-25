#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3CE802D288741D2D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1832AA20)
#define CLASS_1_3CE802D288741D2D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1832AA60)
#define CLASS_1_3CE802D288741D2D___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET UNITYSDK_OFFSET(0x1832AA70)
#define CLASS_1_3CE802D288741D2D___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET UNITYSDK_OFFSET(0x1832AB50)
#define CLASS_1_3CE802D288741D2D___C__SORTFILEBYNAME_B__103_0_OFFSET UNITYSDK_OFFSET(0x1832AB60)

inline static constexpr unsigned int Class_1_3CE802D288741D2D___c_TypeDefinitionIndex = 9539;

class Class_1_3CE802D288741D2D___c : public ::System::Object
{
public:
	static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_0()
	{
		return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CE802D288741D2D___c_TypeDefinitionIndex)->GetStaticField(0x250C0);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__103_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CE802D288741D2D___c_TypeDefinitionIndex)->GetStaticField(0x250C8);
	}
	static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet___9__70_1()
	{
		return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CE802D288741D2D___c_TypeDefinitionIndex)->GetStaticField(0x250D0);
	}
	static ::Class_1_3CE802D288741D2D___c** StaticGet___9()
	{
		return (::Class_1_3CE802D288741D2D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3CE802D288741D2D___c_TypeDefinitionIndex)->GetStaticField(0x250D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__CTOR_OFFSET))(this);
	}

	::System::Void _RemoveDirectoryReadOnlyAttr_b__70_0(::System::String* fullFilePath, ::System::String* fileName, ::System::String* destPath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__REMOVEDIRECTORYREADONLYATTR_B__70_0_OFFSET))(this, fullFilePath, fileName, destPath);
	}

	::System::Void _RemoveDirectoryReadOnlyAttr_b__70_1(::System::String* fullFilePath, ::System::String* fileName, ::System::String* destPath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__REMOVEDIRECTORYREADONLYATTR_B__70_1_OFFSET))(this, fullFilePath, fileName, destPath);
	}

	::System::Int32 _SortFileByName_b__103_0(::System::String* x, ::System::String* y)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__SORTFILEBYNAME_B__103_0_OFFSET))(this, x, y);
	}
};
