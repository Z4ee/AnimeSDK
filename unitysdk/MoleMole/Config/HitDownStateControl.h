#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovementStateControl.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_CLONE_OFFSET UNITYSDK_OFFSET(0x117139D0)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x117139C0)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11713C70)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11713AE0)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11713AD0)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11713C80)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11713B40)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11713C90)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11713B50)
#define MOLEMOLE_CONFIG_HITDOWNSTATECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x11713DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDownStateControl_TypeDefinitionIndex = 79444;

	class HitDownStateControl : public ::MoleMole::Config::ConfigMovementStateControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovementStateControl* Clone()
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HitDownStateControl* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HitDownStateControl*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HitDownStateControl* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HitDownStateControl*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITDOWNSTATECONTROL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
