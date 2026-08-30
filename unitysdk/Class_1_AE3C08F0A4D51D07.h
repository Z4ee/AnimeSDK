#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_1_D8203AFB32E9259C;
class Class_2_9C95D0C3F09106A8;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_AE3C08F0A4D51D07_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x18233E20)
#define CLASS_1_AE3C08F0A4D51D07_METHOD_1_89BBE58966E85A3B_OFFSET UNITYSDK_OFFSET(0x18233EF0)
#define CLASS_1_AE3C08F0A4D51D07__CTOR_OFFSET UNITYSDK_OFFSET(0x18234060)

inline static constexpr unsigned int Class_1_AE3C08F0A4D51D07_TypeDefinitionIndex = 54519;

class Class_1_AE3C08F0A4D51D07 : public ::System::Object
{
public:
	::Class_2_9C95D0C3F09106A8* NELGDHJKAJJ; // 0x10
	::RPG::GameCore::FixVec3 OIHKCJLEKOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE3C08F0A4D51D07__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_D8203AFB32E9259C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_1_AE3C08F0A4D51D07_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_89BBE58966E85A3B(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_AE3C08F0A4D51D07_METHOD_1_89BBE58966E85A3B_OFFSET))(this, a1, a2, a3);
	}
};
