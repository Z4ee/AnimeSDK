#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_1;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01F2B992AB10B39D_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x178437D0)
#define CLASS_1_01F2B992AB10B39D_METHOD_1_24886E26DA7D7A1C_OFFSET UNITYSDK_OFFSET(0x17843390)
#define CLASS_1_01F2B992AB10B39D_METHOD_1_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x17843440)
#define CLASS_1_01F2B992AB10B39D__CTOR_OFFSET UNITYSDK_OFFSET(0x17843340)

inline static constexpr unsigned int Class_1_01F2B992AB10B39D_TypeDefinitionIndex = 84417;

class Class_1_01F2B992AB10B39D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_1*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24886E26DA7D7A1C(::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_47EB23CB5C4B2615_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D_METHOD_1_24886E26DA7D7A1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCBA2F161B837B0C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D_METHOD_1_BCBA2F161B837B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F2B992AB10B39D_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
