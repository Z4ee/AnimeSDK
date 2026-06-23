#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/StimulusEventItem.h"

class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A361340)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A3612F0)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A361930)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A3614B0)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A361D30)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A361440)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A361990)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A361530)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A361B80)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A3617D0)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A361DD0)
#define MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A361DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StimulusEmitterTrait_TypeDefinitionIndex = 74512;

	class StimulusEmitterTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::StimulusEventItem>* EventStimulus; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StimulusEmitterTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StimulusEmitterTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StimulusEmitterTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StimulusEmitterTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STIMULUSEMITTERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
