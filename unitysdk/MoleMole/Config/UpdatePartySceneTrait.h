#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B9289D0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B9283E0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9283D0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B928700)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9284F0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B9284E0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B928790)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B928570)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9287F0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9285A0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B928A50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UpdatePartySceneTrait_TypeDefinitionIndex = 41136;

	class UpdatePartySceneTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::UpdatePartySceneTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::UpdatePartySceneTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}
	};
}
