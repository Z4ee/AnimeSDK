#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5A5C70F7A3C39C00;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_529A7BD4C7EBDC36___C__CALCULATESTREAMINGTASK_B__17_0_OFFSET UNITYSDK_OFFSET(0x18DED010)
#define CLASS_3_529A7BD4C7EBDC36___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DECFD0)
#define CLASS_3_529A7BD4C7EBDC36___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DED000)
#define CLASS_3_529A7BD4C7EBDC36___C__SOLVECALCULATELODTASK_B__19_0_OFFSET UNITYSDK_OFFSET(0x18DED060)

inline static constexpr unsigned int Class_3_529A7BD4C7EBDC36___c_TypeDefinitionIndex = 73680;

class Class_3_529A7BD4C7EBDC36___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_529A7BD4C7EBDC36___c_TypeDefinitionIndex)->GetStaticField(0x61460);
	}
	static ::Class_3_529A7BD4C7EBDC36___c** StaticGet___9()
	{
		return (::Class_3_529A7BD4C7EBDC36___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_529A7BD4C7EBDC36___c_TypeDefinitionIndex)->GetStaticField(0x61468);
	}
	static ::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_2_5A5C70F7A3C39C00*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_529A7BD4C7EBDC36___c_TypeDefinitionIndex)->GetStaticField(0x61470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_529A7BD4C7EBDC36___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_529A7BD4C7EBDC36___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CalculateStreamingTask_b__17_0(::Class_2_5A5C70F7A3C39C00* a1, ::Class_2_5A5C70F7A3C39C00* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::Class_2_5A5C70F7A3C39C00*))((::PBYTE)hIl2Cpp + CLASS_3_529A7BD4C7EBDC36___C__CALCULATESTREAMINGTASK_B__17_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 _SolveCalculateLodTask_b__19_0(::Class_2_5A5C70F7A3C39C00* a1, ::Class_2_5A5C70F7A3C39C00* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_5A5C70F7A3C39C00*, ::Class_2_5A5C70F7A3C39C00*))((::PBYTE)hIl2Cpp + CLASS_3_529A7BD4C7EBDC36___C__SOLVECALCULATELODTASK_B__19_0_OFFSET))(this, a1, a2);
	}
};
