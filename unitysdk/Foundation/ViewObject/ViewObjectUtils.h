#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22FC528C31017F2F.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_A0EE873EACD64B72;
class Class_1_F91ACF27C085FD90;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_30235BB967CBDA73_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_BUILDGROUPBYSERVERDATA_OFFSET UNITYSDK_OFFSET(0x14082970)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_BUILDGROUPMEMBERBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0x14082DA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_BUILDVIEWOBJECTBYCONFIG_OFFSET UNITYSDK_OFFSET(0x14083200)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_COMBINECONFIGID_OFFSET UNITYSDK_OFFSET(0x14083470)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GENERATEMEMBERSERVERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x140821D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GENERATEVOCOMMONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14082140)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETALIVEGROUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x140847C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x14083990)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETGROUPID_OFFSET UNITYSDK_OFFSET(0x140834C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERANDENTITYBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x14084AE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERID_OFFSET UNITYSDK_OFFSET(0x14083510)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERTYPE_1_OFFSET UNITYSDK_OFFSET(0x14083630)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x14083550)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_HANDLEENTITYDISSOCIATEBYDITHERFADEOUT_OFFSET UNITYSDK_OFFSET(0x14083D90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_ISMEMBERCONFIGBACKSTAGE_1_OFFSET UNITYSDK_OFFSET(0x14083860)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_ISMEMBERCONFIGBACKSTAGE_OFFSET UNITYSDK_OFFSET(0x140836E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_ISVIEWOBJECTENTITYBACKSTAGE_OFFSET UNITYSDK_OFFSET(0x140846C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_SETUPENTITYPOSITIONBYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x14083A60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETGROUPIDBYENTITY_OFFSET UNITYSDK_OFFSET(0x14084C80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETGROUPLIMITEDLEVELABILITYLIST_OFFSET UNITYSDK_OFFSET(0x14084DC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETMEMBERCONFIG_1_OFFSET UNITYSDK_OFFSET(0x14083120)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x14083680)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectUtils_TypeDefinitionIndex = 66916;

	class ViewObjectUtils : public ::System::Object
	{
	public:
		// static const ::System::UInt32 InvalidMemberID = 0x7FFFFFFF; // 0x0

		static ::System::Void GenerateVoCommonComponent(::Class_1_F91ACF27C085FD90* context)
		{
			return ((::System::Void(*)(::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GENERATEVOCOMMONCOMPONENT_OFFSET))(context);
		}

		static ::System::Void GenerateMemberServerComponent(::Class_1_F91ACF27C085FD90* context)
		{
			return ((::System::Void(*)(::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GENERATEMEMBERSERVERCOMPONENT_OFFSET))(context);
		}

		static ::Foundation::ViewObject::ViewObjectHandle BuildGroupByServerData(::Class_3_30235BB967CBDA73_2* serverInfo, ::System::Boolean autoEnable)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Class_3_30235BB967CBDA73_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_BUILDGROUPBYSERVERDATA_OFFSET))(serverInfo, autoEnable);
		}

		static ::Foundation::ViewObject::ViewObjectHandle BuildGroupMemberByServerInfo(::Class_3_07AAFA6F7F79BEB3* serverInfo, ::System::Boolean autoEnable)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Class_3_07AAFA6F7F79BEB3*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_BUILDGROUPMEMBERBYSERVERINFO_OFFSET))(serverInfo, autoEnable);
		}

		static ::Foundation::ViewObject::ViewObjectHandle BuildViewObjectByConfig(::System::Int32 voConfigId, ::System::Boolean autoEnable)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_BUILDVIEWOBJECTBYCONFIG_OFFSET))(voConfigId, autoEnable);
		}

		static ::System::UInt64 CombineConfigId(::System::UInt32 groupID, ::System::UInt32 memberId)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_COMBINECONFIGID_OFFSET))(groupID, memberId);
		}

		static ::System::UInt32 GetGroupID(::System::UInt64 combineId)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETGROUPID_OFFSET))(combineId);
		}

		static ::System::UInt32 GetMemberID(::System::UInt64 combineId)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERID_OFFSET))(combineId);
		}

		static ::Enum_3_22FC528C31017F2F GetMemberType(::System::UInt32 groupID, ::System::UInt32 configId)
		{
			return ((::Enum_3_22FC528C31017F2F(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERTYPE_OFFSET))(groupID, configId);
		}

		static ::Enum_3_22FC528C31017F2F GetMemberType_1(::Foundation::ViewObject::GroupMemberIdentifier& memberIdentifier)
		{
			return ((::Enum_3_22FC528C31017F2F(*)(::Foundation::ViewObject::GroupMemberIdentifier&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERTYPE_1_OFFSET))(memberIdentifier);
		}

		static ::System::Boolean TryGetMemberConfig(::Foundation::ViewObject::GroupMemberIdentifier& memberIdentifier, ::Class_1_A0EE873EACD64B72*& config)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::GroupMemberIdentifier&, ::Class_1_A0EE873EACD64B72*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETMEMBERCONFIG_OFFSET))(memberIdentifier, config);
		}

		static ::System::Boolean TryGetMemberConfig_1(::System::UInt32 groupID, ::System::UInt32 configId, ::Class_1_A0EE873EACD64B72*& config)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::Class_1_A0EE873EACD64B72*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETMEMBERCONFIG_1_OFFSET))(groupID, configId, config);
		}

		static ::System::Boolean IsMemberConfigBackStage(::Class_1_F91ACF27C085FD90* buildContext)
		{
			return ((::System::Boolean(*)(::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_ISMEMBERCONFIGBACKSTAGE_OFFSET))(buildContext);
		}

		static ::System::Boolean IsMemberConfigBackStage_1(::System::UInt32 groupID, ::System::UInt32 configId, ::System::UInt32 suiteIndex)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_ISMEMBERCONFIGBACKSTAGE_1_OFFSET))(groupID, configId, suiteIndex);
		}

		static ::MoleMole::EntityHandle GetEntityHandle(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETENTITYHANDLE_OFFSET))(handle);
		}

		static ::System::Void SetupEntityPositionByViewObject(::MoleMole::EntityHandle handle, ::Foundation::ViewObject::ViewObjectHandle viewObject)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_SETUPENTITYPOSITIONBYVIEWOBJECT_OFFSET))(handle, viewObject);
		}

		static ::System::Void HandleEntityDissociateByDitherFadeOut(::MoleMole::EntityHandle entityHandle, ::System::Boolean disableFadeInOut)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_HANDLEENTITYDISSOCIATEBYDITHERFADEOUT_OFFSET))(entityHandle, disableFadeInOut);
		}

		static ::System::Boolean IsViewObjectEntityBackStage(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_ISVIEWOBJECTENTITYBACKSTAGE_OFFSET))(vo);
		}

		static ::System::Void GetAliveGroupMembers(::System::UInt32 groupID, ::Enum_3_22FC528C31017F2F typeFilter, ::System::Collections::Generic::List_1<::System::Int32>* result)
		{
			return ((::System::Void(*)(::System::UInt32, ::Enum_3_22FC528C31017F2F, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETALIVEGROUPMEMBERS_OFFSET))(groupID, typeFilter, result);
		}

		static ::System::Void GetMemberAndEntityByConfigID(::System::UInt32 groupID, ::System::Int32 configID, ::Foundation::ViewObject::ViewObjectHandle& viewObjectHandle, ::MoleMole::EntityHandle& entityHandle)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_GETMEMBERANDENTITYBYCONFIGID_OFFSET))(groupID, configID, viewObjectHandle, entityHandle);
		}

		static ::System::Boolean TryGetGroupIDByEntity(::MoleMole::EntityHandle entityHandle, ::System::UInt32& groupID)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETGROUPIDBYENTITY_OFFSET))(entityHandle, groupID);
		}

		static ::System::Boolean TryGetGroupLimitedLevelAbilityList(::Foundation::ViewObject::ViewObjectHandle voGroup, ::System::Collections::Generic::List_1<::System::Int32>*& levelAbilityIDs)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_TRYGETGROUPLIMITEDLEVELABILITYLIST_OFFSET))(voGroup, levelAbilityIDs);
		}
	};
}
