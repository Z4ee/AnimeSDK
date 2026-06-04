#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC66EE0)
#define CLASS_2_71206B21D0A90B92_9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC67130)
#define CLASS_2_71206B21D0A90B92_9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC66FB0)
#define CLASS_2_71206B21D0A90B92_9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC66F60)
#define CLASS_2_71206B21D0A90B92_9_TICK_OFFSET UNITYSDK_OFFSET(0xAC670D0)
#define CLASS_2_71206B21D0A90B92_9__CTOR_OFFSET UNITYSDK_OFFSET(0xAC66ED0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_9_TypeDefinitionIndex = 49783;

class Class_2_71206B21D0A90B92_9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_06CA57680E115A32_3* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_3*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
