#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xE97BA80)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97BA30)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97BFE0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE97BBF0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xE97BB80)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97C040)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE97BC70)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97C220)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xE97BE80)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE97C3D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DebugInfoTrait_TypeDefinitionIndex = 81050;

	class DebugInfoTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DebugInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DebugInfoTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DebugInfoTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DebugInfoTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DebugInfoTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
