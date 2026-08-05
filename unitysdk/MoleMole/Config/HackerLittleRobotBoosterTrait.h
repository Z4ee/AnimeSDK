#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4BC2D0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BC2C0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BC5F0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BC3E0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4BC8C0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A4BC3D0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BC680)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BC460)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BC6E0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BC490)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BC950)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4BC960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerLittleRobotBoosterTrait_TypeDefinitionIndex = 54499;

	class HackerLittleRobotBoosterTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackerLittleRobotBoosterTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackerLittleRobotBoosterTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackerLittleRobotBoosterTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackerLittleRobotBoosterTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTBOOSTERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
