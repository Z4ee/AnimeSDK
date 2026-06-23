#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1270C2B0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1270C410)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1270C2A0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1270CB80)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1270C540)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1270C3A0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1270CBE0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1270C5C0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1270D150)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1270CFB0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1270CA40)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1270D2B0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1270D2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CollideGroundTrait_TypeDefinitionIndex = 45083;

	class CollideGroundTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean MuteGroundCheck; // 0x18
		::System::Boolean MuteFreeFall; // 0x19
		::System::Boolean MuteFlyHeightLimit; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::CollideGroundTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::CollideGroundTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::CollideGroundTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::CollideGroundTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
