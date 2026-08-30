#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/Client/MonoEffectManager_FieldEffectBudgetInfo.h"
#include "unitysdk/RPG/Client/MonoEffectManager_FieldEffectBudgetStrategy.h"
#include "unitysdk/RPG/Client/MonoEffectManager_HideFieldEffectReason.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1055;
class Class_1_293FF9D2EE901E33;
class Class_1_E144C29F214A8F26;
class Class_2_7CFCF5679171877C;
class Class_2_AD908255DB87849A_1;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager_EffectSpawnAsyncCallback; }
namespace RPG::Client { class MonoEffectPluginBase; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class CharacterScaleDataConfig; }
namespace RPG::GameCore { class EffectJsonConfig; }
namespace RPG::GameCore { class FieldEffectAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierBindEffectConfig; }
namespace RPG::GameCore { class MonoEffectLodConfig; }
namespace RPG::GameCore { class MonoEffectLodDetail; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define RPG_CLIENT_MONOEFFECTMANAGER_ADDENDOFTICKPLUGIN_OFFSET UNITYSDK_OFFSET(0xD766F30)
#define RPG_CLIENT_MONOEFFECTMANAGER_ADDFIELDEFFECTADAPTION_OFFSET UNITYSDK_OFFSET(0xD76A400)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLEFFECT_OFFSET UNITYSDK_OFFSET(0xD771020)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLINBATTLEEFFECTFORRESTART_OFFSET UNITYSDK_OFFSET(0xD77AE70)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLMONOEFFECTSTREAMINGITEMS_OFFSET UNITYSDK_OFFSET(0xD77A9C0)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLTARGETENTITYINVALIDEFFECT_OFFSET UNITYSDK_OFFSET(0xD77AC30)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARFIELDEFFECTADAPTION_OFFSET UNITYSDK_OFFSET(0xD76B050)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARHIDETARGET_OFFSET UNITYSDK_OFFSET(0xD77CFA0)
#define RPG_CLIENT_MONOEFFECTMANAGER_COPYTRIGGEREFFECTPARAMSREF_OFFSET UNITYSDK_OFFSET(0xD7691F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7709B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ENABLEEFFECTBYCHARACTERMASK_OFFSET UNITYSDK_OFFSET(0xD77C8F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7706E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIELDEFFECTFORCEUSELOWLOD_OFFSET UNITYSDK_OFFSET(0xD76B1B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_1_OFFSET UNITYSDK_OFFSET(0xD77C620)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD77C3E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYTARGETGO_OFFSET UNITYSDK_OFFSET(0xD77B5B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD7772F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD767350)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_1_OFFSET UNITYSDK_OFFSET(0xD77BCB0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_2_OFFSET UNITYSDK_OFFSET(0xD77C050)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_OFFSET UNITYSDK_OFFSET(0xD7773D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDTRIGGEREFFECTPARAMSBYENTITY_OFFSET UNITYSDK_OFFSET(0xD77B8B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIND_OFFSET UNITYSDK_OFFSET(0xD7724E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINISHALLMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xD77AB40)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xD775240)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0xD773D00)
#define RPG_CLIENT_MONOEFFECTMANAGER_FORCELOADEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD777BD0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETALLLODPATH_OFFSET UNITYSDK_OFFSET(0xD7734A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETCURRENTMONOEFFECTVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD76D860)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTALIASPATH_OFFSET UNITYSDK_OFFSET(0xD773810)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTENHANCEDPATH_OFFSET UNITYSDK_OFFSET(0xD7739B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTPATHLOD_OFFSET UNITYSDK_OFFSET(0xD76C5D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETFIELDEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xD76B0F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xD7721B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTFADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0xD7726B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETLASTEFFECTCREATETIMEGAP_OFFSET UNITYSDK_OFFSET(0xD772950)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETLODCOMPONENTMAP_OFFSET UNITYSDK_OFFSET(0xD773450)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETMONOEFFECTVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xD76DA50)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_1_OFFSET UNITYSDK_OFFSET(0xD769540)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xD769500)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETSURFACEEFFECTPATHBYENTITY_OFFSET UNITYSDK_OFFSET(0xD773AB0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAMSREF_OFFSET UNITYSDK_OFFSET(0xD7690A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OBSOLETE_OFFSET UNITYSDK_OFFSET(0xD769390)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xD7693F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0xD7805C0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_ENABLEFIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xD75D240)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_FIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xD76D650)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_HIDEFIELDEFFECTMODE_OFFSET UNITYSDK_OFFSET(0xD769E50)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_LASTTICKDELTATIME_OFFSET UNITYSDK_OFFSET(0xD7805A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_TIMEINSECOND_OFFSET UNITYSDK_OFFSET(0xD780590)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEALLCHARACTEREFFECTS_OFFSET UNITYSDK_OFFSET(0xD77E1E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEAVATARMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xD77CFF0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDECHARACTERFROZENFILTEREFFECTS_OFFSET UNITYSDK_OFFSET(0xD77DD30)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTBYCHARACHERMASK_OFFSET UNITYSDK_OFFSET(0xD77C830)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTSBYPATH_OFFSET UNITYSDK_OFFSET(0xD77D760)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_1_OFFSET UNITYSDK_OFFSET(0xD769740)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_OFFSET UNITYSDK_OFFSET(0xD7696D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEHIDEININTIMELINEEFFECT_OFFSET UNITYSDK_OFFSET(0xD77DB60)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEMONSTERMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xD77D200)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEORSHOWALLEFFECTS_OFFSET UNITYSDK_OFFSET(0xD77D610)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEPROPEFFECTS_OFFSET UNITYSDK_OFFSET(0xD77E770)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDETARGETMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xD77C9B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISASYNCLOADINGEFFECT_OFFSET UNITYSDK_OFFSET(0xD773350)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISATTACHEDTOTIMELINE_OFFSET UNITYSDK_OFFSET(0xD762020)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISEFFECTEXIST_OFFSET UNITYSDK_OFFSET(0xD77B0B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISHIDEFIELDENTITY_OFFSET UNITYSDK_OFFSET(0xD769FA0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISINCLEAREFFECTFLAG_OFFSET UNITYSDK_OFFSET(0xD77B060)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISNEEDRECOVERDARKTIMELINESKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xD77D410)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISPARTICLEOVERLIMIT_OFFSET UNITYSDK_OFFSET(0xD76D660)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISTARGETENTITYSCALED_OFFSET UNITYSDK_OFFSET(0xD7648E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_LOADEFFECTJSONCONFIG_OFFSET UNITYSDK_OFFSET(0xD76EE40)
#define RPG_CLIENT_MONOEFFECTMANAGER_LOADLODMONOEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD7779D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_QUERYCURRENTFRAMEPARTICLEVERTEXCOUNTINFO_OFFSET UNITYSDK_OFFSET(0xD76DD60)
#define RPG_CLIENT_MONOEFFECTMANAGER_REGISTERMONOEFFECTOBJECT_OFFSET UNITYSDK_OFFSET(0xD76DB10)
#define RPG_CLIENT_MONOEFFECTMANAGER_RELEASEREMOVEEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xD769630)
#define RPG_CLIENT_MONOEFFECTMANAGER_RELEASETRIGGEREFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xD761510)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD77A8F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_1_OFFSET UNITYSDK_OFFSET(0xD7780F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_2_OFFSET UNITYSDK_OFFSET(0xD77A810)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_OFFSET UNITYSDK_OFFSET(0xD7792F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xD77A1A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYFLAGS_OFFSET UNITYSDK_OFFSET(0xD77A380)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTIMELINEREMOVEFLAG_OFFSET UNITYSDK_OFFSET(0xD77E5B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTRIGGERPARAMSREF_OFFSET UNITYSDK_OFFSET(0xD77A040)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD778840)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xD77A450)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_1_OFFSET UNITYSDK_OFFSET(0xD77A560)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xD778CD0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEENDOFTICKPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7670C0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEMONOEFFECTSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xD778910)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECTFROMMANAGER_OFFSET UNITYSDK_OFFSET(0xD755040)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xD755480)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEUNLOADEFFECTSTREAMINGITEMS_OFFSET UNITYSDK_OFFSET(0xD779B30)
#define RPG_CLIENT_MONOEFFECTMANAGER_RESETHIDEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xD77D940)
#define RPG_CLIENT_MONOEFFECTMANAGER_RETRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xD76C990)
#define RPG_CLIENT_MONOEFFECTMANAGER_SETENTITYEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xD771720)
#define RPG_CLIENT_MONOEFFECTMANAGER_SETFIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xD76A200)
#define RPG_CLIENT_MONOEFFECTMANAGER_SETHIGHQUALITYEFFECTSON_OFFSET UNITYSDK_OFFSET(0xD773240)
#define RPG_CLIENT_MONOEFFECTMANAGER_SET_FIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xD76D640)
#define RPG_CLIENT_MONOEFFECTMANAGER_SET_LASTTICKDELTATIME_OFFSET UNITYSDK_OFFSET(0xD7805B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_SET_TIMEINSECOND_OFFSET UNITYSDK_OFFSET(0xD780580)
#define RPG_CLIENT_MONOEFFECTMANAGER_SHOWHIDEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xD77D460)
#define RPG_CLIENT_MONOEFFECTMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xD76F700)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTCONFIGSCALE_OFFSET UNITYSDK_OFFSET(0xD771F00)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xD7719C0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYGETMONOEFFECTLODCONFIG_OFFSET UNITYSDK_OFFSET(0xD76F550)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYHIDEFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xD75F8B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYREATTACHATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD77ECA0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERALLCULLEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xD7781E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERCULLEDEFFECT_OFFSET UNITYSDK_OFFSET(0xD778740)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYSETEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xD7769A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_UNLOADLODMONOEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD777AB0)
#define RPG_CLIENT_MONOEFFECTMANAGER_UNREGISTERMONOEFFECTOBJECT_OFFSET UNITYSDK_OFFSET(0xD754DA0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ADDMONOEFFECTSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xD77F8C0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ADDTOEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xD776690)
#define RPG_CLIENT_MONOEFFECTMANAGER__APPLYFIELDEFFECTADAPTION_OFFSET UNITYSDK_OFFSET(0xD76AC20)
#define RPG_CLIENT_MONOEFFECTMANAGER__ATTACHTOPLAYINGTIMELINE_OFFSET UNITYSDK_OFFSET(0xD775CD0)
#define RPG_CLIENT_MONOEFFECTMANAGER__AVATARMODIFIERHIDEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xD77F500)
#define RPG_CLIENT_MONOEFFECTMANAGER__BALANCEMONOEFFECTMAXTICKCOUNT_OFFSET UNITYSDK_OFFSET(0xD770650)
#define RPG_CLIENT_MONOEFFECTMANAGER__BEFOREFIREEFFECTLOADINSTANCEFROMPOOL_OFFSET UNITYSDK_OFFSET(0xD775D70)
#define RPG_CLIENT_MONOEFFECTMANAGER__CALCULATEFIELDEFFECTBUDGET_OFFSET UNITYSDK_OFFSET(0xD76D390)
#define RPG_CLIENT_MONOEFFECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7805D0)
#define RPG_CLIENT_MONOEFFECTMANAGER__CHECKEFFECTCULLING_OFFSET UNITYSDK_OFFSET(0xD775E30)
#define RPG_CLIENT_MONOEFFECTMANAGER__COLLECTBUDGETCONCERNFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xD76B790)
#define RPG_CLIENT_MONOEFFECTMANAGER__COMPAREFIELDEFFECTBUDGETINFOBYPRIORITY_OFFSET UNITYSDK_OFFSET(0xD76CFF0)
#define RPG_CLIENT_MONOEFFECTMANAGER__COMPARETRIGGEREFFECTPARAMSBYCREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD77FD90)
#define RPG_CLIENT_MONOEFFECTMANAGER__CREATEMANAGERGO_OFFSET UNITYSDK_OFFSET(0xD76EDB0)
#define RPG_CLIENT_MONOEFFECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD76E340)
#define RPG_CLIENT_MONOEFFECTMANAGER__DISPOSEFIELDEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xD76B660)
#define RPG_CLIENT_MONOEFFECTMANAGER__ENTITYFREEZONHIDEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xD77E040)
#define RPG_CLIENT_MONOEFFECTMANAGER__ENTITYTYPEHIDEEFFECTMASKFILTER_OFFSET UNITYSDK_OFFSET(0xD77F430)
#define RPG_CLIENT_MONOEFFECTMANAGER__FINISHATTACHTIMELINEEFFECTS_OFFSET UNITYSDK_OFFSET(0xD77FF40)
#define RPG_CLIENT_MONOEFFECTMANAGER__FINISHWAITTIMELINE_OFFSET UNITYSDK_OFFSET(0xD770130)
#define RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTLOADINSTANCEFROMPOOL_OFFSET UNITYSDK_OFFSET(0xD774450)
#define RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSPARAMSBEFOREFIRE_OFFSET UNITYSDK_OFFSET(0xD773E00)
#define RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xD773F50)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETCASTERTIMELINEOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD7803E0)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETCURRENTFIELDEFFECTBUDGETSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD76B300)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYATTACHPOINTSAFE_OFFSET UNITYSDK_OFFSET(0xD77F200)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD77ED00)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xD775740)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETFIELDEFFECTBUDGETSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD76CBF0)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETINITPOSITIONBYENTITY_OFFSET UNITYSDK_OFFSET(0xD7753E0)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETORIGINALEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD77FC40)
#define RPG_CLIENT_MONOEFFECTMANAGER__INITEFFECTGOINSTANCE_OFFSET UNITYSDK_OFFSET(0xD7749A0)
#define RPG_CLIENT_MONOEFFECTMANAGER__INITFIELDEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xD76B530)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISEFFECTOVERBUDGED_OFFSET UNITYSDK_OFFSET(0xD7787F0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISHIGHPRIORITYFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xD76D100)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISMONSTERENTITY_OFFSET UNITYSDK_OFFSET(0xD77CF30)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISTARGETMATCHTIMELINEOWNERID_OFFSET UNITYSDK_OFFSET(0xD780360)
#define RPG_CLIENT_MONOEFFECTMANAGER__LOADSTATICRESOURCES_OFFSET UNITYSDK_OFFSET(0xD76F510)
#define RPG_CLIENT_MONOEFFECTMANAGER__MAPENTITYEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xD7757D0)
#define RPG_CLIENT_MONOEFFECTMANAGER__MONSTERMODIFIERHIDEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xD77F6C0)
#define RPG_CLIENT_MONOEFFECTMANAGER__NEEDHIDEAVATARMODIFIEREFFECT_OFFSET UNITYSDK_OFFSET(0xD77CE80)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONALLFIELDEFFECTCLEAR_OFFSET UNITYSDK_OFFSET(0xD76B700)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTFINISH_OFFSET UNITYSDK_OFFSET(0xD780530)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTSTART_OFFSET UNITYSDK_OFFSET(0xD7804E0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONEFFECTASYNCLOADED_OFFSET UNITYSDK_OFFSET(0xD776150)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONTARGETENTITYMODELASYNCLOADED_OFFSET UNITYSDK_OFFSET(0xD7764E0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONTIMELINESTOPPED_OFFSET UNITYSDK_OFFSET(0xD77FE60)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONTRIGGERPARAMRELEASED_OFFSET UNITYSDK_OFFSET(0xD7760D0)
#define RPG_CLIENT_MONOEFFECTMANAGER__PARTICLEBEGINEMISSION_OFFSET UNITYSDK_OFFSET(0xD77FB40)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADDMONOEFFECTLODLOGIC_OFFSET UNITYSDK_OFFSET(0xD775840)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADVEFFECTEXTRAPARAMS_OFFSET UNITYSDK_OFFSET(0xD770450)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSLITTLEGAMEEFFECTEXTRAPARAMSBEFOREPLUGININIT_OFFSET UNITYSDK_OFFSET(0xD7768F0)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSRESIDENTMATERIALTARGETEFFECT_OFFSET UNITYSDK_OFFSET(0xD776FD0)
#define RPG_CLIENT_MONOEFFECTMANAGER__RELEASESTATICRESOURCES_OFFSET UNITYSDK_OFFSET(0xD7716E0)
#define RPG_CLIENT_MONOEFFECTMANAGER__REMOVEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xD778A80)
#define RPG_CLIENT_MONOEFFECTMANAGER__REMOVETOREMOVEEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xD770570)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYAPPLYFIELDEFFECTBUDGETSTRATEGY_OFFSET UNITYSDK_OFFSET(0xD76A020)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYATTACHTOTIMELINE_OFFSET UNITYSDK_OFFSET(0xD770280)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYCOLLECTSINGLEBUDGETCONCERNFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xD76CD80)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYAFTERLOADEFFECT_OFFSET UNITYSDK_OFFSET(0xD776770)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYBEFORELOADEFFECT_OFFSET UNITYSDK_OFFSET(0xD775650)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYGETFIELDEFFECTBUDGET_OFFSET UNITYSDK_OFFSET(0xD76B370)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYHIDEOVERBUDGETFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xD76BB20)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYSWITCHFIELDEFFECTLOD_OFFSET UNITYSDK_OFFSET(0xD76C270)
#define RPG_CLIENT_MONOEFFECTMANAGER__UNLOADONEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xD770360)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager_TypeDefinitionIndex = 69815;

	class MonoEffectManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EFFECT_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37C0);
		}
		static ::System::String** StaticGet_EFFECT_LOD0_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>** StaticGet_AdvBehaviorFlagBindEffectConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37D0);
		}
		static ::System::String** StaticGet_EFFECT_LOD_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37D8);
		}
		static ::System::String** StaticGet_Effect_LODLOW_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37E0);
		}
		static ::System::String** StaticGet_EFFECT_LOD_CONFIG_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>** StaticGet_BattleBehaviorFlagBindEffectConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37F0);
		}
		static ::System::String** StaticGet_EFFECT_CHARACTER_SCALE_DATA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x37F8);
		}
		static ::RPG::GameCore::CharacterScaleDataConfig** StaticGet_CharacterScaleDataConfig()
		{
			return (::RPG::GameCore::CharacterScaleDataConfig**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3800);
		}
		static ::System::String** StaticGet_EFFECT_LOD1_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3808);
		}
		static ::RPG::GameCore::EffectJsonConfig** StaticGet_EffectJsonConfig()
		{
			return (::RPG::GameCore::EffectJsonConfig**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3810);
		}
		static ::Class_0_16E4307DCC419505_1055** StaticGet_CustomInvisibleChecker()
		{
			return (::Class_0_16E4307DCC419505_1055**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3818);
		}
		static ::System::String** StaticGet_EFFECT_CULLING_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3820);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ForceSyncLoadEffects()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3828);
		}
		static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_TimelineHideFlags()
		{
			return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3830);
		}
		static ::System::String** StaticGet_EFFECT_PATH_SPLIT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3838);
		}
		static ::System::String** StaticGet_EFFECT_CULLING_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3840);
		}
		static ::System::String** StaticGet_EFFECT_LOD_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x3848);
		}
		static ::System::Boolean* StaticGet_IgnoreFadeoutMutexCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x1390);
		}
		static ::System::Boolean* StaticGet__FieldEffectBudgetDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x1391);
		}
		static ::System::Boolean* StaticGet_EnableLodLowEffect()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x1392);
		}
		static ::System::UInt32* StaticGet__GlobalEffectUniqueIDGenerator()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x1394);
		}
		static ::System::UInt32* StaticGet__GlobalEffectInstanceIDGenerator()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x1398);
		}
		static ::System::Int32* StaticGet_OverrideEffectLoadLod()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x139C);
		}
		static ::System::Boolean* StaticGet_OpenMonoEffectPrefabLod()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x13A0);
		}
		static ::System::Boolean* StaticGet_ForceEntityMutex()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x13A1);
		}
		static ::System::Single* StaticGet__CurrentFieldEffectTotalBudget()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x13A4);
		}
		// static const ::System::Int32 _DefaultMonoEffectMaxTickCount = 0x14; // 0x0
		// static const ::System::Int32 _DefaultMonoEffectMinTickCount = 0x3; // 0x0
		// static const ::System::Double _TickTimeBudgetWithinOneFrame; // 0x0
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _WaitEntityEffectList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _EffectList; // 0x18
		::System::Action_1<::RPG::Client::MonoEffect*>* OnRemoveEffectInstance; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Action*>>* _WaitEntityModelLoadedEffect; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _hideEffectList; // 0x30
		::UnityEngine::Playables::PlayableDirector* _AttachedTimeline; // 0x38
		::System::Diagnostics::Stopwatch* _StopWatch; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _TempToRemoveEffectList; // 0x48
		::System::Action_1<::RPG::Client::MonoEffect*>* OnFireEffectInstance; // 0x50
		::Class_1_293FF9D2EE901E33* _GoPoolMgr; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_EffectSpawnAsyncCallback*>* _ToRemoveAsyncSpawnEffectList; // 0x60
		::Collections::Pooled::PooledList_1<::System::Int32>* _TempIntList; // 0x68
		::UnityEngine::GameObject* _SEManagerGO; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3>* _EntityEffectScaleMapping; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _hideTargetEntitys; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FieldEffectAdaptionConfig*>* _FieldEffectAdaptionConfigs; // 0x88
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffectManager_EffectSpawnAsyncCallback*>* _AsyncSpawnEffectList; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _FrozenEntities; // 0x98
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _AttachTimelineEffects; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7CFCF5679171877C*>* _EffectLODComponentMapping; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginBase*>* _EndOfLateTickPlugins; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::MonoEffect*>* _ParticleSystemInsIdToMonoEffectMap; // 0xB8
		::Il2CppArray<::System::String*>* _HideEffectPaths; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EffectNameVertexCountMap; // 0xC8
		::System::Action_1<::RPG::Client::TriggerEffectParams*>* OnWillFireEffectInstance; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* _ToRemoveUniqueIdList; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoEffect*, ::System::Int32>* _CurrentMonoEffectVertexCountMap; // 0xE0
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::ParticleSystem*>* _TempPsList; // 0xE8
		::System::Action_2<::RPG::Client::TriggerEffectParams*, ::System::Boolean>* OnFireEffectSuccess; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _ToRemoveEffectList; // 0xF8
		::Il2CppArray<::RPG::GameCore::FieldHideMode>* _HideFieldEffectModeGroupSet; // 0x100
		::System::Single _TimeInSecond_k__BackingField; // 0x108
		::System::UInt32 _DelayFinishWaitTimeline; // 0x10C
		::System::Boolean _CurrentUsingHighQualityEffect; // 0x110
		::System::Boolean _HideHideInTimelineEffect; // 0x111
		::System::Boolean _ClearAllEffectFlag; // 0x112
		::System::Boolean _IsApplyingFieldEffectBudgetStrategy; // 0x113
		::System::Single _FieldEffectSoftZOffset_k__BackingField; // 0x114
		::Unity::Collections::NativeArray_1<::System::Int32> _InstIdToVertexCountMapArray; // 0x118
		::System::UInt32 _AttachedTimelineOwnerEntityID; // 0x128
		::System::UInt32 HideEffectCharacterMask; // 0x12C
		::System::UInt32 _AttachTimelineVersion; // 0x130
		::System::Int32 _DynamicMonoEffectMaxTickCount; // 0x134
		::System::Int32 _MonoEffectTickCounter; // 0x138
		::System::UInt32 _AttachTimelineVersionCounter; // 0x13C
		::RPG::Client::MonoEffectHideReason _HideEffectReason; // 0x140
		::System::Int32 _MonoEffectTickFrameGap; // 0x144
		::System::Int32 _CurrentFrame; // 0x148
		::System::Single _LastTickDeltaTime_k__BackingField; // 0x14C
		::System::Boolean _hideMonsterModifierEffect; // 0x150
		::System::Boolean _hideAvatarModifierEffect; // 0x151

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TriggerEffectParamsRef GetTriggerEffectParamsRef(::System::String* a1)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAMSREF_OFFSET))(a1);
		}

		static ::RPG::Client::TriggerEffectParamsRef CopyTriggerEffectParamsRef(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_COPYTRIGGEREFFECTPARAMSREF_OFFSET))(a1);
		}

		static ::RPG::Client::TriggerEffectParams* GetTriggerEffectParam_Obsolete(::System::String* a1)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OBSOLETE_OFFSET))(a1);
		}

		static ::RPG::Client::TriggerEffectParams* GetTriggerEffectParam(::System::String* a1)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OFFSET))(a1);
		}

		static ::System::Void ReleaseTriggerEffectParam(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RELEASETRIGGEREFFECTPARAM_OFFSET))(a1);
		}

		static ::Class_1_E144C29F214A8F26* GetRemoveEffectParam()
		{
			return ((::Class_1_E144C29F214A8F26*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_OFFSET))();
		}

		static ::Class_1_E144C29F214A8F26* GetRemoveEffectParam_1(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::UInt32 a7, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a8, ::System::Boolean a9)
		{
			return ((::Class_1_E144C29F214A8F26*(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void ReleaseRemoveEffectParam(::Class_1_E144C29F214A8F26* a1)
		{
			return ((::System::Void(*)(::Class_1_E144C29F214A8F26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RELEASEREMOVEEFFECTPARAM_OFFSET))(a1);
		}

		::System::Void HideFieldEffects(::System::Boolean a1, ::RPG::Client::MonoEffectManager_HideFieldEffectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectManager_HideFieldEffectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_OFFSET))(this, a1, a2);
		}

		::System::Void HideFieldEffects_1(::RPG::GameCore::FieldHideMode a1, ::RPG::Client::MonoEffectManager_HideFieldEffectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FieldHideMode, ::RPG::Client::MonoEffectManager_HideFieldEffectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryHideFieldEffect(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYHIDEFIELDEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean IsHideFieldEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISHIDEFIELDENTITY_OFFSET))(this);
		}

		::System::Void SetFieldEffectSoftZOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SETFIELDEFFECTSOFTZOFFSET_OFFSET))(this, a1);
		}

		::System::Void AddFieldEffectAdaption(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FieldEffectAdaptionConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FieldEffectAdaptionConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ADDFIELDEFFECTADAPTION_OFFSET))(this, a1, a2);
		}

		::System::Void ClearFieldEffectAdaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARFIELDEFFECTADAPTION_OFFSET))(this);
		}

		::RPG::GameCore::FieldEffectAdaptionConfig* GetFieldEffectAdaptionConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::FieldEffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETFIELDEFFECTADAPTIONCONFIG_OFFSET))(this, a1);
		}

		static ::System::Boolean FieldEffectForceUseLowLOD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIELDEFFECTFORCEUSELOWLOD_OFFSET))(a1);
		}

		::System::Void _InitFieldEffectConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__INITFIELDEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void _DisposeFieldEffectConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__DISPOSEFIELDEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void _ApplyFieldEffectAdaption(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FieldEffectAdaptionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FieldEffectAdaptionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__APPLYFIELDEFFECTADAPTION_OFFSET))(this, a1);
		}

		::System::Void _OnAllFieldEffectClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONALLFIELDEFFECTCLEAR_OFFSET))(this);
		}

		::System::Void _TryApplyFieldEffectBudgetStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYAPPLYFIELDEFFECTBUDGETSTRATEGY_OFFSET))(this);
		}

		::System::Void _TrySwitchFieldEffectLod(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYSWITCHFIELDEFFECTLOD_OFFSET))(this, a1);
		}

		::System::Void _TryHideOverBudgetFieldEffect(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYHIDEOVERBUDGETFIELDEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectBudgetConcernFieldEffect(::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__COLLECTBUDGETCONCERNFIELDEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _TryCollectSingleBudgetConcernFieldEffect(::RPG::Client::TriggerEffectParams* a1, ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYCOLLECTSINGLEBUDGETCONCERNFIELDEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _CompareFieldEffectBudgetInfoByPriority(::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo a1, ::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo, ::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__COMPAREFIELDEFFECTBUDGETINFOBYPRIORITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsHighPriorityFieldEffect(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISHIGHPRIORITYFIELDEFFECT_OFFSET))(this, a1);
		}

		static ::System::Boolean _TryGetFieldEffectBudget(::System::String* a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYGETFIELDEFFECTBUDGET_OFFSET))(a1, a2);
		}

		::System::Void _CalculateFieldEffectBudget(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CALCULATEFIELDEFFECTBUDGET_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy _GetFieldEffectBudgetStrategy(::System::Single a1)
		{
			return ((::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETFIELDEFFECTBUDGETSTRATEGY_OFFSET))(a1);
		}

		static ::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy _GetCurrentFieldEffectBudgetStrategy()
		{
			return ((::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETCURRENTFIELDEFFECTBUDGETSTRATEGY_OFFSET))();
		}

		::RPG::GameCore::FieldHideMode get_HideFieldEffectMode()
		{
			return ((::RPG::GameCore::FieldHideMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_HIDEFIELDEFFECTMODE_OFFSET))(this);
		}

		::System::Void set_FieldEffectSoftZOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SET_FIELDEFFECTSOFTZOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_FieldEffectSoftZOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_FIELDEFFECTSOFTZOFFSET_OFFSET))(this);
		}

		::System::Boolean get_EnableFieldEffectSoftZOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_ENABLEFIELDEFFECTSOFTZOFFSET_OFFSET))(this);
		}

		::System::Boolean IsParticleOverLimit(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISPARTICLEOVERLIMIT_OFFSET))(this, a1);
		}

		::System::Int32 GetMonoEffectVertexCount(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETMONOEFFECTVERTEXCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentMonoEffectVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETCURRENTMONOEFFECTVERTEXCOUNT_OFFSET))(this);
		}

		::System::Void RegisterMonoEffectObject(::UnityEngine::GameObject* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REGISTERMONOEFFECTOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterMonoEffectObject(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_UNREGISTERMONOEFFECTOBJECT_OFFSET))(this, a1);
		}

		::System::Void QueryCurrentFrameParticleVertexCountInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_QUERYCURRENTFRAMEPARTICLEVERTEXCOUNTINFO_OFFSET))(this);
		}

		static ::RPG::GameCore::MonoEffectLodConfig* TryGetMonoEffectLodConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::MonoEffectLodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYGETMONOEFFECTLODCONFIG_OFFSET))(a1);
		}

		static ::System::Void LoadEffectJsonConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_LOADEFFECTJSONCONFIG_OFFSET))();
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void _UnloadOneMonoEffect(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__UNLOADONEMONOEFFECT_OFFSET))(this, a1);
		}

		::System::Void _RemoveToRemoveEffectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__REMOVETOREMOVEEFFECTLIST_OFFSET))(this);
		}

		::System::Void _BalanceMonoEffectMaxTickCount(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__BALANCEMONOEFFECTMAXTICKCOUNT_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetEntityEffectScale(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SETENTITYEFFECTSCALE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 TryGetEntityEffectScale(::RPG::Client::MonoEffect* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTSCALE_OFFSET))(this, a1, a2);
		}

		::System::Single TryGetEntityEffectConfigScale(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTCONFIGSCALE_OFFSET))(this, a1);
		}

		::System::Boolean IsTargetEntityScaled(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISTARGETENTITYSCALED_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* GetFirstActiveEffect(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTACTIVEEFFECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffect* GetFirstFadeOutEffect(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTFADEOUTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetLastEffectCreateTimeGap(::System::String* a1, ::System::Single& a2, ::System::Int32& a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Int32&, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETLASTEFFECTCREATETIMEGAP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetHighQualityEffectsOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SETHIGHQUALITYEFFECTSON_OFFSET))(this, a1);
		}

		::System::Boolean IsAsyncLoadingEffect(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISASYNCLOADINGEFFECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7CFCF5679171877C*>* GetLodComponentMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7CFCF5679171877C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETLODCOMPONENTMAP_OFFSET))(this);
		}

		::System::Void AddEndOfTickPlugin(::RPG::Client::MonoEffectPluginBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ADDENDOFTICKPLUGIN_OFFSET))(this, a1);
		}

		::System::Void RemoveEndOfTickPlugin(::RPG::Client::MonoEffectPluginBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEENDOFTICKPLUGIN_OFFSET))(this, a1);
		}

		::System::Boolean IsAttachedToTimeline(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISATTACHEDTOTIMELINE_OFFSET))(this, a1);
		}

		static ::System::String* GetEffectPathLOD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTPATHLOD_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetAllLodPath(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETALLLODPATH_OFFSET))(a1);
		}

		static ::System::String* GetEffectAliasPath(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTALIASPATH_OFFSET))(a1, a2);
		}

		static ::System::String* GetEffectEnhancedPath(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTENHANCEDPATH_OFFSET))(a1, a2);
		}

		::System::String* GetSurfaceEffectPathByEntity(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETSURFACEEFFECTPATHBYENTITY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffect* FireEffect(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECT_OFFSET))(this, a1);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECTASYNC_OFFSET))(this, a1);
		}

		::System::Boolean _FireEffectPreProcessTargetEntity(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSTARGETENTITY_OFFSET))(this, a1);
		}

		::System::Void _FireEffectPreProcessParamsBeforeFire(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSPARAMSBEFOREFIRE_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* _FireEffectLoadInstanceFromPool(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTLOADINSTANCEFROMPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void _BeforeFireEffectLoadInstanceFromPool(::RPG::Client::TriggerEffectParams* a1, ::System::String*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__BEFOREFIREEFFECTLOADINSTANCEFROMPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTriggerParamReleased(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONTRIGGERPARAMRELEASED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEffectAsyncLoaded(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONEFFECTASYNCLOADED_OFFSET))(this, a1);
		}

		::System::Void _OnTargetEntityModelAsyncLoaded(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONTARGETENTITYMODELASYNCLOADED_OFFSET))(this, a1);
		}

		::System::Boolean _InitEffectGoInstance(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__INITEFFECTGOINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _ProcessAdvEffectExtraParams(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADVEFFECTEXTRAPARAMS_OFFSET))(this, a1);
		}

		::System::Void _ProcessResidentMaterialTargetEffect(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSRESIDENTMATERIALTARGETEFFECT_OFFSET))(this, a1);
		}

		::System::Void _ProcessLittleGameEffectExtraParamsBeforePluginInit(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSLITTLEGAMEEFFECTEXTRAPARAMSBEFOREPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void LoadLODMonoEffectByUniqueID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_LOADLODMONOEFFECTBYUNIQUEID_OFFSET))(this, a1, a2);
		}

		::System::Void UnLoadLODMonoEffectByUniqueID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_UNLOADLODMONOEFFECTBYUNIQUEID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffect* ForceLoadEffectByUniqueName(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FORCELOADEFFECTBYUNIQUENAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryRecoverAllCulledEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERALLCULLEDEFFECTS_OFFSET))(this);
		}

		::System::Void TryRecoverCulledEffect(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERCULLEDEFFECT_OFFSET))(this, a1);
		}

		::System::Void RetriggerEffect(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RETRIGGEREFFECT_OFFSET))(this, a1);
		}

		::System::Void RemoveOneMonoEffect(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean RemoveOneMonoEffectFromManager(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECTFROMMANAGER_OFFSET))(this, a1);
		}

		::System::Boolean _RemoveEffectFilter(::Class_1_E144C29F214A8F26* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::UInt32 a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__REMOVEEFFECTFILTER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean RemoveEffect(::Class_1_E144C29F214A8F26* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveEffectByTriggerParamsRef(::RPG::Client::TriggerEffectParamsRef a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTRIGGERPARAMSREF_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveEffectByEntity(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a9, ::System::Boolean a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYENTITY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void RemoveEffectByFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYFLAGS_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveEffectByUniqueID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUEID_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveEffectByUniqueName(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUENAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveEffect_1(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean RemoveAsyncLoadingEffect(::Class_1_E144C29F214A8F26* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean RemoveAsyncLoadingEffect_1(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RemoveAsyncLoadingEffect_2(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_2_OFFSET))(this, a1);
		}

		::System::Boolean RemoveAsyncLoadingEffectByUniqueID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECTBYUNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean RemoveUnloadEffectStreamingItems(::Class_1_E144C29F214A8F26* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEUNLOADEFFECTSTREAMINGITEMS_OFFSET))(this, a1);
		}

		::System::Void RemoveMonoEffectStreamingItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEMONOEFFECTSTREAMINGITEM_OFFSET))(this, a1);
		}

		::System::Void ClearAllMonoEffectStreamingItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLMONOEFFECTSTREAMINGITEMS_OFFSET))(this);
		}

		::System::Void FinishAllModifierAttachedEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINISHALLMODIFIERATTACHEDEFFECT_OFFSET))(this);
		}

		::System::Void ClearAllTargetEntityInvalidEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLTARGETENTITYINVALIDEFFECT_OFFSET))(this);
		}

		::System::Void ClearAllInBattleEffectForRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLINBATTLEEFFECTFORRESTART_OFFSET))(this);
		}

		::System::Void ClearAllEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean IsInClearEffectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISINCLEAREFFECTFLAG_OFFSET))(this);
		}

		::System::Boolean IsEffectExist(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISEFFECTEXIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::Class_2_AD908255DB87849A_1* Find(::System::String* a1)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIND_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* FindEffectByUniqueName(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUENAME_OFFSET))(this, a1, a2);
		}

		::Class_2_AD908255DB87849A_1* FindEffectByTargetGo(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYTARGETGO_OFFSET))(this, a1, a2);
		}

		::Class_2_AD908255DB87849A_1* FindEffectsByEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void FindTriggerEffectParamsByEntity(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParams*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDTRIGGEREFFECTPARAMSBYENTITY_OFFSET))(this, a1, a2);
		}

		::Class_2_AD908255DB87849A_1* FindEffectsByEntity_1(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_1_OFFSET))(this, a1, a2, a3);
		}

		::Class_2_AD908255DB87849A_1* FindEffectsByEntity_2(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_2_OFFSET))(this, a1, a2, a3);
		}

		::Class_2_AD908255DB87849A_1* FindEffectByAttachPoint(::System::String* a1)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_OFFSET))(this, a1);
		}

		::Class_2_AD908255DB87849A_1* FindEffectByAttachPoint_1(::UnityEngine::Transform* a1)
		{
			return ((::Class_2_AD908255DB87849A_1*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_1_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* FindEffectByUniqueID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void HideEffectByCharacherMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTBYCHARACHERMASK_OFFSET))(this, a1);
		}

		::System::Void EnableEffectByCharacterMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ENABLEEFFECTBYCHARACTERMASK_OFFSET))(this, a1);
		}

		::System::Void HideTargetModifierAttachedEffect(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDETARGETMODIFIERATTACHEDEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearHideTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARHIDETARGET_OFFSET))(this);
		}

		::System::Void HideAvatarModifierAttachedEffect(::System::Boolean a1, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEAVATARMODIFIERATTACHEDEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void HideMonsterModifierAttachedEffect(::System::Boolean a1, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEMONSTERMODIFIERATTACHEDEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsNeedRecoverDarkTimelineSkillEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISNEEDRECOVERDARKTIMELINESKILLEFFECT_OFFSET))(this);
		}

		::System::Void ShowHidedEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SHOWHIDEDEFFECTS_OFFSET))(this);
		}

		::System::Void HideOrShowAllEffects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEORSHOWALLEFFECTS_OFFSET))(this, a1);
		}

		::System::Void HideEffectsByPath(::Il2CppArray<::System::String*>* a1, ::RPG::Client::MonoEffectHideReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTSBYPATH_OFFSET))(this, a1, a2);
		}

		::System::Void ResetHideEffectByPath(::Il2CppArray<::System::String*>* a1, ::RPG::Client::MonoEffectHideReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RESETHIDEEFFECTBYPATH_OFFSET))(this, a1, a2);
		}

		::System::Void HideHideInInTimelineEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEHIDEININTIMELINEEFFECT_OFFSET))(this, a1);
		}

		::System::Void HideCharacterFrozenFilterEffects(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDECHARACTERFROZENFILTEREFFECTS_OFFSET))(this, a1, a2);
		}

		::System::Void HideAllCharacterEffects(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::Client::MonoEffectHideReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEALLCHARACTEREFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveEffectByTimelineRemoveFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTIMELINEREMOVEFLAG_OFFSET))(this);
		}

		::System::Void HidePropEffects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEPROPEFFECTS_OFFSET))(this, a1);
		}

		::System::Void TryReattachAttachPoint(::RPG::Client::TriggerEffectParams* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYREATTACHATTACHPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void _TryGetAttachPointFromEntityBeforeLoadEffect(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYBEFORELOADEFFECT_OFFSET))(this, a1);
		}

		::System::Void _TryGetAttachPointFromEntityAfterLoadEffect(::RPG::Client::TriggerEffectParams* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYAFTERLOADEFFECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* _GetEntityAttachPointSafe(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYATTACHPOINTSAFE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* _GetEntityEffectAttachPoint(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::MonoEffect* a3, ::System::String* a4, ::System::String*& a5)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTATTACHPOINT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 _GetInitPositionByEntity(::RPG::GameCore::GameEntity* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETINITPOSITIONBYENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _AddToEffectList(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ADDTOEFFECTLIST_OFFSET))(this, a1);
		}

		::System::Boolean _EntityTypeHideEffectMaskFilter(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ENTITYTYPEHIDEEFFECTMASKFILTER_OFFSET))(this, a1);
		}

		::System::Boolean _NeedHideAvatarModifierEffect(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__NEEDHIDEAVATARMODIFIEREFFECT_OFFSET))(this, a1);
		}

		::System::Boolean _IsMonsterEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISMONSTERENTITY_OFFSET))(this, a1);
		}

		::System::Boolean _AvatarModifierHideEffectFilter(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__AVATARMODIFIERHIDEEFFECTFILTER_OFFSET))(this, a1);
		}

		::System::Boolean _MonsterModifierHideEffectFilter(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__MONSTERMODIFIERHIDEEFFECTFILTER_OFFSET))(this, a1);
		}

		::System::Boolean _EntityFreezonHideEffectFilter(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ENTITYFREEZONHIDEEFFECTFILTER_OFFSET))(this, a1, a2);
		}

		::System::Void TrySetEffectEnable(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYSETEFFECTENABLE_OFFSET))(this, a1);
		}

		::System::Void _CreateManagerGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CREATEMANAGERGO_OFFSET))(this);
		}

		::System::String* _GetEntityEffectName(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTNAME_OFFSET))(this, a1, a2);
		}

		::System::String* _MapEntityEffectName(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__MAPENTITYEFFECTNAME_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadStaticResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__LOADSTATICRESOURCES_OFFSET))(this);
		}

		::System::Void _ReleaseStaticResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__RELEASESTATICRESOURCES_OFFSET))(this);
		}

		::System::Boolean _ProcessAddMonoEffectLodLogic(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADDMONOEFFECTLODLOGIC_OFFSET))(this, a1);
		}

		::System::Void _AddMonoEffectStreamingItem(::RPG::Client::TriggerEffectParams* a1, ::RPG::GameCore::MonoEffectLodDetail* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::GameCore::MonoEffectLodDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ADDMONOEFFECTSTREAMINGITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _ParticleBeginEmission(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PARTICLEBEGINEMISSION_OFFSET))(this, a1);
		}

		::System::Boolean _CheckEffectCulling(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CHECKEFFECTCULLING_OFFSET))(this, a1, a2);
		}

		::System::String* _GetOriginalEffectPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETORIGINALEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Boolean _IsEffectOverBudged(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISEFFECTOVERBUDGED_OFFSET))(this, a1);
		}

		::System::Int32 _CompareTriggerEffectParamsByCreateTimeStamp(::RPG::Client::TriggerEffectParams* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__COMPARETRIGGEREFFECTPARAMSBYCREATETIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _AttachToPlayingTimeline()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ATTACHTOPLAYINGTIMELINE_OFFSET))(this);
		}

		::System::Boolean _TryAttachToTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYATTACHTOTIMELINE_OFFSET))(this);
		}

		::System::Void _OnTimelineStopped(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONTIMELINESTOPPED_OFFSET))(this, a1);
		}

		::System::Void _FinishWaitTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FINISHWAITTIMELINE_OFFSET))(this);
		}

		::System::Void _FinishAttachTimelineEffects(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FINISHATTACHTIMELINEEFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsTargetMatchTimelineOwnerID(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISTARGETMATCHTIMELINEOWNERID_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetCasterTimelineOwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETCASTERTIMELINEOWNERENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCameraCloseupShotStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTSTART_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCameraCloseupShotFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTFINISH_OFFSET))(this, a1);
		}

		::System::Void set_TimeInSecond(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SET_TIMEINSECOND_OFFSET))(this, a1);
		}

		::System::Single get_TimeInSecond()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_TIMEINSECOND_OFFSET))(this);
		}

		::System::Single get_LastTickDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_LASTTICKDELTATIME_OFFSET))(this);
		}

		::System::Void set_LastTickDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SET_LASTTICKDELTATIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* get_EffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_EFFECTLIST_OFFSET))(this);
		}
	};
}
