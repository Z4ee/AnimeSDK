#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowRogueTalkUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_12A233E3FB79DB02_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E25670)
#define CLASS_2_12A233E3FB79DB02_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15E25790)
#define CLASS_2_12A233E3FB79DB02_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E256B0)
#define CLASS_2_12A233E3FB79DB02_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E25740)
#define CLASS_2_12A233E3FB79DB02_TICK_OFFSET UNITYSDK_OFFSET(0x15E25800)
#define CLASS_2_12A233E3FB79DB02__CTOR_OFFSET UNITYSDK_OFFSET(0x15E25660)

inline static constexpr unsigned int Class_2_12A233E3FB79DB02_TypeDefinitionIndex = 56062;

class Class_2_12A233E3FB79DB02 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowRogueTalkUI* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueTalkUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueTalkUI*))((::PBYTE)hIl2Cpp + CLASS_2_12A233E3FB79DB02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A233E3FB79DB02_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A233E3FB79DB02_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A233E3FB79DB02_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12A233E3FB79DB02_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12A233E3FB79DB02_TICK_OFFSET))(this, a1);
	}
};
