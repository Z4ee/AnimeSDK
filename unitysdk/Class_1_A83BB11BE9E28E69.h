#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_E2CE926DCDD10F16;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define CLASS_1_A83BB11BE9E28E69_METHOD_1_B533DC0648F8647E_OFFSET UNITYSDK_OFFSET(0x9607A40)
#define CLASS_1_A83BB11BE9E28E69_METHOD_1_EDEA58840F2F4B1F_OFFSET UNITYSDK_OFFSET(0x96079A0)

inline static constexpr unsigned int Class_1_A83BB11BE9E28E69_TypeDefinitionIndex = 49912;

class Class_1_A83BB11BE9E28E69 : public ::System::Object
{
public:
	static ::System::Void Method_1_EDEA58840F2F4B1F(::RPG::GameCore::GameWorld* a1, ::Class_1_E2CE926DCDD10F16*& a2, ::System::Action* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::Class_1_E2CE926DCDD10F16*&, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A83BB11BE9E28E69_METHOD_1_EDEA58840F2F4B1F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B533DC0648F8647E(::RPG::GameCore::GameWorld* a1, ::Class_1_E2CE926DCDD10F16*& a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::Class_1_E2CE926DCDD10F16*&))((::PBYTE)hIl2Cpp + CLASS_1_A83BB11BE9E28E69_METHOD_1_B533DC0648F8647E_OFFSET))(a1, a2);
	}
};
