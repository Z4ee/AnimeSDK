#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_7C4CF87154CFE9B2_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EFC8A0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x18EFC8F0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x18EFC2B0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x18EFC540)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x18EFC7B0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_927FAEA36AA4115E_OFFSET UNITYSDK_OFFSET(0x18EFC750)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x18EFC5D0)
#define CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_F39DF4F52DD1150D_OFFSET UNITYSDK_OFFSET(0x18EFC3A0)
#define CLASS_1_7C4CF87154CFE9B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFC260)

inline static constexpr unsigned int Class_1_7C4CF87154CFE9B2_1_TypeDefinitionIndex = 71844;

class Class_1_7C4CF87154CFE9B2_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_1_F39DF4F52DD1150D()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_F39DF4F52DD1150D_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_7C4CF87154CFE9B2_1_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
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
