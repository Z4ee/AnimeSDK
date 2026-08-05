#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_OUTLINETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C471770)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C471870)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C471720)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C471DC0)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C471A10)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C471860)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C471E20)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C471A90)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1C472190)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C472000)
#define MOLEMOLE_CONFIG_OUTLINETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C471C80)
#define MOLEMOLE_CONFIG_OUTLINETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4723E0)
#define MOLEMOLE_CONFIG_OUTLINETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C4723F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OutlineTrait_TypeDefinitionIndex = 72852;

	class OutlineTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* OverlayOutlineConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::OutlineTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::OutlineTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::OutlineTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::OutlineTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OUTLINETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
