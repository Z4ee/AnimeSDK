#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_24;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_71206B21D0A90B92_23_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB413180)
#define CLASS_2_71206B21D0A90B92_23_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB4131C0)
#define CLASS_2_71206B21D0A90B92_23_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB413080)
#define CLASS_2_71206B21D0A90B92_23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB412FC0)
#define CLASS_2_71206B21D0A90B92_23_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4130D0)
#define CLASS_2_71206B21D0A90B92_23_TICK_OFFSET UNITYSDK_OFFSET(0xB413120)
#define CLASS_2_71206B21D0A90B92_23__CTOR_OFFSET UNITYSDK_OFFSET(0xB412FB0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_23_TypeDefinitionIndex = 58753;

class Class_2_71206B21D0A90B92_23 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_FA3DB7B30E78C0CA_24* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_24* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_24*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_23_GET_FORCESKIP_OFFSET))(this);
	}
};
