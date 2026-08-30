#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1159;
class Class_0_16E4307DCC419505_1168;
class Class_2_60E1BEC55B96577C;
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_96755BD61CBCF580_METHOD_1_59A2814208999FDC_OFFSET UNITYSDK_OFFSET(0x16584560)
#define CLASS_1_96755BD61CBCF580__CTOR_OFFSET UNITYSDK_OFFSET(0x16584550)

inline static constexpr unsigned int Class_1_96755BD61CBCF580_TypeDefinitionIndex = 73054;

class Class_1_96755BD61CBCF580 : public ::System::Object
{
public:
	::Class_2_60E1BEC55B96577C* FNPCKHIOBBK; // 0x10
	::System::Reflection::MethodInfo* KFGCBHOEIPE; // 0x18
	::Class_0_16E4307DCC419505_1168* FNDHDEOILCK; // 0x20

	::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::Class_2_60E1BEC55B96577C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Class_2_60E1BEC55B96577C*))((::PBYTE)hIl2Cpp + CLASS_1_96755BD61CBCF580__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1159* Method_1_59A2814208999FDC(::System::Object* a1)
	{
		return ((::Class_0_16E4307DCC419505_1159*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_96755BD61CBCF580_METHOD_1_59A2814208999FDC_OFFSET))(this, a1);
	}
};
