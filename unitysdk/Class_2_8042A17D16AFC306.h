#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_43BD383C98B4C0C5_128;
class Class_3_AD202E4D78C8CB31;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8042A17D16AFC306_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18C915C0)
#define CLASS_2_8042A17D16AFC306_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18C91570)
#define CLASS_2_8042A17D16AFC306_METHOD_2_4621DE889D0D5507_OFFSET UNITYSDK_OFFSET(0x18C914B0)
#define CLASS_2_8042A17D16AFC306__CTOR_OFFSET UNITYSDK_OFFSET(0x18C91610)

inline static constexpr unsigned int Class_2_8042A17D16AFC306_TypeDefinitionIndex = 54298;

class Class_2_8042A17D16AFC306 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* CFOAICLAMHO; // 0x18
	::Class_3_AD202E4D78C8CB31* MCDGBGOBFJN; // 0x20
	::RPG::GameCore::GameEntity* DOCLLEDKMNK; // 0x28
	::Class_1_43BD383C98B4C0C5_128* MGOHJJNKGNJ; // 0x30
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x38
	::RPG::GameCore::FixPoint DHCDELLIONN; // 0x40
	::RPG::GameCore::FixPoint EMOHBJJJBDP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8042A17D16AFC306__CTOR_OFFSET))(this);
	}

	::Class_2_8042A17D16AFC306* Method_2_4621DE889D0D5507(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::Class_1_43BD383C98B4C0C5_128* a4, ::Class_3_AD202E4D78C8CB31* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7)
	{
		return ((::Class_2_8042A17D16AFC306*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_1_43BD383C98B4C0C5_128*, ::Class_3_AD202E4D78C8CB31*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_8042A17D16AFC306_METHOD_2_4621DE889D0D5507_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8042A17D16AFC306_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8042A17D16AFC306_GETEVENTTYPE_OFFSET))(this);
	}
};
