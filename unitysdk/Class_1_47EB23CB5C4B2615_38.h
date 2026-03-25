#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_47EB23CB5C4B2615_38_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xE465DD0)
#define CLASS_1_47EB23CB5C4B2615_38_METHOD_1_F670989E2A295B2A_OFFSET UNITYSDK_OFFSET(0xE46E960)
#define CLASS_1_47EB23CB5C4B2615_38__CTOR_OFFSET UNITYSDK_OFFSET(0xE46E950)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_38_TypeDefinitionIndex = 59923;

class Class_1_47EB23CB5C4B2615_38 : public ::System::Object
{
public:
	static ::Class_1_47EB23CB5C4B2615_38** StaticGet_Field_1_0()
	{
		return (::Class_1_47EB23CB5C4B2615_38**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47EB23CB5C4B2615_38_TypeDefinitionIndex)->GetStaticField(0x47E40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_38__CTOR_OFFSET))(this);
	}

	static ::Class_1_47EB23CB5C4B2615_38* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_47EB23CB5C4B2615_38*(*)())((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_38_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::RPG::Client::Promises::Promise* Method_1_F670989E2A295B2A()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_38_METHOD_1_F670989E2A295B2A_OFFSET))(this);
	}
};
