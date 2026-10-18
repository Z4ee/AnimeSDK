#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1488;
class Class_0_16E4307DCC419505_397;
class Class_1_04E767430AD06AF5;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8A7282DF079FF8B3_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xDFD7600)
#define CLASS_1_8A7282DF079FF8B3_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xDFD7610)
#define CLASS_1_8A7282DF079FF8B3_METHOD_1_FE3403D7C8BA978C_OFFSET UNITYSDK_OFFSET(0xDFD7C10)
#define CLASS_1_8A7282DF079FF8B3__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD76D0)
#define CLASS_1_8A7282DF079FF8B3__GET_SHOWDETAILCOMMAND_B__6_0_OFFSET UNITYSDK_OFFSET(0xDFD7D10)

inline static constexpr unsigned int Class_1_8A7282DF079FF8B3_TypeDefinitionIndex = 79433;

class Class_1_8A7282DF079FF8B3 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_04E767430AD06AF5*>* _Partners_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1488* MPFFGNPIDOA; // 0x18
	::Class_0_16E4307DCC419505_397* EENAJHAKPBO; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_04E767430AD06AF5*>* a1, ::Class_0_16E4307DCC419505_1488* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_04E767430AD06AF5*>*, ::Class_0_16E4307DCC419505_1488*))((::PBYTE)hIl2Cpp + CLASS_1_8A7282DF079FF8B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_04E767430AD06AF5*>* get_Partners()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_04E767430AD06AF5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A7282DF079FF8B3_GET_PARTNERS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A7282DF079FF8B3_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void Method_1_FE3403D7C8BA978C(::Class_1_04E767430AD06AF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04E767430AD06AF5*))((::PBYTE)hIl2Cpp + CLASS_1_8A7282DF079FF8B3_METHOD_1_FE3403D7C8BA978C_OFFSET))(this, a1);
	}

	::System::Void _get_ShowDetailCommand_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A7282DF079FF8B3__GET_SHOWDETAILCOMMAND_B__6_0_OFFSET))(this);
	}
};
