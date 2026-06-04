#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_26;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_12_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14150E80)
#define CLASS_2_71206B21D0A90B92_12_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x141510D0)
#define CLASS_2_71206B21D0A90B92_12_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14150EC0)
#define CLASS_2_71206B21D0A90B92_12_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14151020)
#define CLASS_2_71206B21D0A90B92_12_TICK_OFFSET UNITYSDK_OFFSET(0x14151070)
#define CLASS_2_71206B21D0A90B92_12__CTOR_OFFSET UNITYSDK_OFFSET(0x14150E70)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_12_TypeDefinitionIndex = 52644;

class Class_2_71206B21D0A90B92_12 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_06CA57680E115A32_26* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_26*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_12_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
