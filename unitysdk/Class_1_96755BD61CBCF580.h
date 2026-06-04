#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1057;
class Class_0_16E4307DCC419505_1066;
class Class_2_60E1BEC55B96577C;
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_96755BD61CBCF580_METHOD_1_59A2814208999FDC_OFFSET UNITYSDK_OFFSET(0xB9E4FD0)
#define CLASS_1_96755BD61CBCF580__CTOR_OFFSET UNITYSDK_OFFSET(0xB9E4FC0)

inline static constexpr unsigned int Class_1_96755BD61CBCF580_TypeDefinitionIndex = 68307;

class Class_1_96755BD61CBCF580 : public ::System::Object
{
public:
	::Class_2_60E1BEC55B96577C* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1066* Field_1_1; // 0x18
	::System::Reflection::MethodInfo* Field_1_2; // 0x20

	::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::Class_2_60E1BEC55B96577C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Class_2_60E1BEC55B96577C*))((::PBYTE)hIl2Cpp + CLASS_1_96755BD61CBCF580__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1057* Method_1_59A2814208999FDC(::System::Object* a1)
	{
		return ((::Class_0_16E4307DCC419505_1057*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_96755BD61CBCF580_METHOD_1_59A2814208999FDC_OFFSET))(this, a1);
	}
};
