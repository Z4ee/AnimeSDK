#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_59;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_94BA29906088A6B2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x159F0E60)
#define CLASS_1_94BA29906088A6B2_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x159F0E70)
#define CLASS_1_94BA29906088A6B2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x159F1580)
#define CLASS_1_94BA29906088A6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x159F0DD0)

inline static constexpr unsigned int Class_1_94BA29906088A6B2_TypeDefinitionIndex = 47212;

class Class_1_94BA29906088A6B2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_4; // 0x10
	::MoleMole::EntityHandle Field_1_1; // 0x18
	::Class_1_43BD383C98B4C0C5_59* Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x30
	::System::Boolean Field_1_0; // 0x34

	::System::Void _ctor(::MoleMole::EntityHandle a1, ::Class_1_43BD383C98B4C0C5_59* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_1_43BD383C98B4C0C5_59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
