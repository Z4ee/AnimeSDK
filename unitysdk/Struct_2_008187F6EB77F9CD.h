#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define STRUCT_2_008187F6EB77F9CD_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define STRUCT_2_008187F6EB77F9CD_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x2E7930)
#define STRUCT_2_008187F6EB77F9CD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE91280)
#define STRUCT_2_008187F6EB77F9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x2E7740)

inline static constexpr unsigned int Struct_2_008187F6EB77F9CD_TypeDefinitionIndex = 79277;

struct alignas(1) Struct_2_008187F6EB77F9CD
{
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_008187F6EB77F9CD_TypeDefinitionIndex)->GetStaticField(0x33BA0);
	}
	::System::Boolean Field_2_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_008187F6EB77F9CD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_008187F6EB77F9CD__CCTOR_OFFSET))();
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_008187F6EB77F9CD_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_008187F6EB77F9CD_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
