#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46FECA8E1D551D46_38.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_405.h"
#include "unitysdk/Struct_2_4FB7B225E2F33836.h"
#include "unitysdk/Struct_2_7734F33592BF49F6.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_1.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C4901CEC2E16A701_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x16A22020)
#define CLASS_2_C4901CEC2E16A701_METHOD_2_5906F1C536BB1219_OFFSET UNITYSDK_OFFSET(0x16A21FA0)
#define CLASS_2_C4901CEC2E16A701_METHOD_2_E48E9FEA747FF24C_1_OFFSET UNITYSDK_OFFSET(0x16A21F70)
#define CLASS_2_C4901CEC2E16A701_METHOD_2_E48E9FEA747FF24C_OFFSET UNITYSDK_OFFSET(0x16A21F40)
#define CLASS_2_C4901CEC2E16A701_METHOD_2_F82655C18C1D8D0F_OFFSET UNITYSDK_OFFSET(0x16A21FC0)
#define CLASS_2_C4901CEC2E16A701__CTOR_OFFSET UNITYSDK_OFFSET(0x16A21F30)

inline static constexpr unsigned int Class_2_C4901CEC2E16A701_TypeDefinitionIndex = 15216;

class Class_2_C4901CEC2E16A701 : public ::Class_1_46FECA8E1D551D46_38
{
public:
	::Struct_2_4FB7B225E2F33836 Field_2_7; // 0x48
	::System::Boolean Field_2_0; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_405 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_405, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_C4901CEC2E16A701__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Struct_2_7734F33592BF49F6> Method_2_E48E9FEA747FF24C()
	{
		return ((::System::Nullable_1<::Struct_2_7734F33592BF49F6>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4901CEC2E16A701_METHOD_2_E48E9FEA747FF24C_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_7734F33592BF49F6_1> Method_2_E48E9FEA747FF24C_1()
	{
		return ((::System::Nullable_1<::Struct_2_7734F33592BF49F6_1>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4901CEC2E16A701_METHOD_2_E48E9FEA747FF24C_1_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_ABC67D4EFBF3BD9A> Method_2_5906F1C536BB1219()
	{
		return ((::System::Nullable_1<::Struct_2_ABC67D4EFBF3BD9A>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4901CEC2E16A701_METHOD_2_5906F1C536BB1219_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_4FB7B225E2F33836> Method_2_F82655C18C1D8D0F()
	{
		return ((::System::Nullable_1<::Struct_2_4FB7B225E2F33836>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4901CEC2E16A701_METHOD_2_F82655C18C1D8D0F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4901CEC2E16A701_METHOD_2_038349821F206DD5_OFFSET))(this);
	}
};
