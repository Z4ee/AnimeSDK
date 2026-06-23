#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_462;

#define CLASS_1_461C7000AB151742_COMPARE_OFFSET UNITYSDK_OFFSET(0x13ABFBD0)
#define CLASS_1_461C7000AB151742__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ABFEF0)
#define CLASS_1_461C7000AB151742__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABFEE0)

inline static constexpr unsigned int Class_1_461C7000AB151742_TypeDefinitionIndex = 74738;

class Class_1_461C7000AB151742 : public ::System::Object
{
public:
	static ::Class_1_461C7000AB151742** StaticGet_Field_1_0()
	{
		return (::Class_1_461C7000AB151742**)Il2CppClass::FromTypeDefinitionIndex(Class_1_461C7000AB151742_TypeDefinitionIndex)->GetStaticField(0x36F80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_461C7000AB151742__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_461C7000AB151742__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_0_16E4307DCC419505_462* a1, ::Class_0_16E4307DCC419505_462* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_462*, ::Class_0_16E4307DCC419505_462*))((::PBYTE)hIl2Cpp + CLASS_1_461C7000AB151742_COMPARE_OFFSET))(this, a1, a2);
	}
};
