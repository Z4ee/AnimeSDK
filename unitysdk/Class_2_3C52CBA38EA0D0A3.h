#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_3C52CBA38EA0D0A3_CLEAR_OFFSET UNITYSDK_OFFSET(0x119603F0)
#define CLASS_2_3C52CBA38EA0D0A3_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x119604B0)
#define CLASS_2_3C52CBA38EA0D0A3_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11960460)
#define CLASS_2_3C52CBA38EA0D0A3_METHOD_2_B7A27F8F43AB5662_OFFSET UNITYSDK_OFFSET(0x11960380)
#define CLASS_2_3C52CBA38EA0D0A3__CTOR_OFFSET UNITYSDK_OFFSET(0x11960500)
#define CLASS_2_3C52CBA38EA0D0A3___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11960510)

inline static constexpr unsigned int Class_2_3C52CBA38EA0D0A3_TypeDefinitionIndex = 45527;

class Class_2_3C52CBA38EA0D0A3 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::STSpecialEventType Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C52CBA38EA0D0A3__CTOR_OFFSET))(this);
	}

	::Class_2_3C52CBA38EA0D0A3* Method_2_B7A27F8F43AB5662(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::STSpecialEventType a3)
	{
		return ((::Class_2_3C52CBA38EA0D0A3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::STSpecialEventType))((::PBYTE)hIl2Cpp + CLASS_2_3C52CBA38EA0D0A3_METHOD_2_B7A27F8F43AB5662_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C52CBA38EA0D0A3_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C52CBA38EA0D0A3_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C52CBA38EA0D0A3_GETEVENTTYPE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C52CBA38EA0D0A3___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
