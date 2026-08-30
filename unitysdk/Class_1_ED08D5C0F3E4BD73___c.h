#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_660;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_ED08D5C0F3E4BD73___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFC2CC0)
#define CLASS_1_ED08D5C0F3E4BD73___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC2D00)
#define CLASS_1_ED08D5C0F3E4BD73___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET UNITYSDK_OFFSET(0xBFC2D10)

inline static constexpr unsigned int Class_1_ED08D5C0F3E4BD73___c_TypeDefinitionIndex = 59960;

class Class_1_ED08D5C0F3E4BD73___c : public ::System::Object
{
public:
	static ::Class_1_ED08D5C0F3E4BD73___c** StaticGet___9()
	{
		return (::Class_1_ED08D5C0F3E4BD73___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED08D5C0F3E4BD73___c_TypeDefinitionIndex)->GetStaticField(0x6A080);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_660*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_660*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED08D5C0F3E4BD73___c_TypeDefinitionIndex)->GetStaticField(0x6A088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SkipVirtualTimetableToNextSubwayArrived_b__25_0(::Class_0_16E4307DCC419505_660* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_660*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET))(this, a1);
	}
};
