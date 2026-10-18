#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_BE0CF296E1FF1EBB_METHOD_1_45C6EE7274A71C4B_OFFSET UNITYSDK_OFFSET(0x15DC8EF0)
#define CLASS_1_BE0CF296E1FF1EBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC92B0)

inline static constexpr unsigned int Class_1_BE0CF296E1FF1EBB_TypeDefinitionIndex = 67907;

class Class_1_BE0CF296E1FF1EBB : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FPNHGIOHNPA()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE0CF296E1FF1EBB_TypeDefinitionIndex)->GetStaticField(0x37320);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE0CF296E1FF1EBB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_45C6EE7274A71C4B(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_BE0CF296E1FF1EBB_METHOD_1_45C6EE7274A71C4B_OFFSET))(this, a1);
	}
};
