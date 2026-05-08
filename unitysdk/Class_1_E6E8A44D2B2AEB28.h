#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81D6A2E1C5F77D75.h"
#include "unitysdk/System/Object.h"

class Class_1_79B32D340B0895B6;
namespace System::IO { class MemoryStream; }

#define CLASS_1_E6E8A44D2B2AEB28_METHOD_1_159E3ED770DE87BD_OFFSET UNITYSDK_OFFSET(0x10D9FE50)
#define CLASS_1_E6E8A44D2B2AEB28_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x10D9FFA0)
#define CLASS_1_E6E8A44D2B2AEB28_METHOD_1_729BA3A7B36168F1_OFFSET UNITYSDK_OFFSET(0x10D9FF10)
#define CLASS_1_E6E8A44D2B2AEB28__CTOR_OFFSET UNITYSDK_OFFSET(0x10D9FDA0)

inline static constexpr unsigned int Class_1_E6E8A44D2B2AEB28_TypeDefinitionIndex = 39466;

class Class_1_E6E8A44D2B2AEB28 : public ::System::Object
{
public:
	::System::IO::MemoryStream* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E8A44D2B2AEB28__CTOR_OFFSET))(this);
	}

	::System::IO::MemoryStream* Method_1_159E3ED770DE87BD(::Class_1_79B32D340B0895B6* a1)
	{
		return ((::System::IO::MemoryStream*(*)(::PVOID, ::Class_1_79B32D340B0895B6*))((::PBYTE)hIl2Cpp + CLASS_1_E6E8A44D2B2AEB28_METHOD_1_159E3ED770DE87BD_OFFSET))(this, a1);
	}

	static ::Enum_3_81D6A2E1C5F77D75 Method_1_729BA3A7B36168F1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::Class_1_79B32D340B0895B6* a5)
	{
		return ((::Enum_3_81D6A2E1C5F77D75(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::Class_1_79B32D340B0895B6*))((::PBYTE)hIl2Cpp + CLASS_1_E6E8A44D2B2AEB28_METHOD_1_729BA3A7B36168F1_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6E8A44D2B2AEB28_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
