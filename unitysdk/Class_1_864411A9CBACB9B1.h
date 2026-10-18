#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF1F5D2A77378DD;
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }

#define CLASS_1_864411A9CBACB9B1_METHOD_1_8A7A089DF592546C_OFFSET UNITYSDK_OFFSET(0x1C51F720)
#define CLASS_1_864411A9CBACB9B1_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1C51F6D0)
#define CLASS_1_864411A9CBACB9B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51F980)
#define CLASS_1_864411A9CBACB9B1__GET_CURRENTPERCENT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C51F990)
#define CLASS_1_864411A9CBACB9B1__GET_CURRENTPERCENT_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C51FA00)
#define CLASS_1_864411A9CBACB9B1__GET_CURRENTPERCENT_B__5_2_OFFSET UNITYSDK_OFFSET(0x1C51FA70)

inline static constexpr unsigned int Class_1_864411A9CBACB9B1_TypeDefinitionIndex = 41837;

class Class_1_864411A9CBACB9B1 : public ::System::Object
{
public:
	::Class_1_7FF1F5D2A77378DD* MJMABJODLIO; // 0x10
	::R3::ReadOnlyReactiveProperty_1<::System::Int32>* ACOBAMHHFMI; // 0x18

	::System::Void _ctor(::Class_1_7FF1F5D2A77378DD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF1F5D2A77378DD*))((::PBYTE)hIl2Cpp + CLASS_1_864411A9CBACB9B1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_864411A9CBACB9B1_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Int32>* Method_1_8A7A089DF592546C()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_864411A9CBACB9B1_METHOD_1_8A7A089DF592546C_OFFSET))(this);
	}

	::System::Void _get_CurrentPercent_b__5_0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_864411A9CBACB9B1__GET_CURRENTPERCENT_B__5_0_OFFSET))(this, a1);
	}

	::System::Void _get_CurrentPercent_b__5_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_864411A9CBACB9B1__GET_CURRENTPERCENT_B__5_1_OFFSET))(this, a1);
	}

	::System::Int32 _get_CurrentPercent_b__5_2(::R3::Unit a1)
	{
		return ((::System::Int32(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_1_864411A9CBACB9B1__GET_CURRENTPERCENT_B__5_2_OFFSET))(this, a1);
	}
};
