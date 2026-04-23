#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_0_16E4307DCC419505_403;
class Class_1_5D7E29FB1A5878DE;
class Class_2_4D17F746B52D1E89;
class Class_4_FB95868337ECC493;
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_526C889438DA4925_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DDC010)
#define CLASS_3_526C889438DA4925_METHOD_3_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11DDC150)
#define CLASS_3_526C889438DA4925_METHOD_3_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x11DDBEE0)
#define CLASS_3_526C889438DA4925_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DDBD80)
#define CLASS_3_526C889438DA4925_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DDC0F0)
#define CLASS_3_526C889438DA4925_TICK_OFFSET UNITYSDK_OFFSET(0x11DDC070)
#define CLASS_3_526C889438DA4925__CTOR_OFFSET UNITYSDK_OFFSET(0x11DDBD50)
#define CLASS_3_526C889438DA4925___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DDC1E0)
#define CLASS_3_526C889438DA4925___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11DDC240)

inline static constexpr unsigned int Class_3_526C889438DA4925_TypeDefinitionIndex = 49498;

class Class_3_526C889438DA4925 : public ::RPG::GameCore::ST_RtTask_1<::Class_4_FB95868337ECC493*>
{
public:
	::Class_1_5D7E29FB1A5878DE* Field_3_1; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_403*>* Field_3_3; // 0x30
	::Class_2_4D17F746B52D1E89* Field_3_0; // 0x38
	::System::Boolean Field_3_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_FB95868337ECC493* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_FB95868337ECC493*))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_403* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_METHOD_3_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_3_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_METHOD_3_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
