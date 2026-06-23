#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_801EC18359FE40A3.h"
#include "unitysdk/Enum_3_B14F8B04216FFB95.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_43BD383C98B4C0C5_49;
class Class_1_53842913455A8556;
namespace MoleMole { class InteractTraitData; }
namespace MoleMole::Config { class ConfigInteractInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONEDATA_OFFSET UNITYSDK_OFFSET(0x192A03C0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1929E1A0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_DOLOADDATA_OFFSET UNITYSDK_OFFSET(0x192A0780)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1929E300)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1929E120)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1929F660)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1929E4D0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1929FFA0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1929E290)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_EXCLUSIVEINTERACT_OFFSET UNITYSDK_OFFSET(0x1929FEE0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1929FF40)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_ISONCEONLY_OFFSET UNITYSDK_OFFSET(0x1929FE80)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1929F6C0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1929E550)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADDATA_OFFSET UNITYSDK_OFFSET(0x192A0280)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x192A0A50)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x192A0CD0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1929FCE0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1929F520)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_TRYLOADRESOURCEFROMCACHE_OFFSET UNITYSDK_OFFSET(0x192A0BE0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192A0D80)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192A0E00)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192A0E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait_TypeDefinitionIndex = 43586;

	class ConfigInteractTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* InteractName; // 0x18
		::Foundation::AssetPath ConfigDataPath; // 0x20
		::System::Int32 CoopInteractMaxCount; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>* InteractGroup; // 0x38
		::System::Boolean PlayerRotate; // 0x40
		::Enum_3_B14F8B04216FFB95 NpcRotateMode; // 0x44
		::Enum_3_801EC18359FE40A3 SwitchAvatarMode; // 0x48
		::System::Int32 TargetAgent; // 0x4C
		::System::Int32 SwitchToSkin; // 0x50
		::System::Int32 UnlockId; // 0x54
		::System::String* Hint; // 0x58
		::Class_1_43BD383C98B4C0C5_49* _mainInteractRunData; // 0x60
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_49*>* _otherInteractRunDataList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigInteractTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigInteractTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean get_IsOnceOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_ISONCEONLY_OFFSET))(this);
		}

		::System::Boolean get_ExclusiveInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_EXCLUSIVEINTERACT_OFFSET))(this);
		}

		::System::Int32 get_InteractPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET))(this);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		static ::Class_1_43BD383C98B4C0C5_49* CloneData(::MoleMole::InteractTraitData*& interactTraitData, ::System::String*& interactName)
		{
			return ((::Class_1_43BD383C98B4C0C5_49*(*)(::MoleMole::InteractTraitData*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONEDATA_OFFSET))(interactTraitData, interactName);
		}

		::System::Void LoadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADDATA_OFFSET))(this);
		}

		::System::Void LoadGroupDataList(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*& interactGroup, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_49*>*& traitDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*&, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_49*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADGROUPDATALIST_OFFSET))(this, interactGroup, traitDataList);
		}

		::Class_1_43BD383C98B4C0C5_49* DoLoadData(::System::String*& key, ::Foundation::AssetPath& assetPath, ::System::Action_1<::MoleMole::InteractTraitData*>* onLoadSuccess)
		{
			return ((::Class_1_43BD383C98B4C0C5_49*(*)(::PVOID, ::System::String*&, ::Foundation::AssetPath&, ::System::Action_1<::MoleMole::InteractTraitData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_DOLOADDATA_OFFSET))(this, key, assetPath, onLoadSuccess);
		}

		static ::System::Boolean TryLoadResourceFromCache(::Foundation::AssetPath filePath, ::Foundation::AssetRequestHandle& handle, ::MoleMole::InteractTraitData*& interactTraitData)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::MoleMole::InteractTraitData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_TRYLOADRESOURCEFROMCACHE_OFFSET))(filePath, handle, interactTraitData);
		}

		static ::MoleMole::InteractTraitData* LoadResource(::Foundation::AssetPath filePath, ::Foundation::AssetRequestHandle& handle)
		{
			return ((::MoleMole::InteractTraitData*(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADRESOURCE_OFFSET))(filePath, handle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
