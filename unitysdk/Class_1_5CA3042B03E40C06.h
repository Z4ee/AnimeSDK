#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_59ACE1D68DDF9B15;
class Class_1_D375C91CCE5D3999;

#define CLASS_1_5CA3042B03E40C06_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0xA936EC0)
#define CLASS_1_5CA3042B03E40C06_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA936E70)
#define CLASS_1_5CA3042B03E40C06__CTOR_OFFSET UNITYSDK_OFFSET(0xA936F10)

inline static constexpr unsigned int Class_1_5CA3042B03E40C06_TypeDefinitionIndex = 43955;

class Class_1_5CA3042B03E40C06 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA3042B03E40C06__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_59ACE1D68DDF9B15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59ACE1D68DDF9B15*))((::PBYTE)hIl2Cpp + CLASS_1_5CA3042B03E40C06_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CDF16CC200D8B52(::Class_1_59ACE1D68DDF9B15* a1, ::Class_1_D375C91CCE5D3999* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59ACE1D68DDF9B15*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_5CA3042B03E40C06_METHOD_1_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}
};
