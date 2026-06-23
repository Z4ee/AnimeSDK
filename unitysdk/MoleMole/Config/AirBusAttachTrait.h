#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12B21870)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12B20A20)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12B20B80)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12B20A10)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B212C0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12B20CB0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12B217B0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12B20B10)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B21320)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12B20D30)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B21610)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12B21180)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21AF0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12B21B00)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12B21B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirBusAttachTrait_TypeDefinitionIndex = 58185;

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

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
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

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
