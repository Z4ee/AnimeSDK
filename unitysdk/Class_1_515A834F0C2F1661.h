#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_515A834F0C2F1661_METHOD_1_1B36A83DEF86437C_OFFSET UNITYSDK_OFFSET(0x1C53CAE0)
#define CLASS_1_515A834F0C2F1661_METHOD_1_6DFECBD3EA0A15E8_OFFSET UNITYSDK_OFFSET(0x1C53C6F0)
#define CLASS_1_515A834F0C2F1661_METHOD_1_BB229B22BAE508B3_OFFSET UNITYSDK_OFFSET(0x1C53CC20)
#define CLASS_1_515A834F0C2F1661_METHOD_1_EE3CCB3EBB7312F7_OFFSET UNITYSDK_OFFSET(0x1C53C460)
#define CLASS_1_515A834F0C2F1661__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53C6E0)

inline static constexpr unsigned int Class_1_515A834F0C2F1661_TypeDefinitionIndex = 41738;

class Class_1_515A834F0C2F1661 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* ABNDIOFJNDM; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_515A834F0C2F1661__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EE3CCB3EBB7312F7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_515A834F0C2F1661_METHOD_1_EE3CCB3EBB7312F7_OFFSET))(this);
	}

	::System::Int32 Method_1_6DFECBD3EA0A15E8(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_515A834F0C2F1661_METHOD_1_6DFECBD3EA0A15E8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1B36A83DEF86437C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_515A834F0C2F1661_METHOD_1_1B36A83DEF86437C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BB229B22BAE508B3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_515A834F0C2F1661_METHOD_1_BB229B22BAE508B3_OFFSET))(this, a1);
	}
};
