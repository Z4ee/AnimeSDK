#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12A3F650)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12A3E670)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12A3E770)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12A3E660)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A3F0B0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12A3EAD0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12A3F590)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12A3E760)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A3F110)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12A3EB50)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A3F400)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12A3EF70)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A3F8D0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12A3F8E0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12A3F8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirBusAttachTrait_TypeDefinitionIndex = 79905;

	class AirBusAttachTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 TargetBusConfigId; // 0x18
		::UnityEngine::Vector3 OffsetPos; // 0x1C
		::UnityEngine::Vector3 OffsetRot; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AirBusAttachTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AirBusAttachTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AirBusAttachTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AirBusAttachTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
