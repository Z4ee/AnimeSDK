#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_2;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01F2B992AB10B39D_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11AD8450)
#define CLASS_1_01F2B992AB10B39D_METHOD_1_24886E26DA7D7A1C_OFFSET UNITYSDK_OFFSET(0x11AD8510)
#define CLASS_1_01F2B992AB10B39D_METHOD_1_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x11AD80B0)
#define CLASS_1_01F2B992AB10B39D__CTOR_OFFSET UNITYSDK_OFFSET(0x11AD8060)

inline static constexpr unsigned int Class_1_01F2B992AB10B39D_TypeDefinitionIndex = 62724;

class Class_1_01F2B992AB10B39D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BCBA2F161B837B0C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D_METHOD_1_BCBA2F161B837B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_24886E26DA7D7A1C(::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D_METHOD_1_24886E26DA7D7A1C_OFFSET))(this, a1);
	}
};
