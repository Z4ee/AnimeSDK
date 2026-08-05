#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16C5A9A0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16C59D60)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C59E60)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C59D10)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C5A3B0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C5A000)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16C5A840)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16C59E50)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C5A410)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C5A080)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C5A6B0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16C5A270)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5AB30)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16C5AB40)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16C5AB50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerLittleRobotDashBreakableTrait_TypeDefinitionIndex = 66030;

	class HackerLittleRobotDashBreakableTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ColliderNameList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackerLittleRobotDashBreakableTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackerLittleRobotDashBreakableTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackerLittleRobotDashBreakableTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackerLittleRobotDashBreakableTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTDASHBREAKABLETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
