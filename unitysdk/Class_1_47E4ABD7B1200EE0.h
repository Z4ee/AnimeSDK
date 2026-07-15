#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E7E667A0866D3C25;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_47E4ABD7B1200EE0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x152CD3D0)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0x152D0C70)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_560BE06B32C61145_1_OFFSET UNITYSDK_OFFSET(0x152D0A70)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_560BE06B32C61145_OFFSET UNITYSDK_OFFSET(0x152CE4B0)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_A92F2FB1AA901A5B_OFFSET UNITYSDK_OFFSET(0x152D0590)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_C6A471BA46EE9139_OFFSET UNITYSDK_OFFSET(0x152CE6B0)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x152CEF50)
#define CLASS_1_47E4ABD7B1200EE0__CTOR_OFFSET UNITYSDK_OFFSET(0x152CD370)

inline static constexpr unsigned int Class_1_47E4ABD7B1200EE0_TypeDefinitionIndex = 74006;

class Class_1_47E4ABD7B1200EE0 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* Field_1_3; // 0x10
	::Class_2_2090B77B5C7838F2* Field_1_4; // 0x18
	::Class_3_543326C044264182* Field_1_5; // 0x20

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C6A471BA46EE9139(::Class_2_6B60059019300BAD* a1, ::Class_1_E7E667A0866D3C25* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_E7E667A0866D3C25*))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_C6A471BA46EE9139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* Method_1_A92F2FB1AA901A5B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_A92F2FB1AA901A5B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Single Method_1_560BE06B32C61145()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_560BE06B32C61145_OFFSET))(this);
	}

	::System::Single Method_1_560BE06B32C61145_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_560BE06B32C61145_1_OFFSET))(this);
	}
};
