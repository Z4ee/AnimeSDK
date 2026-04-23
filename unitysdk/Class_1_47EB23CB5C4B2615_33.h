#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_47EB23CB5C4B2615_33_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x95FEA90)
#define CLASS_1_47EB23CB5C4B2615_33_METHOD_1_F670989E2A295B2A_OFFSET UNITYSDK_OFFSET(0x95FEB10)
#define CLASS_1_47EB23CB5C4B2615_33__CTOR_OFFSET UNITYSDK_OFFSET(0x95FEB00)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_33_TypeDefinitionIndex = 67321;

class Class_1_47EB23CB5C4B2615_33 : public ::System::Object
{
public:
	static ::Class_1_47EB23CB5C4B2615_33** StaticGet_Field_1_0()
	{
		return (::Class_1_47EB23CB5C4B2615_33**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47EB23CB5C4B2615_33_TypeDefinitionIndex)->GetStaticField(0x62EB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_33__CTOR_OFFSET))(this);
	}

	static ::Class_1_47EB23CB5C4B2615_33* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_47EB23CB5C4B2615_33*(*)())((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_33_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::RPG::Client::Promises::Promise* Method_1_F670989E2A295B2A()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_33_METHOD_1_F670989E2A295B2A_OFFSET))(this);
	}
};
