#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_481;

#define CLASS_1_9D5D9F9EE953B8AE_COMPARE_OFFSET UNITYSDK_OFFSET(0x11FB2C50)
#define CLASS_1_9D5D9F9EE953B8AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FB2F80)
#define CLASS_1_9D5D9F9EE953B8AE__CTOR_OFFSET UNITYSDK_OFFSET(0x11FB2F70)

inline static constexpr unsigned int Class_1_9D5D9F9EE953B8AE_TypeDefinitionIndex = 74001;

class Class_1_9D5D9F9EE953B8AE : public ::System::Object
{
public:
	static ::Class_1_9D5D9F9EE953B8AE** StaticGet_Field_1_0()
	{
		return (::Class_1_9D5D9F9EE953B8AE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D5D9F9EE953B8AE_TypeDefinitionIndex)->GetStaticField(0x414A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5D9F9EE953B8AE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D5D9F9EE953B8AE__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_0_16E4307DCC419505_481* a1, ::Class_0_16E4307DCC419505_481* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_481*, ::Class_0_16E4307DCC419505_481*))((::PBYTE)hIl2Cpp + CLASS_1_9D5D9F9EE953B8AE_COMPARE_OFFSET))(this, a1, a2);
	}
};
