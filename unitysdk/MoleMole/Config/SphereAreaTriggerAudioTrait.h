#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace MoleMole::Config { class SphereAreaTriggerEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x170CCE10)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170CCF70)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x170CCDA0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170CDDA0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170CD120)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170CE490)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x170CCF00)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170CDE00)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x170CD1A0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170CE2F0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x170CDC60)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x170CE590)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x170CE5B0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170CE5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SphereAreaTriggerAudioTrait_TypeDefinitionIndex = 45903;

	class SphereAreaTriggerAudioTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 QuestID; // 0x18
		::System::Boolean IsAutoStart; // 0x1C
		::System::Single SwitchDelay; // 0x20
		::System::Single CountDown; // 0x24
		::System::String* DistanceToRTPC_Name; // 0x28
		::System::Single DistanceToRTPC_MaxRange; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::SphereAreaTriggerEntry*>* Entries; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SphereAreaTriggerAudioTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SphereAreaTriggerAudioTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SphereAreaTriggerAudioTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SphereAreaTriggerAudioTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
