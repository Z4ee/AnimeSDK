#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C464FB0)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C465A70)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C465410)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x1C465490)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_METHOD_1_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x1C465AD0)
#define MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C465EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStreamGamePatrolReachedAction_TypeDefinitionIndex = 78746;

	class ConfigStreamGamePatrolReachedAction : public ::System::Object
	{
	public:
		::System::Boolean Wait; // 0x10
		::System::Single WaitDurationSeconds; // 0x14
		::System::Boolean FireEvent; // 0x18
		::System::Boolean PausePatrol; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION__CTOR_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_EXPOSEMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_METHOD_1_9144040ECD391705_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTREAMGAMEPATROLREACHEDACTION_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}
	};
}
