#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x17286610)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17286600)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17286930)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17286720)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17286710)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172869C0)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x172867A0)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17286A20)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x172867D0)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17286C00)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17286C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimReplicationTrait_TypeDefinitionIndex = 62639;

	class AnimReplicationTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AnimReplicationTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AnimReplicationTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AnimReplicationTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AnimReplicationTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}
	};
}
