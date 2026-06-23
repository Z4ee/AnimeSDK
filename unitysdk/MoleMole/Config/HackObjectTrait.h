#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/CameraHackOperateType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/HackObjectType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
class Class_1_5FA9CCDDD9957726;
class Class_1_714AA90574E203E0;
class Class_1_A0EE873EACD64B72;
class Class_3_07AAFA6F7F79BEB3_1;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17D687E0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x17D656F0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D65850)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D65600)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D67BE0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D65BF0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x17D68650)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETGADGETVIEWOBJECTID_OFFSET UNITYSDK_OFFSET(0x17D69850)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17D657E0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETMEMBERCONFIG_1_OFFSET UNITYSDK_OFFSET(0x17D68D00)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x17D68BD0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x17D69A90)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D67C40)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D65C70)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x17D69C40)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x17D69C90)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D684B0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17D67AA0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_1_OFFSET UNITYSDK_OFFSET(0x17D688E0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_2_OFFSET UNITYSDK_OFFSET(0x17D68C50)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_3_OFFSET UNITYSDK_OFFSET(0x17D69290)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_OFFSET UNITYSDK_OFFSET(0x17D68700)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x17D696F0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETMONSTERBASEID_1_OFFSET UNITYSDK_OFFSET(0x17D697A0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETMONSTERBASEID_OFFSET UNITYSDK_OFFSET(0x17D698B0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETNPCSUBID_OFFSET UNITYSDK_OFFSET(0x17D69920)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETSCANMAPPINGKEY_OFFSET UNITYSDK_OFFSET(0x17D68ED0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYRESOLVERUNTIMETRAIT_OFFSET UNITYSDK_OFFSET(0x17D69350)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYRESOLVESCANMAPPINGTRAIT_OFFSET UNITYSDK_OFFSET(0x17D693D0)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D69F00)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17D69F20)
#define MOLEMOLE_CONFIG_HACKOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x17D69F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackObjectTrait_TypeDefinitionIndex = 86432;

	class HackObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		// static const ::System::Int32 ScanMappingTypeAvatar = 0x0; // 0x0
		// static const ::System::Int32 ScanMappingTypeMonster = 0x1; // 0x0
		// static const ::System::Int32 ScanMappingTypeGadget = 0x2; // 0x0
		// static const ::System::Int32 ScanMappingTypeNpc = 0x3; // 0x0
		::MoleMole::Config::HackObjectType HackObjectType; // 0x18
		::MoleMole::Config::CameraHackOperateType CameraHackOperateType; // 0x1C
		::System::Int32 ScanID; // 0x20
		::System::Single InteractDistanceOffset; // 0x24
		::System::String* AttachPoint; // 0x28
		::UnityEngine::Vector3 AttachOffset; // 0x30
		::System::String* DetectPoint; // 0x40
		::System::Single HoldTime; // 0x48
		::System::Boolean OnlyCheckByCameraHackMode; // 0x4C
		::System::Boolean CanInteract; // 0x4D
		::System::String* MobileTipKey; // 0x50
		::System::String* ConsoleTipKey; // 0x58
		::System::String* HackViewMobileTipKey; // 0x60
		::System::String* HackViewConsoleTipKey; // 0x68
		::System::String* CameraViewOverrideKey; // 0x70
		::System::Boolean CanInteractInNoramlMode; // 0x78
		::System::Boolean CanInteractInCameralMode; // 0x79
		::System::Boolean CanInteractInDroneMode; // 0x7A
		::System::Boolean CanInteractInRobotMode; // 0x7B
		::System::Boolean UseOutLineEffect; // 0x7C
		::System::Boolean UseOverlapEffect; // 0x7D
		::System::Collections::Generic::List_1<::System::Int32>* RelatedConfigIDList; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackObjectTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::MoleMole::Config::HackObjectTrait* ResolveRuntimeTrait(::Class_1_53842913455A8556* buildContext)
		{
			return ((::MoleMole::Config::HackObjectTrait*(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_OFFSET))(this, buildContext);
		}

		::MoleMole::Config::HackObjectTrait* ResolveRuntimeTrait_1(::Foundation::ViewObject::EntityBuildContext buildContext)
		{
			return ((::MoleMole::Config::HackObjectTrait*(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_1_OFFSET))(this, buildContext);
		}

		::MoleMole::Config::HackObjectTrait* ResolveRuntimeTrait_2(::Class_3_07AAFA6F7F79BEB3_1* serverInfo, ::Class_1_5FA9CCDDD9957726* config, ::Class_1_A0EE873EACD64B72* memberConfig)
		{
			return ((::MoleMole::Config::HackObjectTrait*(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3_1*, ::Class_1_5FA9CCDDD9957726*, ::Class_1_A0EE873EACD64B72*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_2_OFFSET))(this, serverInfo, config, memberConfig);
		}

		::MoleMole::Config::HackObjectTrait* ResolveRuntimeTrait_3(::System::Int32 id, ::System::Int32 typeId)
		{
			return ((::MoleMole::Config::HackObjectTrait*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_RESOLVERUNTIMETRAIT_3_OFFSET))(this, id, typeId);
		}

		::System::Boolean TryResolveRuntimeTrait(::System::Int32 id, ::System::Int32 typeId, ::MoleMole::Config::HackObjectTrait*& trait)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Config::HackObjectTrait*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYRESOLVERUNTIMETRAIT_OFFSET))(this, id, typeId, trait);
		}

		::System::Boolean TryResolveScanMappingTrait(::System::Int32 id, ::System::Int32 typeId, ::MoleMole::Config::HackObjectTrait*& trait)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Config::HackObjectTrait*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYRESOLVESCANMAPPINGTRAIT_OFFSET))(this, id, typeId, trait);
		}

		static ::Class_1_A0EE873EACD64B72* GetMemberConfig(::Class_3_07AAFA6F7F79BEB3_1* serverInfo)
		{
			return ((::Class_1_A0EE873EACD64B72*(*)(::Class_3_07AAFA6F7F79BEB3_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETMEMBERCONFIG_OFFSET))(serverInfo);
		}

		static ::Class_1_A0EE873EACD64B72* GetMemberConfig_1(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Class_1_A0EE873EACD64B72*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETMEMBERCONFIG_1_OFFSET))(handle);
		}

		static ::System::Boolean TryGetScanMappingKey(::Class_3_07AAFA6F7F79BEB3_1* serverInfo, ::Class_1_5FA9CCDDD9957726* config, ::Class_1_A0EE873EACD64B72* memberConfig, ::System::Int32& id, ::System::Int32& typeId)
		{
			return ((::System::Boolean(*)(::Class_3_07AAFA6F7F79BEB3_1*, ::Class_1_5FA9CCDDD9957726*, ::Class_1_A0EE873EACD64B72*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETSCANMAPPINGKEY_OFFSET))(serverInfo, config, memberConfig, id, typeId);
		}

		static ::System::Int32 GetGadgetViewObjectId(::Class_1_5FA9CCDDD9957726* config, ::Class_1_A0EE873EACD64B72* memberConfig)
		{
			return ((::System::Int32(*)(::Class_1_5FA9CCDDD9957726*, ::Class_1_A0EE873EACD64B72*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETGADGETVIEWOBJECTID_OFFSET))(config, memberConfig);
		}

		static ::System::Boolean TryGetNpcSubId(::Class_1_5FA9CCDDD9957726* config, ::System::Int32& npcId)
		{
			return ((::System::Boolean(*)(::Class_1_5FA9CCDDD9957726*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETNPCSUBID_OFFSET))(config, npcId);
		}

		static ::System::Boolean TryGetMonsterBaseId(::Class_1_714AA90574E203E0* monsterInfo, ::System::Int32& monsterBaseId)
		{
			return ((::System::Boolean(*)(::Class_1_714AA90574E203E0*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETMONSTERBASEID_OFFSET))(monsterInfo, monsterBaseId);
		}

		static ::System::Boolean TryGetMonsterBaseId_1(::System::Int32 monsterId, ::System::Boolean isSubId, ::System::Int32& monsterBaseId)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TRYGETMONSTERBASEID_1_OFFSET))(monsterId, isSubId, monsterBaseId);
		}

		static ::UnityEngine::Vector3 ToVector3(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* values)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_TOVECTOR3_OFFSET))(values);
		}

		static ::System::Single GetValue(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* values, ::System::Int32 index)
		{
			return ((::System::Single(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_GETVALUE_OFFSET))(values, index);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKOBJECTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
