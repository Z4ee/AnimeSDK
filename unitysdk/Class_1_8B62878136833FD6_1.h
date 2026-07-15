#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_E87E81F3A9C4E052;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B62878136833FD6_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14FE9F10)
#define CLASS_1_8B62878136833FD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE9EA0)

inline static constexpr unsigned int Class_1_8B62878136833FD6_1_TypeDefinitionIndex = 73364;

class Class_1_8B62878136833FD6_1 : public ::System::Object
{
public:
	::Class_3_E87E81F3A9C4E052* Field_1_0; // 0x10
	::Class_1_3B1EA953A4067E26_2* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_E87E81F3A9C4E052* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_E87E81F3A9C4E052*))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B62878136833FD6_1_EXECUTE_OFFSET))(this);
	}
};
