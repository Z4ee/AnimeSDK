#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_415;
namespace RPG::GameCore { class SetModifierDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0A2C0EF9A6561893_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1723A760)
#define CLASS_3_0A2C0EF9A6561893__CTOR_OFFSET UNITYSDK_OFFSET(0x1723A730)

inline static constexpr unsigned int Class_3_0A2C0EF9A6561893_TypeDefinitionIndex = 55726;

class Class_3_0A2C0EF9A6561893 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierDynamicValue*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_0_16E4307DCC419505_415*> NMJKNKGGBOD; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_0A2C0EF9A6561893__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A2C0EF9A6561893_ONTASKBEGIN_OFFSET))(this);
	}
};
