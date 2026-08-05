#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_39.h"
#include "unitysdk/System/Object.h"

class Class_2_787A64751D1D3DEF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_787A64751D1D3DEF_CLASS_1_2037DBFC80A407FF_METHOD_1_FD3EAA6E9D492B8E_OFFSET UNITYSDK_OFFSET(0x1C3CB630)
#define CLASS_2_787A64751D1D3DEF_CLASS_1_2037DBFC80A407FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CB620)

inline static constexpr unsigned int Class_2_787A64751D1D3DEF_Class_1_2037DBFC80A407FF_TypeDefinitionIndex = 48085;

class Class_2_787A64751D1D3DEF_Class_1_2037DBFC80A407FF : public ::System::Object
{
public:
	::Class_2_787A64751D1D3DEF* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Action_1<::System::Boolean>* Field_1_0; // 0x20
	::Enum_3_DB663931210BBC27_39 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_CLASS_1_2037DBFC80A407FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD3EAA6E9D492B8E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_CLASS_1_2037DBFC80A407FF_METHOD_1_FD3EAA6E9D492B8E_OFFSET))(this, a1);
	}
};
