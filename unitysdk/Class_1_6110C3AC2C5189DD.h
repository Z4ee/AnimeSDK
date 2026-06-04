#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_73D621BDD90E61A7;
class Class_1_D8203AFB32E9259C;
class Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6110C3AC2C5189DD_METHOD_1_52474B8C56A29315_OFFSET UNITYSDK_OFFSET(0x1356CC80)
#define CLASS_1_6110C3AC2C5189DD_METHOD_1_8FA2956940AE948F_OFFSET UNITYSDK_OFFSET(0x1356CDB0)
#define CLASS_1_6110C3AC2C5189DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1356CEE0)

inline static constexpr unsigned int Class_1_6110C3AC2C5189DD_TypeDefinitionIndex = 50584;

class Class_1_6110C3AC2C5189DD : public ::System::Object
{
public:
	::Class_1_73D621BDD90E61A7* Field_1_0; // 0x10
	::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6110C3AC2C5189DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52474B8C56A29315(::Class_1_D8203AFB32E9259C* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_6110C3AC2C5189DD_METHOD_1_52474B8C56A29315_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8FA2956940AE948F(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_6110C3AC2C5189DD_METHOD_1_8FA2956940AE948F_OFFSET))(this, a1, a2, a3);
	}
};
