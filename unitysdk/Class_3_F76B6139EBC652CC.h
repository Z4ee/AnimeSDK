#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearNpcDistanceTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F76B6139EBC652CC_METHOD_3_C078064DF67F1953_OFFSET UNITYSDK_OFFSET(0x11C4D6D0)
#define CLASS_3_F76B6139EBC652CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C4D570)
#define CLASS_3_F76B6139EBC652CC__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4D540)

inline static constexpr unsigned int Class_3_F76B6139EBC652CC_TypeDefinitionIndex = 48617;

class Class_3_F76B6139EBC652CC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearNpcDistanceTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearNpcDistanceTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearNpcDistanceTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_F76B6139EBC652CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F76B6139EBC652CC_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_C078064DF67F1953(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F76B6139EBC652CC_METHOD_3_C078064DF67F1953_OFFSET))(this, a1, a2);
	}
};
