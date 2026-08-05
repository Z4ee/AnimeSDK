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

#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD77470)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD77570)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD77460)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD78140)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD779B0)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD77560)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD781A0)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD77A30)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD78620)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD78000)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD787B0)
#define MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD787C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TreasureGoblinTrait_TypeDefinitionIndex = 46095;

	class TreasureGoblinTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 Phase; // 0x18
		::System::Single Radius; // 0x1C
		::System::Boolean IsNoSearch; // 0x20
		::System::Int32 BoxID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::TreasureGoblinTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::TreasureGoblinTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::TreasureGoblinTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::TreasureGoblinTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TREASUREGOBLINTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
