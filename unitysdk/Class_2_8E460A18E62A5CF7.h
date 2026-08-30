#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipFollowTo; }

#define CLASS_2_8E460A18E62A5CF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184D57E0)
#define CLASS_2_8E460A18E62A5CF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184D5880)
#define CLASS_2_8E460A18E62A5CF7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184D5950)
#define CLASS_2_8E460A18E62A5CF7_TICK_OFFSET UNITYSDK_OFFSET(0x184D5820)
#define CLASS_2_8E460A18E62A5CF7__CTOR_OFFSET UNITYSDK_OFFSET(0x184D57D0)

inline static constexpr unsigned int Class_2_8E460A18E62A5CF7_TypeDefinitionIndex = 53692;

class Class_2_8E460A18E62A5CF7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TravelShipFollowTo* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipFollowTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipFollowTo*))((::PBYTE)hIl2Cpp + CLASS_2_8E460A18E62A5CF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E460A18E62A5CF7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E460A18E62A5CF7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E460A18E62A5CF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E460A18E62A5CF7_ONTASKRESET_OFFSET))(this);
	}
};
