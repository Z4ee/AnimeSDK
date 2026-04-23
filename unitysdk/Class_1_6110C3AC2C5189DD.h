#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
class Class_1_73D621BDD90E61A7;
class Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6110C3AC2C5189DD_METHOD_1_52474B8C56A29315_OFFSET UNITYSDK_OFFSET(0x9E297F0)
#define CLASS_1_6110C3AC2C5189DD_METHOD_1_8FA2956940AE948F_OFFSET UNITYSDK_OFFSET(0x9E29920)
#define CLASS_1_6110C3AC2C5189DD__CTOR_OFFSET UNITYSDK_OFFSET(0x9E29A50)

inline static constexpr unsigned int Class_1_6110C3AC2C5189DD_TypeDefinitionIndex = 49917;

class Class_1_6110C3AC2C5189DD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::Class_1_73D621BDD90E61A7* Field_1_1; // 0x18
	::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6110C3AC2C5189DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52474B8C56A29315(::Class_1_05E595DC72CB83CA* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_6110C3AC2C5189DD_METHOD_1_52474B8C56A29315_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8FA2956940AE948F(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_6110C3AC2C5189DD_METHOD_1_8FA2956940AE948F_OFFSET))(this, a1, a2, a3);
	}
};
