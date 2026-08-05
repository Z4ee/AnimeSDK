#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace System { class Action; }

#define CLASS_1_27C7C38CF8187C29_CLASS_1_100FD4E10158D5D3_METHOD_1_1C1E6015C5D9C79D_OFFSET UNITYSDK_OFFSET(0x12BA7760)
#define CLASS_1_27C7C38CF8187C29_CLASS_1_100FD4E10158D5D3__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA7750)

inline static constexpr unsigned int Class_1_27C7C38CF8187C29_Class_1_100FD4E10158D5D3_TypeDefinitionIndex = 70433;

class Class_1_27C7C38CF8187C29_Class_1_100FD4E10158D5D3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_CLASS_1_100FD4E10158D5D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C1E6015C5D9C79D(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + CLASS_1_27C7C38CF8187C29_CLASS_1_100FD4E10158D5D3_METHOD_1_1C1E6015C5D9C79D_OFFSET))(this, a1);
	}
};
