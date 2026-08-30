#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_F335F1C12D8F872C;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define CLASS_1_1606C79AFC9DDF64_METHOD_1_244D4479AF612223_OFFSET UNITYSDK_OFFSET(0x1B4443C0)
#define CLASS_1_1606C79AFC9DDF64_METHOD_1_50F02E5A3524DC32_OFFSET UNITYSDK_OFFSET(0x1B444320)

inline static constexpr unsigned int Class_1_1606C79AFC9DDF64_TypeDefinitionIndex = 54345;

class Class_1_1606C79AFC9DDF64 : public ::System::Object
{
public:
	static ::System::Void Method_1_50F02E5A3524DC32(::RPG::GameCore::GameWorld* a1, ::Class_1_F335F1C12D8F872C*& a2, ::System::Action* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::Class_1_F335F1C12D8F872C*&, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1606C79AFC9DDF64_METHOD_1_50F02E5A3524DC32_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_244D4479AF612223(::RPG::GameCore::GameWorld* a1, ::Class_1_F335F1C12D8F872C*& a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::Class_1_F335F1C12D8F872C*&))((::PBYTE)hIl2Cpp + CLASS_1_1606C79AFC9DDF64_METHOD_1_244D4479AF612223_OFFSET))(a1, a2);
	}
};
