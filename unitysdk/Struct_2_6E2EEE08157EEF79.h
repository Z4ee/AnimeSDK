#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define STRUCT_2_6E2EEE08157EEF79_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7BD020)
#define STRUCT_2_6E2EEE08157EEF79_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BCF50)
#define STRUCT_2_6E2EEE08157EEF79_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BD030)
#define STRUCT_2_6E2EEE08157EEF79_METHOD_2_256942C61D70C905_1_OFFSET UNITYSDK_OFFSET(0x17E53300)
#define STRUCT_2_6E2EEE08157EEF79_METHOD_2_256942C61D70C905_OFFSET UNITYSDK_OFFSET(0x17E53180)
#define STRUCT_2_6E2EEE08157EEF79_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7BD160)
#define STRUCT_2_6E2EEE08157EEF79_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7BD0F0)

inline static constexpr unsigned int Struct_2_6E2EEE08157EEF79_TypeDefinitionIndex = 84794;

struct alignas(4) Struct_2_6E2EEE08157EEF79
{
	::UnityEngine::Vector3 Field_2_3; // 0x10
	::System::Single Field_2_2; // 0x1C
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x24
	::System::Single Field_2_7; // 0x28
	::System::Single Field_2_6; // 0x2C

	::System::Boolean Equals(::Struct_2_6E2EEE08157EEF79 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6E2EEE08157EEF79))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_256942C61D70C905(::Struct_2_6E2EEE08157EEF79 a1, ::Struct_2_6E2EEE08157EEF79 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_6E2EEE08157EEF79, ::Struct_2_6E2EEE08157EEF79))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_METHOD_2_256942C61D70C905_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_256942C61D70C905_1(::Struct_2_6E2EEE08157EEF79 a1, ::Struct_2_6E2EEE08157EEF79 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_6E2EEE08157EEF79, ::Struct_2_6E2EEE08157EEF79))((::PBYTE)hIl2Cpp + STRUCT_2_6E2EEE08157EEF79_METHOD_2_256942C61D70C905_1_OFFSET))(a1, a2);
	}
};
