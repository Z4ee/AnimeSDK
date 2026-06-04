#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCF2D138D73977DB_Class_1_3B76E13757985C28_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FCF2D138D73977DB_METHOD_1_5C2AE4913E9AD40D_OFFSET UNITYSDK_OFFSET(0x18E43E30)
#define CLASS_1_FCF2D138D73977DB_METHOD_1_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0x18E43F80)
#define CLASS_1_FCF2D138D73977DB_METHOD_1_DF5D3BC3B2604D3A_OFFSET UNITYSDK_OFFSET(0x18E43C30)
#define CLASS_1_FCF2D138D73977DB_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x18E43D90)
#define CLASS_1_FCF2D138D73977DB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E44110)

inline static constexpr unsigned int Class_1_FCF2D138D73977DB_TypeDefinitionIndex = 39209;

class Class_1_FCF2D138D73977DB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FCF2D138D73977DB_Class_1_3B76E13757985C28_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCF2D138D73977DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF5D3BC3B2604D3A(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FCF2D138D73977DB_METHOD_1_DF5D3BC3B2604D3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCF2D138D73977DB_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Single Method_1_5C2AE4913E9AD40D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCF2D138D73977DB_METHOD_1_5C2AE4913E9AD40D_OFFSET))(this);
	}

	::System::Void Method_1_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FCF2D138D73977DB_METHOD_1_CDFCB4F1AB271783_OFFSET))(this, a1);
	}
};
