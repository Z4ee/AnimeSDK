#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define CLASS_2_4B566EBE0AFA8CF5_ONENTER_OFFSET UNITYSDK_OFFSET(0xCB2AF30)
#define CLASS_2_4B566EBE0AFA8CF5_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xCB2B180)
#define CLASS_2_4B566EBE0AFA8CF5__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2AF20)

inline static constexpr unsigned int Class_2_4B566EBE0AFA8CF5_TypeDefinitionIndex = 62073;

class Class_2_4B566EBE0AFA8CF5 : public ::RPG::Client::ChenLingBattle::GamePhase
{
public:
	::RPG::Client::LuaUIGameFlowContext* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_F65FD1783A40C6D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + CLASS_2_4B566EBE0AFA8CF5__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4B566EBE0AFA8CF5_ONENTER_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* OnLeave()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B566EBE0AFA8CF5_ONLEAVE_OFFSET))(this);
	}
};
