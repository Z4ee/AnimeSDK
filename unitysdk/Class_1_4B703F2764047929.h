#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B703F2764047929_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18970990)
#define CLASS_1_4B703F2764047929_METHOD_1_10341F42BDA3AF44_OFFSET UNITYSDK_OFFSET(0x18971410)
#define CLASS_1_4B703F2764047929_METHOD_1_17BEA87F094FB453_OFFSET UNITYSDK_OFFSET(0x18971060)
#define CLASS_1_4B703F2764047929_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18970930)
#define CLASS_1_4B703F2764047929_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x18971220)
#define CLASS_1_4B703F2764047929_METHOD_1_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x189709E0)
#define CLASS_1_4B703F2764047929_METHOD_1_BD952EFECC7245CF_OFFSET UNITYSDK_OFFSET(0x18971120)
#define CLASS_1_4B703F2764047929_METHOD_1_C650F1D784C21D72_OFFSET UNITYSDK_OFFSET(0x18970CD0)
#define CLASS_1_4B703F2764047929_METHOD_1_D0D40EE9B0F24994_OFFSET UNITYSDK_OFFSET(0x18970E80)
#define CLASS_1_4B703F2764047929_METHOD_1_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0x189712A0)
#define CLASS_1_4B703F2764047929_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x18970BB0)
#define CLASS_1_4B703F2764047929_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x18971010)
#define CLASS_1_4B703F2764047929_TICK_OFFSET UNITYSDK_OFFSET(0x18970B40)
#define CLASS_1_4B703F2764047929__CTOR_OFFSET UNITYSDK_OFFSET(0x189708E0)

inline static constexpr unsigned int Class_1_4B703F2764047929_TypeDefinitionIndex = 60813;

class Class_1_4B703F2764047929 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPGTools::MonoTimelineEffect*>* APPIAANONPF; // 0x10
	::RPG::Client::PerformanceManager* JCLOFEOGKIL; // 0x18
	::System::Boolean MCAPIAKDMAA; // 0x20
	::System::Boolean AHHJFBAHGHK; // 0x21
	::System::Single OKJPMCGIIFL; // 0x24

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_C650F1D784C21D72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_C650F1D784C21D72_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0D40EE9B0F24994(::RPGTools::MonoTimelineEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_D0D40EE9B0F24994_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BEA87F094FB453(::RPGTools::MonoTimelineEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_17BEA87F094FB453_OFFSET))(this, a1);
	}

	::RPGTools::MonoTimelineEffect* Method_1_BD952EFECC7245CF(::System::String* a1)
	{
		return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_BD952EFECC7245CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B1F2653496E5C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_9B1F2653496E5C47_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_10341F42BDA3AF44(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_10341F42BDA3AF44_OFFSET))(this, a1);
	}

	::System::Void Method_1_D632BCCC272D40EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_D632BCCC272D40EA_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B703F2764047929_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
