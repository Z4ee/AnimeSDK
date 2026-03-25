#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_9432B3E32D314913;
namespace RPG::GameCore { class SetAudienceGroupVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BB2D4D019E103CDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B0CA80)
#define CLASS_2_BB2D4D019E103CDE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10B0C8B0)
#define CLASS_2_BB2D4D019E103CDE_METHOD_2_63257B146566F633_OFFSET UNITYSDK_OFFSET(0x10B0C8F0)
#define CLASS_2_BB2D4D019E103CDE_METHOD_2_A666BD4C2D583F89_OFFSET UNITYSDK_OFFSET(0x10B0C740)
#define CLASS_2_BB2D4D019E103CDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B0CC30)
#define CLASS_2_BB2D4D019E103CDE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B0CA30)
#define CLASS_2_BB2D4D019E103CDE_TICK_OFFSET UNITYSDK_OFFSET(0x10B0CAD0)
#define CLASS_2_BB2D4D019E103CDE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0C730)

inline static constexpr unsigned int Class_2_BB2D4D019E103CDE_TypeDefinitionIndex = 47205;

class Class_2_BB2D4D019E103CDE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetAudienceGroupVisible* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAudienceGroupVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAudienceGroupVisible*))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_9432B3E32D314913* Method_2_A666BD4C2D583F89()
	{
		return ((::Class_1_9432B3E32D314913*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_METHOD_2_A666BD4C2D583F89_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_63257B146566F633(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_METHOD_2_63257B146566F633_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB2D4D019E103CDE_ONTASKBEGIN_OFFSET))(this);
	}
};
