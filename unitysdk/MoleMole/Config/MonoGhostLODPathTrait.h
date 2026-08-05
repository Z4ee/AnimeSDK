#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19ACE7D0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19ACE8D0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19ACE780)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19ACEE20)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19ACEA70)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19ACE8C0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19ACEE80)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19ACEAF0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19ACF060)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19ACECE0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACF1F0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19ACF200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonoGhostLODPathTrait_TypeDefinitionIndex = 48481;

	class MonoGhostLODPathTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* LODPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonoGhostLODPathTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonoGhostLODPathTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonoGhostLODPathTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonoGhostLODPathTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
