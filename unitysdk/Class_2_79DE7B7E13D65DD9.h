#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_611;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_79DE7B7E13D65DD9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC75030)
#define CLASS_2_79DE7B7E13D65DD9_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xBC74FA0)
#define CLASS_2_79DE7B7E13D65DD9_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xBC75580)
#define CLASS_2_79DE7B7E13D65DD9_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xBC75080)
#define CLASS_2_79DE7B7E13D65DD9_TICK_OFFSET UNITYSDK_OFFSET(0xBC75310)
#define CLASS_2_79DE7B7E13D65DD9__CTOR_OFFSET UNITYSDK_OFFSET(0xBC75660)

inline static constexpr unsigned int Class_2_79DE7B7E13D65DD9_TypeDefinitionIndex = 57394;

class Class_2_79DE7B7E13D65DD9 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_611*>* HHLJHPGPBPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79DE7B7E13D65DD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79DE7B7E13D65DD9_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79DE7B7E13D65DD9_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_79DE7B7E13D65DD9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_611* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_611*))((::PBYTE)hIl2Cpp + CLASS_2_79DE7B7E13D65DD9_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79DE7B7E13D65DD9_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}
};
