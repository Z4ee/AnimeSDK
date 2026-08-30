#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTrackingMission; }
namespace System { class Object; }

#define CLASS_2_BD0204965EC698C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF21B90)
#define CLASS_2_BD0204965EC698C4_METHOD_2_44560CD97EB472CA_OFFSET UNITYSDK_OFFSET(0x1AF21C30)
#define CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1AF21F50)
#define CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AF21D80)
#define CLASS_2_BD0204965EC698C4_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1AF21E40)
#define CLASS_2_BD0204965EC698C4_METHOD_2_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0x1AF22060)
#define CLASS_2_BD0204965EC698C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF21BD0)
#define CLASS_2_BD0204965EC698C4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AF21F00)
#define CLASS_2_BD0204965EC698C4_TICK_OFFSET UNITYSDK_OFFSET(0x1AF22000)
#define CLASS_2_BD0204965EC698C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF21B80)

inline static constexpr unsigned int Class_2_BD0204965EC698C4_TypeDefinitionIndex = 53754;

class Class_2_BD0204965EC698C4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitTrackingMission* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean NCDPNHDBKKG; // 0x28
	::System::UInt32 CKDDBGABGLH; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTrackingMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTrackingMission*))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_44560CD97EB472CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_44560CD97EB472CA_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BD0204965EC698C4_METHOD_2_CD762BD492FAC131_OFFSET))(this, a1);
	}
};
