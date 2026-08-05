#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIRBUSTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x134E95E0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x134E87E0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x134E88E0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x134E87D0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134E9030)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134E8B60)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x134E9550)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x134E88D0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x134E9090)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x134E8BE0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x134E9680)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x134E93C0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x134E8EF0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x134E9850)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x134E9860)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x134E9870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirBusTrait_TypeDefinitionIndex = 53526;

	class AirBusTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean ManualSetStation; // 0x18
		::System::Int32 ManualSetStationIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AirBusTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AirBusTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AirBusTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AirBusTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
