#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_787;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_1905ABB9993C5CA5_OFFSET UNITYSDK_OFFSET(0x11928560)
#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_7BF997900BE4DC5A_OFFSET UNITYSDK_OFFSET(0x11928410)
#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11928A40)
#define CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11928A30)
#define CLASS_1_61E4E00BE0F1DB2B__CTOR_OFFSET UNITYSDK_OFFSET(0x11928400)

inline static constexpr unsigned int Class_1_61E4E00BE0F1DB2B_TypeDefinitionIndex = 78947;

class Class_1_61E4E00BE0F1DB2B : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B__CTOR_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_787* Method_1_7BF997900BE4DC5A()
	{
		return ((::Class_2_208CC9941471731A_787*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_7BF997900BE4DC5A_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_787* Method_1_1905ABB9993C5CA5(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_787*>*& a1)
	{
		return ((::Class_2_208CC9941471731A_787*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_787*>*&))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_1905ABB9993C5CA5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61E4E00BE0F1DB2B_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
