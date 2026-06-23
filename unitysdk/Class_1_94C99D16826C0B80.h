#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_56;
class Class_1_D375C91CCE5D3999;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_A23BF0D23D446248;

#define CLASS_1_94C99D16826C0B80_METHOD_1_095CC99FF0D58B0C_OFFSET UNITYSDK_OFFSET(0x1519A1F0)
#define CLASS_1_94C99D16826C0B80_METHOD_1_434D96AA91738361_1_OFFSET UNITYSDK_OFFSET(0x1519A330)
#define CLASS_1_94C99D16826C0B80_METHOD_1_434D96AA91738361_OFFSET UNITYSDK_OFFSET(0x15199C30)
#define CLASS_1_94C99D16826C0B80_METHOD_1_492494FED1C414CA_OFFSET UNITYSDK_OFFSET(0x15199CC0)
#define CLASS_1_94C99D16826C0B80_METHOD_1_C9F58367497BE838_OFFSET UNITYSDK_OFFSET(0x15199FD0)
#define CLASS_1_94C99D16826C0B80__CTOR_OFFSET UNITYSDK_OFFSET(0x15199B10)

inline static constexpr unsigned int Class_1_94C99D16826C0B80_TypeDefinitionIndex = 81786;

class Class_1_94C99D16826C0B80 : public ::System::Object
{
public:
	::Class_1_D375C91CCE5D3999* Field_1_3; // 0x10
	::Class_1_43BD383C98B4C0C5_56* Field_1_7; // 0x18
	::Class_2_A23BF0D23D446248<::Class_1_D375C91CCE5D3999*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D375C91CCE5D3999*>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x30
	::Class_2_A23BF0D23D446248<::Class_1_D375C91CCE5D3999*>* Field_1_5; // 0x38
	::Class_2_A23BF0D23D446248<::Class_1_D375C91CCE5D3999*>* Field_1_6; // 0x40
	::Class_1_D375C91CCE5D3999* Field_1_2; // 0x48
	::System::Int32 Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94C99D16826C0B80__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_434D96AA91738361(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_94C99D16826C0B80_METHOD_1_434D96AA91738361_OFFSET))(this, a1);
	}

	::System::Void Method_1_492494FED1C414CA(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_94C99D16826C0B80_METHOD_1_492494FED1C414CA_OFFSET))(this, a1);
	}

	::Class_1_D375C91CCE5D3999* Method_1_C9F58367497BE838(::Enum_3_7AEF4D15E4700EEA a1)
	{
		return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID, ::Enum_3_7AEF4D15E4700EEA))((::PBYTE)hIl2Cpp + CLASS_1_94C99D16826C0B80_METHOD_1_C9F58367497BE838_OFFSET))(this, a1);
	}

	::System::Void Method_1_095CC99FF0D58B0C(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_94C99D16826C0B80_METHOD_1_095CC99FF0D58B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_434D96AA91738361_1(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_94C99D16826C0B80_METHOD_1_434D96AA91738361_1_OFFSET))(this, a1);
	}
};
