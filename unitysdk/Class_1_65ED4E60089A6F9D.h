#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_216;
class Class_0_16E4307DCC419505_217;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65ED4E60089A6F9D_METHOD_1_4879D281E0A43E73_OFFSET UNITYSDK_OFFSET(0x14126270)
#define CLASS_1_65ED4E60089A6F9D_METHOD_1_B6923417C218B5F9_OFFSET UNITYSDK_OFFSET(0x14126160)
#define CLASS_1_65ED4E60089A6F9D__CTOR_OFFSET UNITYSDK_OFFSET(0x141261F0)

inline static constexpr unsigned int Class_1_65ED4E60089A6F9D_TypeDefinitionIndex = 56258;

class Class_1_65ED4E60089A6F9D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_217*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65ED4E60089A6F9D__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_216* Method_1_B6923417C218B5F9(::Class_0_16E4307DCC419505_217*& a1)
	{
		return ((::Class_0_16E4307DCC419505_216*(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&))((::PBYTE)hIl2Cpp + CLASS_1_65ED4E60089A6F9D_METHOD_1_B6923417C218B5F9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_216* Method_1_4879D281E0A43E73(::Class_0_16E4307DCC419505_217*& a1)
	{
		return ((::Class_0_16E4307DCC419505_216*(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&))((::PBYTE)hIl2Cpp + CLASS_1_65ED4E60089A6F9D_METHOD_1_4879D281E0A43E73_OFFSET))(this, a1);
	}
};
