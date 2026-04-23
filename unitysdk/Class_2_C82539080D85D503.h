#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_0_16E4307DCC419505_628;
class Class_1_3B36CE63D36E9917;
class Class_1_4B24D105CCEA2C22;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }

#define CLASS_2_C82539080D85D503_METHOD_2_2F3709D27A34AA00_OFFSET UNITYSDK_OFFSET(0xECB35C0)
#define CLASS_2_C82539080D85D503_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0xECB37C0)
#define CLASS_2_C82539080D85D503_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xECB3820)
#define CLASS_2_C82539080D85D503__CTOR_OFFSET UNITYSDK_OFFSET(0xECB3430)

inline static constexpr unsigned int Class_2_C82539080D85D503_TypeDefinitionIndex = 69903;

class Class_2_C82539080D85D503 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_3B36CE63D36E9917* Field_2_0; // 0x20
	::Class_1_4B24D105CCEA2C22* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_C82539080D85D503__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_C82539080D85D503* Method_2_2F3709D27A34AA00(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_C82539080D85D503*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_C82539080D85D503_METHOD_2_2F3709D27A34AA00_OFFSET))(a1);
	}

	::System::Void ReceiveEvent(::Class_0_16E4307DCC419505_628* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_628*))((::PBYTE)hIl2Cpp + CLASS_2_C82539080D85D503_RECEIVEEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C82539080D85D503_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}
};
