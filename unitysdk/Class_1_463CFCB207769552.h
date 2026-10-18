#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_149;
class Class_1_1C6113FB5D261D7F;
class Class_1_1C6113FB5D261D7F_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_463CFCB207769552_METHOD_1_47A7E0657F352B0E_OFFSET UNITYSDK_OFFSET(0x1C522690)
#define CLASS_1_463CFCB207769552_METHOD_1_71C766C5D831228A_OFFSET UNITYSDK_OFFSET(0x1C5227F0)
#define CLASS_1_463CFCB207769552__CTOR_OFFSET UNITYSDK_OFFSET(0x1C522680)

inline static constexpr unsigned int Class_1_463CFCB207769552_TypeDefinitionIndex = 41871;

class Class_1_463CFCB207769552 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_149* FPNMIGDJBIE; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_149* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_149*))((::PBYTE)hIl2Cpp + CLASS_1_463CFCB207769552__CTOR_OFFSET))(this, a1);
	}

	::Class_1_1C6113FB5D261D7F* Method_1_47A7E0657F352B0E(::System::UInt32 a1)
	{
		return ((::Class_1_1C6113FB5D261D7F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_463CFCB207769552_METHOD_1_47A7E0657F352B0E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1C6113FB5D261D7F_1*>* Method_1_71C766C5D831228A(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1C6113FB5D261D7F_1*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_463CFCB207769552_METHOD_1_71C766C5D831228A_OFFSET))(this, a1);
	}
};
