#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B703F2764047929_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AA6BE0)
#define CLASS_1_4B703F2764047929_METHOD_1_10341F42BDA3AF44_OFFSET UNITYSDK_OFFSET(0x16AA7660)
#define CLASS_1_4B703F2764047929_METHOD_1_17BEA87F094FB453_OFFSET UNITYSDK_OFFSET(0x16AA72B0)
#define CLASS_1_4B703F2764047929_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16AA6B80)
#define CLASS_1_4B703F2764047929_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16AA7470)
#define CLASS_1_4B703F2764047929_METHOD_1_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x16AA6C30)
#define CLASS_1_4B703F2764047929_METHOD_1_BD952EFECC7245CF_OFFSET UNITYSDK_OFFSET(0x16AA7370)
#define CLASS_1_4B703F2764047929_METHOD_1_C650F1D784C21D72_OFFSET UNITYSDK_OFFSET(0x16AA6F20)
#define CLASS_1_4B703F2764047929_METHOD_1_D0D40EE9B0F24994_OFFSET UNITYSDK_OFFSET(0x16AA70D0)
#define CLASS_1_4B703F2764047929_METHOD_1_D632BCCC272D40EA_OFFSET UNITYSDK_OFFSET(0x16AA74F0)
#define CLASS_1_4B703F2764047929_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x16AA6E00)
#define CLASS_1_4B703F2764047929_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16AA7260)
#define CLASS_1_4B703F2764047929_TICK_OFFSET UNITYSDK_OFFSET(0x16AA6D90)
#define CLASS_1_4B703F2764047929__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA6B30)

inline static constexpr unsigned int Class_1_4B703F2764047929_TypeDefinitionIndex = 57992;

class Class_1_4B703F2764047929 : public ::System::Object
{
public:
	::RPG::Client::PerformanceManager* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPGTools::MonoTimelineEffect*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Single Field_1_4; // 0x24

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
