#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_432C569ADACEDD18_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBCA0900)
#define CLASS_1_432C569ADACEDD18_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBCA08B0)
#define CLASS_1_432C569ADACEDD18_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xBCA0970)
#define CLASS_1_432C569ADACEDD18_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xBCA0950)
#define CLASS_1_432C569ADACEDD18_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBCA0960)
#define CLASS_1_432C569ADACEDD18__CTOR_OFFSET UNITYSDK_OFFSET(0xBCA08A0)

inline static constexpr unsigned int Class_1_432C569ADACEDD18_TypeDefinitionIndex = 56863;

class Class_1_432C569ADACEDD18 : public ::System::Object
{
public:
	::System::String* BCNCHNNGCGF; // 0x10
	::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x18
	::System::Boolean CAMFELEBOCO; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_432C569ADACEDD18__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_432C569ADACEDD18_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_432C569ADACEDD18_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_432C569ADACEDD18_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_432C569ADACEDD18_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_432C569ADACEDD18_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
