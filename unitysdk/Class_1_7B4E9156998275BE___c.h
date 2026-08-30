#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7B4E9156998275BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5470)
#define CLASS_1_7B4E9156998275BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C54A0)
#define CLASS_1_7B4E9156998275BE___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E5C54B0)
#define CLASS_1_7B4E9156998275BE___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1E5C5510)

inline static constexpr unsigned int Class_1_7B4E9156998275BE___c_TypeDefinitionIndex = 42489;

class Class_1_7B4E9156998275BE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*>** StaticGet___9__9_0()
	{
		return (::System::Func_1<::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x54790);
	}
	static ::Class_1_7B4E9156998275BE___c** StaticGet___9()
	{
		return (::Class_1_7B4E9156998275BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x54798);
	}
	static ::System::Func_1<::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE___c_TypeDefinitionIndex)->GetStaticField(0x547A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>* __ctor_b__9_0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C___CTOR_B__9_0_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* __ctor_b__9_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___C___CTOR_B__9_1_OFFSET))(this);
	}
};
