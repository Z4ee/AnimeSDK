#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_751;

#define CLASS_1_30A64821ACA8AB86_EQUALS_OFFSET UNITYSDK_OFFSET(0x1576FBA0)
#define CLASS_1_30A64821ACA8AB86_METHOD_1_E3FE109D06BE7F76_OFFSET UNITYSDK_OFFSET(0x1576FBF0)
#define CLASS_1_30A64821ACA8AB86_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1576FC10)
#define CLASS_1_30A64821ACA8AB86__CTOR_OFFSET UNITYSDK_OFFSET(0x1576FB90)

inline static constexpr unsigned int Class_1_30A64821ACA8AB86_TypeDefinitionIndex = 59761;

class Class_1_30A64821ACA8AB86 : public ::System::Object
{
public:
	::RPG::MVector3 MIFKHBDOGLN; // 0x10

	::System::Void _ctor(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_30A64821ACA8AB86__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_751* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + CLASS_1_30A64821ACA8AB86_EQUALS_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_1_E3FE109D06BE7F76()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30A64821ACA8AB86_METHOD_1_E3FE109D06BE7F76_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30A64821ACA8AB86_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
