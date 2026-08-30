#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_26;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_21_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5D5200)
#define CLASS_2_71206B21D0A90B92_21_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB5D5240)
#define CLASS_2_71206B21D0A90B92_21_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB5D5100)
#define CLASS_2_71206B21D0A90B92_21_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5D5040)
#define CLASS_2_71206B21D0A90B92_21_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5D5150)
#define CLASS_2_71206B21D0A90B92_21_TICK_OFFSET UNITYSDK_OFFSET(0xB5D51A0)
#define CLASS_2_71206B21D0A90B92_21__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D5030)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_21_TypeDefinitionIndex = 58901;

class Class_2_71206B21D0A90B92_21 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_FA3DB7B30E78C0CA_26* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_26* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_26*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_21_GET_FORCESKIP_OFFSET))(this);
	}
};
