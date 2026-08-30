#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitInfiniteWaveRefresh; }

#define CLASS_2_93B996A97C6A3FCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198FB650)
#define CLASS_2_93B996A97C6A3FCE_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x198FB6F0)
#define CLASS_2_93B996A97C6A3FCE_METHOD_2_72D9D09A23E0B593_OFFSET UNITYSDK_OFFSET(0x198FBAD0)
#define CLASS_2_93B996A97C6A3FCE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x198FBA50)
#define CLASS_2_93B996A97C6A3FCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198FB960)
#define CLASS_2_93B996A97C6A3FCE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198FBBD0)
#define CLASS_2_93B996A97C6A3FCE_TICK_OFFSET UNITYSDK_OFFSET(0x198FB690)
#define CLASS_2_93B996A97C6A3FCE__CTOR_OFFSET UNITYSDK_OFFSET(0x198FB640)

inline static constexpr unsigned int Class_2_93B996A97C6A3FCE_TypeDefinitionIndex = 55322;

class Class_2_93B996A97C6A3FCE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitInfiniteWaveRefresh* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitInfiniteWaveRefresh* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitInfiniteWaveRefresh*))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_72D9D09A23E0B593()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_METHOD_2_72D9D09A23E0B593_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
