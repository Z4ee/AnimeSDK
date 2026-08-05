#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1F4FA6111BA6DEA1.h"
#include "unitysdk/Enum_3_5384974BE3FFE8B5.h"
#include "unitysdk/Enum_3_CB57DBB7004CF282.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/ZenkovYokaiHenshinSubSystem_OverrideSwitchOutExQTEData.h"
#include "unitysdk/MoleMole/ZenkovYokaiHenshinSubSystem_OverrideSwitchOutQTEData.h"
#include "unitysdk/Struct_2_A179366BBBE4C80D_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_53CA1F2E8873AF96;
class Class_1_B7E341C5F1A6F199;
class Class_1_FB1F886AC36EE9C0;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_APPLYTRIGGERHITANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x1411F8B0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x14115CE0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1411F240)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYDEVLEVEL_OFFSET UNITYSDK_OFFSET(0x1411EA90)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_OFFSET UNITYSDK_OFFSET(0x1411DA20)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_FIREZENKOVYOKAIHENSHINEVT_OFFSET UNITYSDK_OFFSET(0x14118530)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETALLYOKAIAVATARLIST_OFFSET UNITYSDK_OFFSET(0x141199A0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETFIRSTPRIORITYINSTAGEDURATIONRATIO_OFFSET UNITYSDK_OFFSET(0x1411C780)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETLOCALCONTROLYOKAIAVATAR_OFFSET UNITYSDK_OFFSET(0x14119940)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETRARITYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1411FAD0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETUSEITEMDISABLEMAT_OFFSET UNITYSDK_OFFSET(0x1411FBF0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETWHEELSLOTPROVIDER_OFFSET UNITYSDK_OFFSET(0x141199E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARBYSLOTID_OFFSET UNITYSDK_OFFSET(0x14117970)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_1_OFFSET UNITYSDK_OFFSET(0x14118B60)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_OFFSET UNITYSDK_OFFSET(0x14118A80)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFOBYSLOTID_OFFSET UNITYSDK_OFFSET(0x14117C90)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x14118E60)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIINSTAGEDURATIONMAT_OFFSET UNITYSDK_OFFSET(0x1411FBB0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x14113C80)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x14113C10)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x14114AE0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1411D700)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISCONTROLYOKAIAVATARREADY_OFFSET UNITYSDK_OFFSET(0x141194F0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISINCONTROLYOKAIHENSHINSTATE_OFFSET UNITYSDK_OFFSET(0x141198F0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIAVATARAVAILABLE_OFFSET UNITYSDK_OFFSET(0x14117F90)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_1_OFFSET UNITYSDK_OFFSET(0x1411D2A0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_OFFSET UNITYSDK_OFFSET(0x141192C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISZENKOVITEMYOKAI_OFFSET UNITYSDK_OFFSET(0x141190C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAICOOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x1411C170)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAIINSTAGEDURATION_OFFSET UNITYSDK_OFFSET(0x1411C460)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14113CF0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14114C30)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONKOVBAGSYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1411F800)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x141175E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET UNITYSDK_OFFSET(0x1411D550)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x141164C0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONZENKOVYOKAISKILLUPDATE_OFFSET UNITYSDK_OFFSET(0x1411F780)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPMUTEZENKOVYOKAITAG_OFFSET UNITYSDK_OFFSET(0x1411D3D0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x1411CC90)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x1411CA00)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PRELOADMATERIALS_OFFSET UNITYSDK_OFFSET(0x14114080)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHMUTEZENKOVYOKAITAG_OFFSET UNITYSDK_OFFSET(0x1411CE00)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTEXQTE_OFFSET UNITYSDK_OFFSET(0x1411CB70)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTQTE_OFFSET UNITYSDK_OFFSET(0x1411C8E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x14117020)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHYOKAIAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1411D9D0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETCONTROLYOKAIINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x14115110)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETDELAYINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x14115880)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETZENKOVYOKAICOOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x1411BEE0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHINZENKOVYOKAI_OFFSET UNITYSDK_OFFSET(0x14119A20)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_1_OFFSET UNITYSDK_OFFSET(0x1411A880)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_OFFSET UNITYSDK_OFFSET(0x1411A6F0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKCD_OFFSET UNITYSDK_OFFSET(0x14116A50)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKINSTAGEDURATION_OFFSET UNITYSDK_OFFSET(0x14116C30)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYCONSUMEYOKAIAVATARITEM_OFFSET UNITYSDK_OFFSET(0x14118730)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYHANDLEBEINGHITEVT_OFFSET UNITYSDK_OFFSET(0x1411B8D0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYSYNCYOKAIAVATARPOSROTTOLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x14116700)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYTRIGGERYOKAIAVATAR_OFFSET UNITYSDK_OFFSET(0x14117E00)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1411FC30)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_G__ISENTITYINPRELOADRUNTIMEDATAS_50_0_OFFSET UNITYSDK_OFFSET(0x1411F310)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1411FD20)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1411FDB0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1411FE40)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1411FEE0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovYokaiHenshinSubSystem_TypeDefinitionIndex = 81755;

	class ZenkovYokaiHenshinSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ZenkovYokaiHenshinSubSystem*>
	{
	public:
		::MoleMole::EntityHandle _localControlYokaiAvatar; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _muteYokaiTagDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _rarityMatDict; // 0x28
		::Class_1_53CA1F2E8873AF96* _zenkovWheelSlotProvider; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::ZenkovYokaiHenshinSubSystem_OverrideSwitchOutQTEData>* _overrideSwitchOutQTEDatas; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _allYokaiAvatarList; // 0x40
		::UnityEngine::Material* _yokaiInStageDurationMat; // 0x48
		::MoleMole::EntityHandle _lastHenshinLocalAvatar; // 0x50
		::UnityEngine::Material* _useItemDisableMat; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Class_1_FB1F886AC36EE9C0*>* _yokaiAvatarInfoDict; // 0x68
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _matAssetHandles; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::ZenkovYokaiHenshinSubSystem_OverrideSwitchOutExQTEData>* _overrideSwitchOutExQTEDatas; // 0x78
		::Enum_3_1F4FA6111BA6DEA1 _curControlYokaiState; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isOverrideSwitchOutQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTQTE_OFFSET))(this);
		}

		::System::Boolean get__isOverrideSwitchOutExQTE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GET__ISOVERRIDESWITCHOUTEXQTE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::MoleMole::EntityHandle GetYokaiAvatarBySlotID(::System::Int32 slotID)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARBYSLOTID_OFFSET))(this, slotID);
		}

		::Class_1_FB1F886AC36EE9C0* GetYokaiAvatarInfoBySlotID(::System::Int32 slotID)
		{
			return ((::Class_1_FB1F886AC36EE9C0*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFOBYSLOTID_OFFSET))(this, slotID);
		}

		::System::Boolean TryTriggerYokaiAvatar(::System::Int32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYTRIGGERYOKAIAVATAR_OFFSET))(this, slotID);
		}

		::System::Void GetYokaiAvatarCoolDownInfo(::System::Int32 slotID, ::System::Boolean& isInCD, ::System::Single& ratio, ::System::Single& cdTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_OFFSET))(this, slotID, isInCD, ratio, cdTime);
		}

		::System::Void GetYokaiAvatarCoolDownInfo_1(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Boolean& isInCD, ::System::Single& ratio, ::System::Single& cdTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARCOOLDOWNINFO_1_OFFSET))(this, yokaiAvatar, isInCD, ratio, cdTime);
		}

		::Class_1_FB1F886AC36EE9C0* GetYokaiAvatarInfo(::MoleMole::Battle::Entity* yokaiAvatar)
		{
			return ((::Class_1_FB1F886AC36EE9C0*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIAVATARINFO_OFFSET))(this, yokaiAvatar);
		}

		static ::System::Boolean IsZenkovItemYokai(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISZENKOVITEMYOKAI_OFFSET))(itemID);
		}

		::System::Boolean IsYokaiAvatarAvailable(::System::Int32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIAVATARAVAILABLE_OFFSET))(this, slotID);
		}

		::System::Boolean IsControlYokaiAvatarReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISCONTROLYOKAIAVATARREADY_OFFSET))(this);
		}

		::System::Boolean IsInControlYokaiHenshinState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISINCONTROLYOKAIHENSHINSTATE_OFFSET))(this);
		}

		::MoleMole::EntityHandle GetLocalControlYokaiAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETLOCALCONTROLYOKAIAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GetAllYokaiAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETALLYOKAIAVATARLIST_OFFSET))(this);
		}

		::Class_1_53CA1F2E8873AF96* GetWheelSlotProvider()
		{
			return ((::Class_1_53CA1F2E8873AF96*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETWHEELSLOTPROVIDER_OFFSET))(this);
		}

		::System::Void SwitchInZenkovYokai(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Boolean isControlYokai, ::MoleMole::Config::ConfigPosRot* configPosRot, ::System::Int32 switchInIndex, ::System::String* lockTargetID, ::System::Boolean muteControlSkillA, ::System::Boolean muteControlSkillB, ::System::Boolean muteControlSkillD, ::System::Boolean muteControlSkillUltra, ::System::Single inStageDuration)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Config::ConfigPosRot*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHINZENKOVYOKAI_OFFSET))(this, yokaiAvatar, isControlYokai, configPosRot, switchInIndex, lockTargetID, muteControlSkillA, muteControlSkillB, muteControlSkillD, muteControlSkillUltra, inStageDuration);
		}

		::System::Void SwitchOutZenkovYokai(::System::Int32 slotID, ::System::Int32 switchOutIndex, ::System::Boolean isInterrupt, ::System::Int32 interruptSwitchInIndex, ::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_OFFSET))(this, slotID, switchOutIndex, isInterrupt, interruptSwitchInIndex, evt);
		}

		::System::Void SwitchOutZenkovYokai_1(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Int32 switchOutIndex, ::System::Boolean isInterrupt, ::System::Int32 interruptSwitchInIndex, ::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SWITCHOUTZENKOVYOKAI_1_OFFSET))(this, yokaiAvatar, switchOutIndex, isInterrupt, interruptSwitchInIndex, evt);
		}

		::System::Void SetZenkovYokaiCoolDownTime(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Single coolDownTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETZENKOVYOKAICOOLDOWNTIME_OFFSET))(this, yokaiAvatar, coolDownTime);
		}

		::System::Void ModifyZenkovYokaiCoolDownTime(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Single amount, ::System::Single percent, ::MoleMole::Config::PropertyModifyFunction modifyFunction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAICOOLDOWNTIME_OFFSET))(this, yokaiAvatar, amount, percent, modifyFunction);
		}

		::System::Void ModifyZenkovYokaiInStageDuration(::MoleMole::Battle::Entity* yokaiAvatar, ::System::Single amount, ::System::Single percent, ::MoleMole::Config::PropertyModifyFunction modifyFunction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_MODIFYZENKOVYOKAIINSTAGEDURATION_OFFSET))(this, yokaiAvatar, amount, percent, modifyFunction);
		}

		::System::Boolean GetFirstPriorityInStageDurationRatio(::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETFIRSTPRIORITYINSTAGEDURATIONRATIO_OFFSET))(this, ratio);
		}

		::System::Void PushZenkovYokaiSwitchOutQTE(::System::String* tag, ::System::Boolean isQTE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTQTE_OFFSET))(this, tag, isQTE);
		}

		::System::Void PopZenkovYokaiSwitchOutQTE(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTQTE_OFFSET))(this, tag);
		}

		::System::Void PushZenkovYokaiSwitchOutExQTE(::System::String* tag, ::System::Boolean isExQTE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHZENKOVYOKAISWITCHOUTEXQTE_OFFSET))(this, tag, isExQTE);
		}

		::System::Void PopZenkovYokaiSwitchOutExQTE(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPZENKOVYOKAISWITCHOUTEXQTE_OFFSET))(this, tag);
		}

		::System::Void PushMuteZenkovYokaiTag(::System::String* handlerTag, ::System::Collections::Generic::List_1<::System::String*>* muteYokaiTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PUSHMUTEZENKOVYOKAITAG_OFFSET))(this, handlerTag, muteYokaiTags);
		}

		::System::Void PopMuteZenkovYokaiTag(::System::String* handlerTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_POPMUTEZENKOVYOKAITAG_OFFSET))(this, handlerTag);
		}

		::System::Void OnPreBigSceneTeleportByReload(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET))(this, args);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITDATA_OFFSET))(this);
		}

		::System::Void InitYokaiAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_INITYOKAIAVATARINFO_OFFSET))(this);
		}

		::System::Void RefreshYokaiAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHYOKAIAVATARINFO_OFFSET))(this);
		}

		::System::Void DoRefreshYokaiAvatarInfoByDevLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYDEVLEVEL_OFFSET))(this);
		}

		::System::Void DoRefreshYokaiAvatarInfoByZenkovGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_OFFSET))(this);
		}

		::System::Void ClearYokaiAvatarInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARYOKAIAVATARINFO_OFFSET))(this);
		}

		::System::Boolean IsYokaiMuted(::Class_1_FB1F886AC36EE9C0* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_FB1F886AC36EE9C0*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_OFFSET))(this, info);
		}

		::System::Boolean IsYokaiMuted_1(::MoleMole::EntityHandle yokaiAvatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ISYOKAIMUTED_1_OFFSET))(this, yokaiAvatar);
		}

		::System::Void TickCD(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKCD_OFFSET))(this, deltaTime);
		}

		::System::Void TickInStageDuration(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TICKINSTAGEDURATION_OFFSET))(this, deltaTime);
		}

		::System::Void RefreshItemCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_REFRESHITEMCOUNT_OFFSET))(this);
		}

		::System::Void TryConsumeYokaiAvatarItem(::System::Int32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYCONSUMEYOKAIAVATARITEM_OFFSET))(this, slotID);
		}

		::System::Void FireZenkovYokaiHenshinEvt(::MoleMole::Battle::Entity* entity, ::Enum_3_5384974BE3FFE8B5 notifyType, ::Enum_3_CB57DBB7004CF282 switchOutType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Enum_3_5384974BE3FFE8B5, ::Enum_3_CB57DBB7004CF282))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_FIREZENKOVYOKAIHENSHINEVT_OFFSET))(this, entity, notifyType, switchOutType);
		}

		::System::Void SetDelayInputEnableState(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETDELAYINPUTENABLESTATE_OFFSET))(this, isEnable);
		}

		::System::Void SetControlYokaiInputEnableState(::System::Boolean isEnable, ::System::Boolean muteControlSkillA, ::System::Boolean muteControlSkillB, ::System::Boolean muteControlSkillD, ::System::Boolean muteControlSkillUltra)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_SETCONTROLYOKAIINPUTENABLESTATE_OFFSET))(this, isEnable, muteControlSkillA, muteControlSkillB, muteControlSkillD, muteControlSkillUltra);
		}

		::System::Void TrySyncYokaiAvatarPosRotToLocalAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYSYNCYOKAIAVATARPOSROTTOLOCALAVATAR_OFFSET))(this);
		}

		::System::Void OnZenkovYokaiSkillUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONZENKOVYOKAISKILLUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnKovBagSyncHandler(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_ONKOVBAGSYNCHANDLER_OFFSET))(this, args);
		}

		::System::Boolean TryHandleBeingHitEvt(::Class_1_B7E341C5F1A6F199* evt, ::UnityEngine::Vector3& hitForward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_TRYHANDLEBEINGHITEVT_OFFSET))(this, evt, hitForward);
		}

		::System::Void ApplyTriggerHitAnimatorParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_APPLYTRIGGERHITANIMATORPARAM_OFFSET))(this);
		}

		::UnityEngine::Material* GetRarityMaterial(::System::Int32 rarity)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETRARITYMATERIAL_OFFSET))(this, rarity);
		}

		::UnityEngine::Material* GetYokaiInStageDurationMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETYOKAIINSTAGEDURATIONMAT_OFFSET))(this);
		}

		::UnityEngine::Material* GetUseItemDisableMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_GETUSEITEMDISABLEMAT_OFFSET))(this);
		}

		::System::Void PreloadMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_PRELOADMATERIALS_OFFSET))(this);
		}

		::System::Void ClearMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM_CLEARMATERIALCACHE_OFFSET))(this);
		}

		static ::System::Boolean _DoRefreshYokaiAvatarInfoByZenkovGame_g__IsEntityInPreloadRuntimeDatas_50_0(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_A179366BBBE4C80D_1>* tmpDataList, ::MoleMole::EntityHandle checkEntity)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_A179366BBBE4C80D_1>*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM__DOREFRESHYOKAIAVATARINFOBYZENKOVGAME_G__ISENTITYINPRELOADRUNTIMEDATAS_50_0_OFFSET))(tmpDataList, checkEntity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
