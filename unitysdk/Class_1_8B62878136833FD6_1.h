#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_8E5D4274ED1F9117;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B62878136833FD6_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E33CE0)
#define CLASS_1_8B62878136833FD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E33C70)

inline static constexpr unsigned int Class_1_8B62878136833FD6_1_TypeDefinitionIndex = 76843;

class Class_1_8B62878136833FD6_1 : public ::System::Object
{
public:
	::Class_3_8E5D4274ED1F9117* PDENFEFCAGN; // 0x10
	::Class_1_3B1EA953A4067E26_2* FKINCGODJEP; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* NFCHMOBJPCI; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_8E5D4274ED1F9117* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_8E5D4274ED1F9117*))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_1_EXECUTE_OFFSET))(this);
	}
};
