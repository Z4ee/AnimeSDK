#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomString; }

#define CLASS_2_5D2CB267B9206F62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159291C0)
#define CLASS_2_5D2CB267B9206F62_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x15929270)
#define CLASS_2_5D2CB267B9206F62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15929200)
#define CLASS_2_5D2CB267B9206F62_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15929410)
#define CLASS_2_5D2CB267B9206F62_TICK_OFFSET UNITYSDK_OFFSET(0x15929460)
#define CLASS_2_5D2CB267B9206F62__CTOR_OFFSET UNITYSDK_OFFSET(0x159291B0)

inline static constexpr unsigned int Class_2_5D2CB267B9206F62_TypeDefinitionIndex = 58924;

class Class_2_5D2CB267B9206F62 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerCustomString* OFKGLJOAMLD; // 0x20
	::System::Int32 GAHGABBBDFF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomString*))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D2CB267B9206F62_TICK_OFFSET))(this, a1);
	}
};
