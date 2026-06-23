#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/MonsterTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1704C070)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1704C1D0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1704C020)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704D2E0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1704C3C0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1704DAE0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1704C160)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704D340)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1704C440)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1704DB80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1704DBE0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704D940)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1704D1A0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1704E040)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1704E050)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1704E060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterDefaultTrait_TypeDefinitionIndex = 83605;

	class ConfigMonsterDefaultTrait : public ::MoleMole::Config::MonsterTraitBase
	{
	public:
		::System::Int32 AIConfigId; // 0x18
		::MoleMole::Config::CampType Camp; // 0x1C
		::System::Boolean TowardsPlayer; // 0x20
		::System::Boolean MuteAI; // 0x21
		::System::Boolean MuteHUD; // 0x22
		::System::Single ModelSize; // 0x24
		::System::String* ShowName; // 0x28
		::System::Boolean SkipBorn; // 0x30
		::System::Boolean InitEntityDisable; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMonsterDefaultTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMonsterDefaultTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMonsterDefaultTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMonsterDefaultTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
