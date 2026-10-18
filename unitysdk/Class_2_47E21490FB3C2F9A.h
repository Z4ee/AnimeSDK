#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

class Class_0_16E4307DCC419505_400;
class Class_1_5F1B5D6380BD40EB;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class TabView; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_47E21490FB3C2F9A_DISPOSECORE_OFFSET UNITYSDK_OFFSET(0xB76E7B0)
#define CLASS_2_47E21490FB3C2F9A_METHOD_2_8A63CC6F886194AA_OFFSET UNITYSDK_OFFSET(0xB76E600)
#define CLASS_2_47E21490FB3C2F9A_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB76E0D0)
#define CLASS_2_47E21490FB3C2F9A_ONCOMPLETEDCORE_OFFSET UNITYSDK_OFFSET(0xB76E5B0)
#define CLASS_2_47E21490FB3C2F9A_ONERRORRESUMECORE_OFFSET UNITYSDK_OFFSET(0xB76E3E0)
#define CLASS_2_47E21490FB3C2F9A_ONNEXTCORE_OFFSET UNITYSDK_OFFSET(0xB76E1A0)
#define CLASS_2_47E21490FB3C2F9A__CTOR_OFFSET UNITYSDK_OFFSET(0xB76E040)

inline static constexpr unsigned int Class_2_47E21490FB3C2F9A_TypeDefinitionIndex = 49815;

class Class_2_47E21490FB3C2F9A : public ::R3::Observer_1<::System::Int32>
{
public:
	::R3::ReactiveProperty_1<::System::Int32>* AGFAPPGGKMA; // 0x20
	::RPG::Client::TabView* PEOHNLJEFLJ; // 0x28
	::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* CDLBHDFLHJA; // 0x30
	::Class_0_16E4307DCC419505_400* JKCNFDEAMDJ; // 0x38
	::System::Boolean JGBDJCKDILB; // 0x40
	::System::Boolean NIPEOCFHONM; // 0x41

	::System::Void _ctor(::RPG::Client::TabView* a1, ::R3::ReactiveProperty_1<::System::Int32>* a2, ::Class_0_16E4307DCC419505_400* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*, ::R3::ReactiveProperty_1<::System::Int32>*, ::Class_0_16E4307DCC419505_400*))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void OnNextCore(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A_ONNEXTCORE_OFFSET))(this, a1);
	}

	::System::Void OnErrorResumeCore(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A_ONERRORRESUMECORE_OFFSET))(this, a1);
	}

	::System::Void OnCompletedCore(::R3::Result a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::Result))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A_ONCOMPLETEDCORE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A63CC6F886194AA(::Class_1_5F1B5D6380BD40EB* a1, ::Class_1_5F1B5D6380BD40EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A_METHOD_2_8A63CC6F886194AA_OFFSET))(this, a1, a2);
	}

	::System::Void DisposeCore()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47E21490FB3C2F9A_DISPOSECORE_OFFSET))(this);
	}
};
