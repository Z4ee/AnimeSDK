#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B8055D0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8055C0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8058F0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8056E0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B8056D0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B805980)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B805760)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8059E0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B805790)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B805BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovStalkerTrait_TypeDefinitionIndex = 71774;

	class ZenkovStalkerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovStalkerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovStalkerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovStalkerTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovStalkerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
