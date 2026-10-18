#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_2_68CB91321C3E76A7;
class Class_3_49BF32227D4B78A8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B62878136833FD6_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBD92760)
#define CLASS_1_8B62878136833FD6_METHOD_1_8EC467BB3B2A7AF2_OFFSET UNITYSDK_OFFSET(0xBD927A0)
#define CLASS_1_8B62878136833FD6_METHOD_1_B94B952E2B4ACDC7_OFFSET UNITYSDK_OFFSET(0xBD929D0)
#define CLASS_1_8B62878136833FD6__CTOR_OFFSET UNITYSDK_OFFSET(0xBD926F0)

inline static constexpr unsigned int Class_1_8B62878136833FD6_TypeDefinitionIndex = 77314;

class Class_1_8B62878136833FD6 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_2* FKINCGODJEP; // 0x10
	::Class_3_49BF32227D4B78A8* PDENFEFCAGN; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* EGGDAAEJAPI; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_49BF32227D4B78A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_49BF32227D4B78A8*))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_8EC467BB3B2A7AF2(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_METHOD_1_8EC467BB3B2A7AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B94B952E2B4ACDC7(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_METHOD_1_B94B952E2B4ACDC7_OFFSET))(this, a1);
	}
};
