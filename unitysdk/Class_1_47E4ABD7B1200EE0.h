#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23DE5CE1B1112B16;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_47E4ABD7B1200EE0_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE65A060)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xE65BC70)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0xE65D9F0)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_9876BEA27A0B4DC1_1_OFFSET UNITYSDK_OFFSET(0xE65D870)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_9876BEA27A0B4DC1_OFFSET UNITYSDK_OFFSET(0xE65B250)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_A92F2FB1AA901A5B_OFFSET UNITYSDK_OFFSET(0xE65D3A0)
#define CLASS_1_47E4ABD7B1200EE0_METHOD_1_C6A471BA46EE9139_OFFSET UNITYSDK_OFFSET(0xE65B3D0)
#define CLASS_1_47E4ABD7B1200EE0__CTOR_OFFSET UNITYSDK_OFFSET(0xE65A000)

inline static constexpr unsigned int Class_1_47E4ABD7B1200EE0_TypeDefinitionIndex = 71459;

class Class_1_47E4ABD7B1200EE0 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	::Class_2_E9C9AAD7C711B3E3* Field_1_1; // 0x10
	::Class_3_543326C044264182* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C6A471BA46EE9139(::Class_2_181A7F9409C60DBC* a1, ::Class_1_23DE5CE1B1112B16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_23DE5CE1B1112B16*))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_C6A471BA46EE9139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* Method_1_A92F2FB1AA901A5B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_A92F2FB1AA901A5B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Single Method_1_9876BEA27A0B4DC1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_9876BEA27A0B4DC1_OFFSET))(this);
	}

	::System::Single Method_1_9876BEA27A0B4DC1_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47E4ABD7B1200EE0_METHOD_1_9876BEA27A0B4DC1_1_OFFSET))(this);
	}
};
