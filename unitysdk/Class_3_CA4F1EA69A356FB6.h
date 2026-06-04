#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_5BA092068B728F94;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_CA4F1EA69A356FB6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACBA050)
#define CLASS_3_CA4F1EA69A356FB6_METHOD_3_06DE1CAC2311E16A_OFFSET UNITYSDK_OFFSET(0xACBA590)
#define CLASS_3_CA4F1EA69A356FB6_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xACBA6B0)
#define CLASS_3_CA4F1EA69A356FB6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACBA250)
#define CLASS_3_CA4F1EA69A356FB6__CTOR_OFFSET UNITYSDK_OFFSET(0xACB9DD0)
#define CLASS_3_CA4F1EA69A356FB6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACBA700)

inline static constexpr unsigned int Class_3_CA4F1EA69A356FB6_TypeDefinitionIndex = 49130;

class Class_3_CA4F1EA69A356FB6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5BA092068B728F94*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_07C3C4D2990C49EE*>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5BA092068B728F94* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5BA092068B728F94*))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::UInt32 Method_3_06DE1CAC2311E16A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_METHOD_3_06DE1CAC2311E16A_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
