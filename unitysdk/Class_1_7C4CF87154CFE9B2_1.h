#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_7C4CF87154CFE9B2_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BE8580)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x11BE85D0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x11BE8230)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x11BE8050)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_84C8B3AB5570DEF9_OFFSET UNITYSDK_OFFSET(0x11BE8110)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x11BE84C0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_927FAEA36AA4115E_OFFSET UNITYSDK_OFFSET(0x11BE8460)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x11BE82B0)
#define CLASS_1_7C4CF87154CFE9B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE8000)

inline static constexpr unsigned int Class_1_7C4CF87154CFE9B2_1_TypeDefinitionIndex = 69509;

class Class_1_7C4CF87154CFE9B2_1 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_72A8068D2AF9B485_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_1_84C8B3AB5570DEF9()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_84C8B3AB5570DEF9_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_927FAEA36AA4115E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_927FAEA36AA4115E_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
