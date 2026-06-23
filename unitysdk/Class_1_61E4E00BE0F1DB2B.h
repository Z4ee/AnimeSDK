#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1048;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_1905ABB9993C5CA5_OFFSET UNITYSDK_OFFSET(0x12678190)
#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_7BF997900BE4DC5A_OFFSET UNITYSDK_OFFSET(0x12678670)
#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x12678180)
#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12678660)
#define CLASS_1_61E4E00BE0F1DB2B__CTOR_OFFSET UNITYSDK_OFFSET(0x12678170)

inline static constexpr unsigned int Class_1_61E4E00BE0F1DB2B_TypeDefinitionIndex = 44169;

class Class_1_61E4E00BE0F1DB2B : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1048* Method_1_1905ABB9993C5CA5(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1048*>*& a1)
	{
		return ((::Class_2_208CC9941471731A_1048*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1048*>*&))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_1905ABB9993C5CA5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1048* Method_1_7BF997900BE4DC5A()
	{
		return ((::Class_2_208CC9941471731A_1048*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_7BF997900BE4DC5A_OFFSET))(this);
	}
};
