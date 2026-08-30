#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70CCABA9DB985F52;
class Class_3_05677D33458EB438;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F6D6BC7033B88293_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A7BEF50)
#define CLASS_2_F6D6BC7033B88293_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1A7BEF00)
#define CLASS_2_F6D6BC7033B88293_METHOD_2_A2AA1AEE9C77D4D0_OFFSET UNITYSDK_OFFSET(0x1A7BEE50)
#define CLASS_2_F6D6BC7033B88293__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BEFA0)

inline static constexpr unsigned int Class_2_F6D6BC7033B88293_TypeDefinitionIndex = 54295;

class Class_2_F6D6BC7033B88293 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::Class_1_70CCABA9DB985F52* GNHAPABLMDF; // 0x20
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x28
	::Class_3_05677D33458EB438* NEACMLNOEIL; // 0x30
	::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x38
	::RPG::GameCore::FixPoint OLKJAKJOJLP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293__CTOR_OFFSET))(this);
	}

	::Class_2_F6D6BC7033B88293* Method_2_A2AA1AEE9C77D4D0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::Class_1_70CCABA9DB985F52* a4, ::Class_3_05677D33458EB438* a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::Class_2_F6D6BC7033B88293*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_1_70CCABA9DB985F52*, ::Class_3_05677D33458EB438*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_METHOD_2_A2AA1AEE9C77D4D0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_GETEVENTTYPE_OFFSET))(this);
	}
};
