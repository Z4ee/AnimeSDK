#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitInfiniteWaveRefresh; }

#define CLASS_2_93B996A97C6A3FCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1257F7A0)
#define CLASS_2_93B996A97C6A3FCE_METHOD_2_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x1257FC20)
#define CLASS_2_93B996A97C6A3FCE_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1257F840)
#define CLASS_2_93B996A97C6A3FCE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1257FBA0)
#define CLASS_2_93B996A97C6A3FCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1257FAB0)
#define CLASS_2_93B996A97C6A3FCE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1257FCC0)
#define CLASS_2_93B996A97C6A3FCE_TICK_OFFSET UNITYSDK_OFFSET(0x1257F7E0)
#define CLASS_2_93B996A97C6A3FCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1257F790)

inline static constexpr unsigned int Class_2_93B996A97C6A3FCE_TypeDefinitionIndex = 50813;

class Class_2_93B996A97C6A3FCE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::WaitInfiniteWaveRefresh* Field_2_0; // 0x20

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

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_METHOD_2_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93B996A97C6A3FCE_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
