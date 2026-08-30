#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DebateShowToast; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_9CC0DEDB64E3151D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEC360)
#define CLASS_2_9CC0DEDB64E3151D_METHOD_2_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0xBCEC2B0)
#define CLASS_2_9CC0DEDB64E3151D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCEC160)
#define CLASS_2_9CC0DEDB64E3151D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCEC3B0)
#define CLASS_2_9CC0DEDB64E3151D_TICK_OFFSET UNITYSDK_OFFSET(0xBCEC400)
#define CLASS_2_9CC0DEDB64E3151D__CTOR_OFFSET UNITYSDK_OFFSET(0xBCEC150)
#define CLASS_2_9CC0DEDB64E3151D__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCEC460)

inline static constexpr unsigned int Class_2_9CC0DEDB64E3151D_TypeDefinitionIndex = 53002;

class Class_2_9CC0DEDB64E3151D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DebateShowToast* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean BFIPMHHFJJH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateShowToast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateShowToast*))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D_TICK_OFFSET))(this, a1);
	}

	::System::String* Method_2_49091FA7D0FEFC35()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D_METHOD_2_49091FA7D0FEFC35_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC0DEDB64E3151D__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
