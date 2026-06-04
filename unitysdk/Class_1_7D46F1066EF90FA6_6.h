#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_704;
class Class_0_16E4307DCC419505_726;
class Class_1_61097837E1D530F4;

#define CLASS_1_7D46F1066EF90FA6_6_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x13548E50)
#define CLASS_1_7D46F1066EF90FA6_6__CTOR_OFFSET UNITYSDK_OFFSET(0x13548DC0)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_6_TypeDefinitionIndex = 58820;

class Class_1_7D46F1066EF90FA6_6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_704* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_726* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_704* a1, ::Class_0_16E4307DCC419505_726* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_704*, ::Class_0_16E4307DCC419505_726*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_6__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_61097837E1D530F4* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_61097837E1D530F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_6_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}
};
