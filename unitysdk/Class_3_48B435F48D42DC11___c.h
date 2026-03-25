#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5A5C70F7A3C39C00;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_48B435F48D42DC11___C__CALCULATESTREAMINGTASK_B__17_0_OFFSET UNITYSDK_OFFSET(0x105D79E0)
#define CLASS_3_48B435F48D42DC11___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D79A0)
#define CLASS_3_48B435F48D42DC11___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105D79D0)
#define CLASS_3_48B435F48D42DC11___C__SOLVECALCULATELODTASK_B__19_0_OFFSET UNITYSDK_OFFSET(0x105D7A30)

inline static constexpr unsigned int Class_3_48B435F48D42DC11___c_TypeDefinitionIndex = 60490;

class Class_3_48B435F48D42DC11___c : public ::System::Object
{
public:
	static ::Class_3_48B435F48D42DC11___c** StaticGet___9()
	{
		return (::Class_3_48B435F48D42DC11___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_48B435F48D42DC11___c_TypeDefinitionIndex)->GetStaticField(0x1E540);
	}
	static ::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_48B435F48D42DC11___c_TypeDefinitionIndex)->GetStaticField(0x1E548);
	}
	static ::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_48B435F48D42DC11___c_TypeDefinitionIndex)->GetStaticField(0x1E550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CalculateStreamingTask_b__17_0(::Class_2_5A5C70F7A3C39C00* x, ::Class_2_5A5C70F7A3C39C00* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::Class_2_5A5C70F7A3C39C00*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11___C__CALCULATESTREAMINGTASK_B__17_0_OFFSET))(this, x, y);
	}

	::System::Int32 _SolveCalculateLodTask_b__19_0(::Class_2_5A5C70F7A3C39C00* x, ::Class_2_5A5C70F7A3C39C00* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::Class_2_5A5C70F7A3C39C00*))((::PBYTE)hIl2Cpp + CLASS_3_48B435F48D42DC11___C__SOLVECALCULATELODTASK_B__19_0_OFFSET))(this, x, y);
	}
};
