#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PosRotTargetOption.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_CLONE_OFFSET UNITYSDK_OFFSET(0x17D28070)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D28020)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D27C80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D281E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D28170)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D27CE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D28260)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D27E70)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D28460)
#define MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D285C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotSavePoint_TypeDefinitionIndex = 45241;

	class ConfigPosRotSavePoint : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::System::String* PointName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotSavePoint* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotSavePoint*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotSavePoint* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotSavePoint*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTSAVEPOINT_PARSEFROMFLX_OFFSET))(node);
		}
	};
}
