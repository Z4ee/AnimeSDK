#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_4_A31285FB5035808B;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_89A4AC495EE4009A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A8D6B0)
#define CLASS_3_89A4AC495EE4009A_METHOD_3_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x12A8D5B0)
#define CLASS_3_89A4AC495EE4009A_METHOD_3_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x12A8D740)
#define CLASS_3_89A4AC495EE4009A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A8D560)
#define CLASS_3_89A4AC495EE4009A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A8D6F0)
#define CLASS_3_89A4AC495EE4009A_TICK_OFFSET UNITYSDK_OFFSET(0x12A8D7D0)
#define CLASS_3_89A4AC495EE4009A__CTOR_OFFSET UNITYSDK_OFFSET(0x12A8D530)
#define CLASS_3_89A4AC495EE4009A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A8D830)
#define CLASS_3_89A4AC495EE4009A___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12A8D870)

inline static constexpr unsigned int Class_3_89A4AC495EE4009A_TypeDefinitionIndex = 48211;

class Class_3_89A4AC495EE4009A : public ::RPG::GameCore::ST_Task_1<::Class_4_A31285FB5035808B*>
{
public:
	::System::String* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_A31285FB5035808B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_A31285FB5035808B*))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_METHOD_3_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_3_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A_METHOD_3_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_89A4AC495EE4009A___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
