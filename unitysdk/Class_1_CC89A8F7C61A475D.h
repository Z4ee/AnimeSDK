#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A7DCC2EAB8522504.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC89A8F7C61A475D_METHOD_1_2D730252EA599DD2_OFFSET UNITYSDK_OFFSET(0x13237860)
#define CLASS_1_CC89A8F7C61A475D_METHOD_1_EC503097D6FD32F2_OFFSET UNITYSDK_OFFSET(0x13237720)
#define CLASS_1_CC89A8F7C61A475D__CTOR_OFFSET UNITYSDK_OFFSET(0x13237710)

inline static constexpr unsigned int Class_1_CC89A8F7C61A475D_TypeDefinitionIndex = 47004;

class Class_1_CC89A8F7C61A475D : public ::System::Object
{
public:
	::Struct_2_A7DCC2EAB8522504 Field_1_4; // 0x10
	::System::Boolean Field_1_2; // 0x70
	::System::Int32 Field_1_3; // 0x74
	::System::Int32 Field_1_0; // 0x78
	::System::Int32 Field_1_1; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC89A8F7C61A475D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EC503097D6FD32F2(::System::Collections::Generic::List_1<::System::Int32>*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_CC89A8F7C61A475D_METHOD_1_EC503097D6FD32F2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2D730252EA599DD2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC89A8F7C61A475D_METHOD_1_2D730252EA599DD2_OFFSET))(this);
	}
};
