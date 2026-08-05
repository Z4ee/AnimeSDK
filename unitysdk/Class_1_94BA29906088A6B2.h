#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_105;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_94BA29906088A6B2_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x133B1100)
#define CLASS_1_94BA29906088A6B2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x133B10E0)
#define CLASS_1_94BA29906088A6B2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x133B10F0)
#define CLASS_1_94BA29906088A6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x133B1050)

inline static constexpr unsigned int Class_1_94BA29906088A6B2_TypeDefinitionIndex = 69718;

class Class_1_94BA29906088A6B2 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_105* Field_1_7; // 0x10
	::MoleMole::EntityHandle Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_5; // 0x28
	::System::Single Field_1_6; // 0x30
	::System::Boolean Field_1_1; // 0x34

	::System::Void _ctor(::MoleMole::EntityHandle a1, ::Class_1_43BD383C98B4C0C5_105* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_1_43BD383C98B4C0C5_105*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94BA29906088A6B2_METHOD_1_489E0B827662C211_OFFSET))(this);
	}
};
