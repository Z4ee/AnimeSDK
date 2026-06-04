#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_5C8F9145F9C5ABCD_8_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA9DB3E0)
#define CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_3534CF2C51C37C8D_OFFSET UNITYSDK_OFFSET(0xA9DCB00)
#define CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_A8146AF34FCD5B47_OFFSET UNITYSDK_OFFSET(0xA9DBE20)
#define CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_CF12910D3D3445CD_OFFSET UNITYSDK_OFFSET(0xA9DC490)
#define CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_DDB1F49F4423A0C7_OFFSET UNITYSDK_OFFSET(0xA9DC770)
#define CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_E79871D193CACBCC_OFFSET UNITYSDK_OFFSET(0xA9DBDC0)
#define CLASS_1_5C8F9145F9C5ABCD_8__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DB3D0)

inline static constexpr unsigned int Class_1_5C8F9145F9C5ABCD_8_TypeDefinitionIndex = 72488;

class Class_1_5C8F9145F9C5ABCD_8 : public ::System::Object
{
public:
	::Class_2_2090B77B5C7838F2* Field_1_0; // 0x10
	::Class_3_543326C044264182* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_E79871D193CACBCC(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_E79871D193CACBCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDB1F49F4423A0C7(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_DDB1F49F4423A0C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_A8146AF34FCD5B47(::Entitas::IGroup_1<::Class_2_6B60059019300BAD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_6B60059019300BAD*>*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_A8146AF34FCD5B47_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_3534CF2C51C37C8D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_3534CF2C51C37C8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF12910D3D3445CD(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_8_METHOD_1_CF12910D3D3445CD_OFFSET))(this, a1);
	}
};
