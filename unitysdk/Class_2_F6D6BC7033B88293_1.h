#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70CCABA9DB985F52;
class Class_3_E566EAF4730F7493;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F6D6BC7033B88293_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xAC06D50)
#define CLASS_2_F6D6BC7033B88293_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xAC06D00)
#define CLASS_2_F6D6BC7033B88293_1_METHOD_2_A2AA1AEE9C77D4D0_OFFSET UNITYSDK_OFFSET(0xAC06C50)
#define CLASS_2_F6D6BC7033B88293_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC06DA0)

inline static constexpr unsigned int Class_2_F6D6BC7033B88293_1_TypeDefinitionIndex = 50530;

class Class_2_F6D6BC7033B88293_1 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::Class_3_E566EAF4730F7493* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::Class_1_70CCABA9DB985F52* Field_2_4; // 0x38
	::RPG::GameCore::FixPoint Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_1__CTOR_OFFSET))(this);
	}

	::Class_2_F6D6BC7033B88293_1* Method_2_A2AA1AEE9C77D4D0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::Class_1_70CCABA9DB985F52* a4, ::Class_3_E566EAF4730F7493* a5, ::RPG::GameCore::FixPoint a6)
	{
		return ((::Class_2_F6D6BC7033B88293_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_1_70CCABA9DB985F52*, ::Class_3_E566EAF4730F7493*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_1_METHOD_2_A2AA1AEE9C77D4D0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6D6BC7033B88293_1_GETEVENTTYPE_OFFSET))(this);
	}
};
