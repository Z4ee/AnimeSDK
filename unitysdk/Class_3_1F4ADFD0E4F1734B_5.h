#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_78D787F77D9AA3DD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_5_METHOD_3_B32AF26887433465_OFFSET UNITYSDK_OFFSET(0xD25FC90)
#define CLASS_3_1F4ADFD0E4F1734B_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD25FA20)
#define CLASS_3_1F4ADFD0E4F1734B_5__CTOR_OFFSET UNITYSDK_OFFSET(0xD25F940)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_5_TypeDefinitionIndex = 55614;

class Class_3_1F4ADFD0E4F1734B_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_78D787F77D9AA3DD*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_78D787F77D9AA3DD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_78D787F77D9AA3DD*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_5_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_B32AF26887433465(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_5_METHOD_3_B32AF26887433465_OFFSET))(this, a1);
	}
};
