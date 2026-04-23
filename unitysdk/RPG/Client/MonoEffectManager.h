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

class Class_0_16E4307DCC419505_909;
class Class_1_E144C29F214A8F26;
class Class_1_EA7DB942B013E54C;
class Class_2_7CFCF5679171877C;
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

#define RPG_CLIENT_MONOEFFECTMANAGER_ADDENDOFTICKPLUGIN_OFFSET UNITYSDK_OFFSET(0xA94A720)
#define RPG_CLIENT_MONOEFFECTMANAGER_ADDFIELDEFFECTADAPTION_OFFSET UNITYSDK_OFFSET(0xA942740)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLEFFECT_OFFSET UNITYSDK_OFFSET(0xA948430)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLINBATTLEEFFECTFORRESTART_OFFSET UNITYSDK_OFFSET(0xA951FF0)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLMONOEFFECTSTREAMINGITEMS_OFFSET UNITYSDK_OFFSET(0xA951B40)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLTARGETENTITYINVALIDEFFECT_OFFSET UNITYSDK_OFFSET(0xA951E40)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARFIELDEFFECTADAPTION_OFFSET UNITYSDK_OFFSET(0xA942A10)
#define RPG_CLIENT_MONOEFFECTMANAGER_CLEARHIDETARGET_OFFSET UNITYSDK_OFFSET(0xA953B20)
#define RPG_CLIENT_MONOEFFECTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA947DF0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ENABLEEFFECTBYCHARACTERMASK_OFFSET UNITYSDK_OFFSET(0xA953590)
#define RPG_CLIENT_MONOEFFECTMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA947BD0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIELDEFFECTFORCEUSELOWLOD_OFFSET UNITYSDK_OFFSET(0xA942AB0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_1_OFFSET UNITYSDK_OFFSET(0xA953340)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA953180)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYTARGETGO_OFFSET UNITYSDK_OFFSET(0xA952920)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA94E0C0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA9526A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_1_OFFSET UNITYSDK_OFFSET(0xA952BB0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_2_OFFSET UNITYSDK_OFFSET(0xA952EA0)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_OFFSET UNITYSDK_OFFSET(0xA94E180)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIND_OFFSET UNITYSDK_OFFSET(0xA949820)
#define RPG_CLIENT_MONOEFFECTMANAGER_FINISHALLMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA951D70)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xA94C380)
#define RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0xA94B020)
#define RPG_CLIENT_MONOEFFECTMANAGER_FORCELOADEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA94E980)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETALLLODPATH_OFFSET UNITYSDK_OFFSET(0xA94A840)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETCURRENTMONOEFFECTVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA944E00)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTALIASPATH_OFFSET UNITYSDK_OFFSET(0xA94ABC0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTENHANCEDPATH_OFFSET UNITYSDK_OFFSET(0xA94AD10)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTPATHLOD_OFFSET UNITYSDK_OFFSET(0xA943D00)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETFIELDEFFECTADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA942950)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xA949550)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTFADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0xA949980)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETLASTEFFECTCREATETIMEGAP_OFFSET UNITYSDK_OFFSET(0xA949BD0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETLODCOMPONENTMAP_OFFSET UNITYSDK_OFFSET(0xA94A6D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETMONOEFFECTVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA945040)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_1_OFFSET UNITYSDK_OFFSET(0xA941930)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xA9418F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETSURFACEEFFECTPATHBYENTITY_OFFSET UNITYSDK_OFFSET(0xA94AE20)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAMSREF_OFFSET UNITYSDK_OFFSET(0xA941630)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OBSOLETE_OFFSET UNITYSDK_OFFSET(0xA941780)
#define RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xA9417E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_EFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA956A20)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_ENABLEFIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xA9367C0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_FIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xA944CD0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_HIDEFIELDEFFECTMODE_OFFSET UNITYSDK_OFFSET(0xA9421D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_LASTTICKDELTATIME_OFFSET UNITYSDK_OFFSET(0xA956A00)
#define RPG_CLIENT_MONOEFFECTMANAGER_GET_TIMEINSECOND_OFFSET UNITYSDK_OFFSET(0xA9569F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEALLCHARACTEREFFECTS_OFFSET UNITYSDK_OFFSET(0xA954B60)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEAVATARMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA953B70)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDECHARACTERFROZENFILTEREFFECTS_OFFSET UNITYSDK_OFFSET(0xA9546F0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTBYCHARACHERMASK_OFFSET UNITYSDK_OFFSET(0xA9534E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTSBYPATH_OFFSET UNITYSDK_OFFSET(0xA9541B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_1_OFFSET UNITYSDK_OFFSET(0xA941B30)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_OFFSET UNITYSDK_OFFSET(0xA941AC0)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEHIDEININTIMELINEEFFECT_OFFSET UNITYSDK_OFFSET(0xA954530)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEMONSTERMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA953D10)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEORSHOWALLEFFECTS_OFFSET UNITYSDK_OFFSET(0xA954080)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDEPROPEFFECTS_OFFSET UNITYSDK_OFFSET(0xA955050)
#define RPG_CLIENT_MONOEFFECTMANAGER_HIDETARGETMODIFIERATTACHEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA953640)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISASYNCLOADINGEFFECT_OFFSET UNITYSDK_OFFSET(0xA94A5A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISATTACHEDTOTIMELINE_OFFSET UNITYSDK_OFFSET(0xA93B330)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISEFFECTEXIST_OFFSET UNITYSDK_OFFSET(0xA9521A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISHIDEFIELDENTITY_OFFSET UNITYSDK_OFFSET(0xA942320)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISINCLEAREFFECTFLAG_OFFSET UNITYSDK_OFFSET(0xA952150)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISNEEDRECOVERDARKTIMELINESKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xA953EB0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISPARTICLEOVERLIMIT_OFFSET UNITYSDK_OFFSET(0xA944CE0)
#define RPG_CLIENT_MONOEFFECTMANAGER_ISTARGETENTITYSCALED_OFFSET UNITYSDK_OFFSET(0xA93D830)
#define RPG_CLIENT_MONOEFFECTMANAGER_LOADEFFECTJSONCONFIG_OFFSET UNITYSDK_OFFSET(0xA9464D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_LOADLODMONOEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA94E710)
#define RPG_CLIENT_MONOEFFECTMANAGER_QUERYCURRENTFRAMEPARTICLEVERTEXCOUNTINFO_OFFSET UNITYSDK_OFFSET(0xA945370)
#define RPG_CLIENT_MONOEFFECTMANAGER_REGISTERMONOEFFECTOBJECT_OFFSET UNITYSDK_OFFSET(0xA945130)
#define RPG_CLIENT_MONOEFFECTMANAGER_RELEASEREMOVEEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xA941A20)
#define RPG_CLIENT_MONOEFFECTMANAGER_RELEASETRIGGEREFFECTPARAM_OFFSET UNITYSDK_OFFSET(0xA93A910)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA9519E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_1_OFFSET UNITYSDK_OFFSET(0xA94EF00)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_2_OFFSET UNITYSDK_OFFSET(0xA951870)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_OFFSET UNITYSDK_OFFSET(0xA9500E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYENTITY_OFFSET UNITYSDK_OFFSET(0xA950FD0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYFLAGS_OFFSET UNITYSDK_OFFSET(0xA951230)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTIMELINEREMOVEFLAG_OFFSET UNITYSDK_OFFSET(0xA954EE0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTRIGGERPARAMSREF_OFFSET UNITYSDK_OFFSET(0xA950E00)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA94F5D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA9513A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_1_OFFSET UNITYSDK_OFFSET(0xA951530)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xA94FAE0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEENDOFTICKPLUGIN_OFFSET UNITYSDK_OFFSET(0xA94A7B0)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEMONOEFFECTSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xA94F740)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECTFROMMANAGER_OFFSET UNITYSDK_OFFSET(0xA92F610)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xA92FA50)
#define RPG_CLIENT_MONOEFFECTMANAGER_REMOVEUNLOADEFFECTSTREAMINGITEMS_OFFSET UNITYSDK_OFFSET(0xA950900)
#define RPG_CLIENT_MONOEFFECTMANAGER_RESETHIDEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xA954350)
#define RPG_CLIENT_MONOEFFECTMANAGER_RETRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xA944080)
#define RPG_CLIENT_MONOEFFECTMANAGER_SETENTITYEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xA948B40)
#define RPG_CLIENT_MONOEFFECTMANAGER_SETFIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xA942590)
#define RPG_CLIENT_MONOEFFECTMANAGER_SETHIGHQUALITYEFFECTSON_OFFSET UNITYSDK_OFFSET(0xA94A4A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_SET_FIELDEFFECTSOFTZOFFSET_OFFSET UNITYSDK_OFFSET(0xA944CC0)
#define RPG_CLIENT_MONOEFFECTMANAGER_SET_LASTTICKDELTATIME_OFFSET UNITYSDK_OFFSET(0xA956A10)
#define RPG_CLIENT_MONOEFFECTMANAGER_SET_TIMEINSECOND_OFFSET UNITYSDK_OFFSET(0xA9569E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_SHOWHIDEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xA953F00)
#define RPG_CLIENT_MONOEFFECTMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xA946DA0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTCONFIGSCALE_OFFSET UNITYSDK_OFFSET(0xA949300)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xA948DF0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYGETMONOEFFECTLODCONFIG_OFFSET UNITYSDK_OFFSET(0xA946BF0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYHIDEFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xA938F50)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYREATTACHATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA955500)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERALLCULLEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xA94F080)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERCULLEDEFFECT_OFFSET UNITYSDK_OFFSET(0xA94F4D0)
#define RPG_CLIENT_MONOEFFECTMANAGER_TRYSETEFFECTENABLE_OFFSET UNITYSDK_OFFSET(0xA94D8A0)
#define RPG_CLIENT_MONOEFFECTMANAGER_UNLOADLODMONOEFFECTBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA94E830)
#define RPG_CLIENT_MONOEFFECTMANAGER_UNREGISTERMONOEFFECTOBJECT_OFFSET UNITYSDK_OFFSET(0xA92F1D0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ADDMONOEFFECTSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0xA955F80)
#define RPG_CLIENT_MONOEFFECTMANAGER__ADDTOEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA94D5F0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ATTACHTOPLAYINGTIMELINE_OFFSET UNITYSDK_OFFSET(0xA94CD80)
#define RPG_CLIENT_MONOEFFECTMANAGER__AVATARMODIFIERHIDEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xA955C00)
#define RPG_CLIENT_MONOEFFECTMANAGER__BALANCEMONOEFFECTMAXTICKCOUNT_OFFSET UNITYSDK_OFFSET(0xA947B40)
#define RPG_CLIENT_MONOEFFECTMANAGER__BEFOREFIREEFFECTLOADINSTANCEFROMPOOL_OFFSET UNITYSDK_OFFSET(0xA94CE10)
#define RPG_CLIENT_MONOEFFECTMANAGER__CALCULATEFIELDEFFECTBUDGET_OFFSET UNITYSDK_OFFSET(0xA944A10)
#define RPG_CLIENT_MONOEFFECTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA956A30)
#define RPG_CLIENT_MONOEFFECTMANAGER__CHECKEFFECTCULLING_OFFSET UNITYSDK_OFFSET(0xA94CED0)
#define RPG_CLIENT_MONOEFFECTMANAGER__COLLECTBUDGETCONCERNFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xA9430B0)
#define RPG_CLIENT_MONOEFFECTMANAGER__COMPAREFIELDEFFECTBUDGETINFOBYPRIORITY_OFFSET UNITYSDK_OFFSET(0xA944690)
#define RPG_CLIENT_MONOEFFECTMANAGER__COMPARETRIGGEREFFECTPARAMSBYCREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA956480)
#define RPG_CLIENT_MONOEFFECTMANAGER__CREATEMANAGERGO_OFFSET UNITYSDK_OFFSET(0xA946440)
#define RPG_CLIENT_MONOEFFECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9459B0)
#define RPG_CLIENT_MONOEFFECTMANAGER__DISPOSEFIELDEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xA942F70)
#define RPG_CLIENT_MONOEFFECTMANAGER__ENTITYFREEZONHIDEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xA9549C0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ENTITYTYPEHIDEEFFECTMASKFILTER_OFFSET UNITYSDK_OFFSET(0xA955B30)
#define RPG_CLIENT_MONOEFFECTMANAGER__FINISHATTACHTIMELINEEFFECTS_OFFSET UNITYSDK_OFFSET(0xA956620)
#define RPG_CLIENT_MONOEFFECTMANAGER__FINISHWAITTIMELINE_OFFSET UNITYSDK_OFFSET(0xA947650)
#define RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTLOADINSTANCEFROMPOOL_OFFSET UNITYSDK_OFFSET(0xA94B6B0)
#define RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSPARAMSBEFOREFIRE_OFFSET UNITYSDK_OFFSET(0xA94B100)
#define RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA94B250)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETCURRENTFIELDEFFECTBUDGETSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA942C00)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYATTACHPOINTSAFE_OFFSET UNITYSDK_OFFSET(0xA955900)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA955560)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xA94C860)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETFIELDEFFECTBUDGETSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA9442F0)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETINITPOSITIONBYENTITY_OFFSET UNITYSDK_OFFSET(0xA94C500)
#define RPG_CLIENT_MONOEFFECTMANAGER__GETORIGINALEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xA956330)
#define RPG_CLIENT_MONOEFFECTMANAGER__INITEFFECTGOINSTANCE_OFFSET UNITYSDK_OFFSET(0xA94BB80)
#define RPG_CLIENT_MONOEFFECTMANAGER__INITFIELDEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xA942E40)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISAVATARENTITY_OFFSET UNITYSDK_OFFSET(0xA953A40)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISEFFECTOVERBUDGED_OFFSET UNITYSDK_OFFSET(0xA94F580)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISHIGHPRIORITYFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xA9447A0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ISMONSTERENTITY_OFFSET UNITYSDK_OFFSET(0xA953AB0)
#define RPG_CLIENT_MONOEFFECTMANAGER__LOADSTATICRESOURCES_OFFSET UNITYSDK_OFFSET(0xA946BB0)
#define RPG_CLIENT_MONOEFFECTMANAGER__MONSTERMODIFIERHIDEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xA955D80)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONALLFIELDEFFECTCLEAR_OFFSET UNITYSDK_OFFSET(0xA943020)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTFINISH_OFFSET UNITYSDK_OFFSET(0xA956990)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTSTART_OFFSET UNITYSDK_OFFSET(0xA956940)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONEFFECTASYNCLOADED_OFFSET UNITYSDK_OFFSET(0xA94D1A0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONTARGETENTITYMODELASYNCLOADED_OFFSET UNITYSDK_OFFSET(0xA94D4C0)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONTIMELINESTOPPED_OFFSET UNITYSDK_OFFSET(0xA956550)
#define RPG_CLIENT_MONOEFFECTMANAGER__ONTRIGGERPARAMRELEASED_OFFSET UNITYSDK_OFFSET(0xA94D120)
#define RPG_CLIENT_MONOEFFECTMANAGER__PARTICLEBEGINEMISSION_OFFSET UNITYSDK_OFFSET(0xA956230)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADDMONOEFFECTLODLOGIC_OFFSET UNITYSDK_OFFSET(0xA94C8F0)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADVEFFECTEXTRAPARAMS_OFFSET UNITYSDK_OFFSET(0xA947960)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSLITTLEGAMEEFFECTEXTRAPARAMSBEFOREPLUGININIT_OFFSET UNITYSDK_OFFSET(0xA94D7F0)
#define RPG_CLIENT_MONOEFFECTMANAGER__PROCESSRESIDENTMATERIALTARGETEFFECT_OFFSET UNITYSDK_OFFSET(0xA94DDC0)
#define RPG_CLIENT_MONOEFFECTMANAGER__RELEASESTATICRESOURCES_OFFSET UNITYSDK_OFFSET(0xA948B00)
#define RPG_CLIENT_MONOEFFECTMANAGER__REMOVEEFFECTFILTER_OFFSET UNITYSDK_OFFSET(0xA94F900)
#define RPG_CLIENT_MONOEFFECTMANAGER__REMOVETOREMOVEEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xA947A80)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYAPPLYFIELDEFFECTBUDGETSTRATEGY_OFFSET UNITYSDK_OFFSET(0xA9423B0)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYATTACHTOTIMELINE_OFFSET UNITYSDK_OFFSET(0xA9477A0)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYCOLLECTSINGLEBUDGETCONCERNFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xA944470)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYAFTERLOADEFFECT_OFFSET UNITYSDK_OFFSET(0xA94D670)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYBEFORELOADEFFECT_OFFSET UNITYSDK_OFFSET(0xA94C770)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYGETFIELDEFFECTBUDGET_OFFSET UNITYSDK_OFFSET(0xA942C70)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYHIDEOVERBUDGETFIELDEFFECT_OFFSET UNITYSDK_OFFSET(0xA943440)
#define RPG_CLIENT_MONOEFFECTMANAGER__TRYSWITCHFIELDEFFECTLOD_OFFSET UNITYSDK_OFFSET(0xA943A70)
#define RPG_CLIENT_MONOEFFECTMANAGER__UNLOADONEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xA947880)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager_TypeDefinitionIndex = 64382;

	class MonoEffectManager : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_909** StaticGet_CustomInvisibleChecker()
		{
			return (::Class_0_16E4307DCC419505_909**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE60);
		}
		static ::System::String** StaticGet_EFFECT_CULLING_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE68);
		}
		static ::System::String** StaticGet_Effect_LODLOW_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE70);
		}
		static ::System::String** StaticGet_EFFECT_CHARACTER_SCALE_DATA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE78);
		}
		static ::System::String** StaticGet_EFFECT_LOD0_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE80);
		}
		static ::System::String** StaticGet_EFFECT_LOD1_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE88);
		}
		static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_TimelineHideFlags()
		{
			return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE90);
		}
		static ::System::String** StaticGet_EFFECT_PATH_SPLIT()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBE98);
		}
		static ::System::String** StaticGet_EFFECT_CULLING_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEA0);
		}
		static ::RPG::GameCore::EffectJsonConfig** StaticGet_EffectJsonConfig()
		{
			return (::RPG::GameCore::EffectJsonConfig**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>** StaticGet_AdvBehaviorFlagBindEffectConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEB0);
		}
		static ::System::String** StaticGet_EFFECT_LOD_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEB8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>** StaticGet_BattleBehaviorFlagBindEffectConfigMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ModifierBehaviorFlag, ::RPG::GameCore::ModifierBindEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEC0);
		}
		static ::RPG::GameCore::CharacterScaleDataConfig** StaticGet_CharacterScaleDataConfig()
		{
			return (::RPG::GameCore::CharacterScaleDataConfig**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEC8);
		}
		static ::System::String** StaticGet_EFFECT_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBED0);
		}
		static ::System::String** StaticGet_EFFECT_LOD_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBED8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ForceSyncLoadEffects()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEE0);
		}
		static ::System::String** StaticGet_EFFECT_LOD_CONFIG_SUFFIX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0xBEE8);
		}
		static ::System::Boolean* StaticGet_IgnoreFadeoutMutexCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4750);
		}
		static ::System::Boolean* StaticGet_ForceEntityMutex()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4751);
		}
		static ::System::Single* StaticGet__CurrentFieldEffectTotalBudget()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4754);
		}
		static ::System::Int32* StaticGet_OverrideEffectLoadLod()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4758);
		}
		static ::System::UInt32* StaticGet__GlobalEffectUniqueIDGenerator()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x475C);
		}
		static ::System::Boolean* StaticGet_OpenMonoEffectPrefabLod()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4760);
		}
		static ::System::Boolean* StaticGet__FieldEffectBudgetDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4761);
		}
		static ::System::Boolean* StaticGet_EnableLodLowEffect()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4762);
		}
		static ::System::UInt32* StaticGet__GlobalEffectInstanceIDGenerator()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectManager_TypeDefinitionIndex)->GetStaticField(0x4764);
		}
		// static const ::System::Int32 _DefaultMonoEffectMaxTickCount = 0x14; // 0x0
		// static const ::System::Int32 _DefaultMonoEffectMinTickCount = 0x3; // 0x0
		// static const ::System::Double _TickTimeBudgetWithinOneFrame; // 0x0
		::Class_1_EA7DB942B013E54C* _GoPoolMgr; // 0x10
		::UnityEngine::GameObject* _SEManagerGO; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _AttachTimelineEffects; // 0x20
		::Collections::Pooled::PooledList_1<::System::Int32>* _TempIntList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _findEffectList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _hideEffectList; // 0x38
		::UnityEngine::Playables::PlayableDirector* _AttachedTimeline; // 0x40
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffectManager_EffectSpawnAsyncCallback*>* _AsyncSpawnEffectList; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoEffect*, ::System::Int32>* _CurrentMonoEffectVertexCountMap; // 0x50
		::System::Action_1<::RPG::Client::MonoEffect*>* OnRemoveEffectInstance; // 0x58
		::Il2CppArray<::RPG::GameCore::FieldHideMode>* _HideFieldEffectModeGroupSet; // 0x60
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::ParticleSystem*>* _TempPsList; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _TempToRemoveEffectList; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _EffectList; // 0x78
		::System::Action_1<::RPG::Client::MonoEffect*>* OnFireEffectInstance; // 0x80
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* _WaitEntityEffectList; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_EffectSpawnAsyncCallback*>* _ToRemoveAsyncSpawnEffectList; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EffectNameVertexCountMap; // 0x98
		::System::Action_1<::RPG::Client::TriggerEffectParams*>* OnWillFireEffectInstance; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _FrozenEntities; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FieldEffectAdaptionConfig*>* _FieldEffectAdaptionConfigs; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _hideTargetEntitys; // 0xB8
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Action*>>* _WaitEntityModelLoadedEffect; // 0xC0
		::System::Collections::Generic::List_1<::System::UInt32>* _ToRemoveUniqueIdList; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7CFCF5679171877C*>* _EffectLODComponentMapping; // 0xD0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3>* _EntityEffectScaleMapping; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginBase*>* _EndOfLateTickPlugins; // 0xE0
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _ToRemoveEffectList; // 0xE8
		::Il2CppArray<::System::String*>* _HideEffectPaths; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::MonoEffect*>* _ParticleSystemInsIdToMonoEffectMap; // 0xF8
		::System::Diagnostics::Stopwatch* _StopWatch; // 0x100
		::System::Int32 _MonoEffectTickFrameGap; // 0x108
		::System::Single _LastTickDeltaTime_k__BackingField; // 0x10C
		::System::UInt32 HideEffectCharacterMask; // 0x110
		::System::Boolean _ClearAllEffectFlag; // 0x114
		::System::Boolean _IsApplyingFieldEffectBudgetStrategy; // 0x115
		::System::Boolean _hideAvatarModifierEffect; // 0x116
		::System::Boolean _hideMonsterModifierEffect; // 0x117
		::System::UInt32 _AttachedTimelineOwnerEntityID; // 0x118
		::System::UInt32 _AttachTimelineVersion; // 0x11C
		::System::Single _FieldEffectSoftZOffset_k__BackingField; // 0x120
		::System::Boolean _HideHideInTimelineEffect; // 0x124
		::System::Boolean _CurrentUsingHighQualityEffect; // 0x125
		::RPG::Client::MonoEffectHideReason _HideEffectReason; // 0x128
		::System::Single _TimeInSecond_k__BackingField; // 0x12C
		::System::Int32 _CurrentFrame; // 0x130
		::System::UInt32 _DelayFinishWaitTimeline; // 0x134
		::System::Int32 _DynamicMonoEffectMaxTickCount; // 0x138
		::System::Int32 _MonoEffectTickCounter; // 0x13C
		::System::UInt32 _AttachTimelineVersionCounter; // 0x140
		::Unity::Collections::NativeArray_1<::System::Int32> _InstIdToVertexCountMapArray; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TriggerEffectParamsRef GetTriggerEffectParamsRef(::System::String* effectPath)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAMSREF_OFFSET))(effectPath);
		}

		static ::RPG::Client::TriggerEffectParams* GetTriggerEffectParam_Obsolete(::System::String* effectPath)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OBSOLETE_OFFSET))(effectPath);
		}

		static ::RPG::Client::TriggerEffectParams* GetTriggerEffectParam(::System::String* effectPath)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETTRIGGEREFFECTPARAM_OFFSET))(effectPath);
		}

		static ::System::Void ReleaseTriggerEffectParam(::RPG::Client::TriggerEffectParams* triggerParam)
		{
			return ((::System::Void(*)(::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RELEASETRIGGEREFFECTPARAM_OFFSET))(triggerParam);
		}

		static ::Class_1_E144C29F214A8F26* GetRemoveEffectParam()
		{
			return ((::Class_1_E144C29F214A8F26*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_OFFSET))();
		}

		static ::Class_1_E144C29F214A8F26* GetRemoveEffectParam_1(::RPG::GameCore::GameEntity* targetEntity, ::System::String* effectName, ::System::String* uniqueName, ::System::String* attachPointName, ::System::Boolean bUnbind, ::System::Boolean forceImmediateFadeOut, ::System::UInt32 uniqueEffectID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags, ::System::Boolean includeModifierAttached)
		{
			return ((::Class_1_E144C29F214A8F26*(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETREMOVEEFFECTPARAM_1_OFFSET))(targetEntity, effectName, uniqueName, attachPointName, bUnbind, forceImmediateFadeOut, uniqueEffectID, flags, includeModifierAttached);
		}

		static ::System::Void ReleaseRemoveEffectParam(::Class_1_E144C29F214A8F26* removeParam)
		{
			return ((::System::Void(*)(::Class_1_E144C29F214A8F26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RELEASEREMOVEEFFECTPARAM_OFFSET))(removeParam);
		}

		::System::Void HideFieldEffects(::System::Boolean isHide, ::RPG::Client::MonoEffectManager_HideFieldEffectReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectManager_HideFieldEffectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_OFFSET))(this, isHide, reason);
		}

		::System::Void HideFieldEffects_1(::RPG::GameCore::FieldHideMode hideMode, ::RPG::Client::MonoEffectManager_HideFieldEffectReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FieldHideMode, ::RPG::Client::MonoEffectManager_HideFieldEffectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEFIELDEFFECTS_1_OFFSET))(this, hideMode, reason);
		}

		::System::Boolean TryHideFieldEffect(::RPG::Client::MonoEffect* pEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYHIDEFIELDEFFECT_OFFSET))(this, pEffect);
		}

		::System::Boolean IsHideFieldEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISHIDEFIELDENTITY_OFFSET))(this);
		}

		::System::Void SetFieldEffectSoftZOffset(::System::Single zOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SETFIELDEFFECTSOFTZOFFSET_OFFSET))(this, zOffset);
		}

		::System::Void AddFieldEffectAdaption(::Il2CppArray<::RPG::GameCore::FieldEffectAdaptionConfig*>* configs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FieldEffectAdaptionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ADDFIELDEFFECTADAPTION_OFFSET))(this, configs);
		}

		::System::Void ClearFieldEffectAdaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARFIELDEFFECTADAPTION_OFFSET))(this);
		}

		::RPG::GameCore::FieldEffectAdaptionConfig* GetFieldEffectAdaptionConfig(::System::String* path)
		{
			return ((::RPG::GameCore::FieldEffectAdaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETFIELDEFFECTADAPTIONCONFIG_OFFSET))(this, path);
		}

		static ::System::Boolean FieldEffectForceUseLowLOD(::System::String* sPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIELDEFFECTFORCEUSELOWLOD_OFFSET))(sPath);
		}

		::System::Void _InitFieldEffectConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__INITFIELDEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void _DisposeFieldEffectConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__DISPOSEFIELDEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void _OnAllFieldEffectClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONALLFIELDEFFECTCLEAR_OFFSET))(this);
		}

		::System::Void _TryApplyFieldEffectBudgetStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYAPPLYFIELDEFFECTBUDGETSTRATEGY_OFFSET))(this);
		}

		::System::Void _TrySwitchFieldEffectLod(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* targetEffectBudgetInfoListResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYSWITCHFIELDEFFECTLOD_OFFSET))(this, targetEffectBudgetInfoListResult);
		}

		::System::Void _TryHideOverBudgetFieldEffect(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* targetEffectBudgetInfoListResult, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* entityTypeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYHIDEOVERBUDGETFIELDEFFECT_OFFSET))(this, targetEffectBudgetInfoListResult, entityTypeCount);
		}

		::System::Void _CollectBudgetConcernFieldEffect(::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* targetEffectBudgetInfoListResult, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* entityTypeCountResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__COLLECTBUDGETCONCERNFIELDEFFECT_OFFSET))(this, targetEffectBudgetInfoListResult, entityTypeCountResult);
		}

		::System::Void _TryCollectSingleBudgetConcernFieldEffect(::RPG::Client::TriggerEffectParams* targetEffectParam, ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>* targetEffectBudgetInfoListResult, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* entityTypeCountResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Collections::Generic::List_1<::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYCOLLECTSINGLEBUDGETCONCERNFIELDEFFECT_OFFSET))(this, targetEffectParam, targetEffectBudgetInfoListResult, entityTypeCountResult);
		}

		::System::Int32 _CompareFieldEffectBudgetInfoByPriority(::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo a, ::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo, ::RPG::Client::MonoEffectManager_FieldEffectBudgetInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__COMPAREFIELDEFFECTBUDGETINFOBYPRIORITY_OFFSET))(this, a, b);
		}

		::System::Boolean _IsHighPriorityFieldEffect(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISHIGHPRIORITYFIELDEFFECT_OFFSET))(this, path);
		}

		static ::System::Boolean _TryGetFieldEffectBudget(::System::String* effectPath, ::System::Single& budgetScore)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYGETFIELDEFFECTBUDGET_OFFSET))(effectPath, budgetScore);
		}

		::System::Void _CalculateFieldEffectBudget(::System::String* effectPath, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CALCULATEFIELDEFFECTBUDGET_OFFSET))(this, effectPath, isAdd);
		}

		static ::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy _GetFieldEffectBudgetStrategy(::System::Single totalBudget)
		{
			return ((::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETFIELDEFFECTBUDGETSTRATEGY_OFFSET))(totalBudget);
		}

		static ::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy _GetCurrentFieldEffectBudgetStrategy()
		{
			return ((::RPG::Client::MonoEffectManager_FieldEffectBudgetStrategy(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETCURRENTFIELDEFFECTBUDGETSTRATEGY_OFFSET))();
		}

		::RPG::GameCore::FieldHideMode get_HideFieldEffectMode()
		{
			return ((::RPG::GameCore::FieldHideMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_HIDEFIELDEFFECTMODE_OFFSET))(this);
		}

		::System::Void set_FieldEffectSoftZOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SET_FIELDEFFECTSOFTZOFFSET_OFFSET))(this, value);
		}

		::System::Single get_FieldEffectSoftZOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_FIELDEFFECTSOFTZOFFSET_OFFSET))(this);
		}

		::System::Boolean get_EnableFieldEffectSoftZOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_ENABLEFIELDEFFECTSOFTZOFFSET_OFFSET))(this);
		}

		::System::Boolean IsParticleOverLimit(::System::String* effectName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISPARTICLEOVERLIMIT_OFFSET))(this, effectName);
		}

		::System::Int32 GetMonoEffectVertexCount(::System::String* effectName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETMONOEFFECTVERTEXCOUNT_OFFSET))(this, effectName);
		}

		::System::Int32 GetCurrentMonoEffectVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETCURRENTMONOEFFECTVERTEXCOUNT_OFFSET))(this);
		}

		::System::Void RegisterMonoEffectObject(::UnityEngine::GameObject* obj, ::RPG::Client::MonoEffect* monoEffect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REGISTERMONOEFFECTOBJECT_OFFSET))(this, obj, monoEffect);
		}

		::System::Void UnregisterMonoEffectObject(::RPG::Client::MonoEffect* monoEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_UNREGISTERMONOEFFECTOBJECT_OFFSET))(this, monoEffect);
		}

		::System::Void QueryCurrentFrameParticleVertexCountInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_QUERYCURRENTFRAMEPARTICLEVERTEXCOUNTINFO_OFFSET))(this);
		}

		static ::RPG::GameCore::MonoEffectLodConfig* TryGetMonoEffectLodConfig(::System::String* effectName)
		{
			return ((::RPG::GameCore::MonoEffectLodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYGETMONOEFFECTLODCONFIG_OFFSET))(effectName);
		}

		static ::System::Void LoadEffectJsonConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_LOADEFFECTJSONCONFIG_OFFSET))();
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _UnloadOneMonoEffect(::RPG::Client::MonoEffect* pEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__UNLOADONEMONOEFFECT_OFFSET))(this, pEffect);
		}

		::System::Void _RemoveToRemoveEffectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__REMOVETOREMOVEEFFECTLIST_OFFSET))(this);
		}

		::System::Void _BalanceMonoEffectMaxTickCount(::System::Double lastFrameTimeElapsed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__BALANCEMONOEFFECTMAXTICKCOUNT_OFFSET))(this, lastFrameTimeElapsed);
		}

		::System::Void EndOfLateTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ENDOFLATETICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetEntityEffectScale(::RPG::GameCore::GameEntity* entity, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SETENTITYEFFECTSCALE_OFFSET))(this, entity, scale);
		}

		::UnityEngine::Vector3 TryGetEntityEffectScale(::RPG::Client::MonoEffect* effect, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTSCALE_OFFSET))(this, effect, entity);
		}

		::System::Single TryGetEntityEffectConfigScale(::RPG::Client::MonoEffect* effect)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYGETENTITYEFFECTCONFIGSCALE_OFFSET))(this, effect);
		}

		::System::Boolean IsTargetEntityScaled(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISTARGETENTITYSCALED_OFFSET))(this, targetEntity);
		}

		::RPG::Client::MonoEffect* GetFirstActiveEffect(::System::String* sEffectPath, ::RPG::GameCore::GameEntity* pTargetEntity)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTACTIVEEFFECT_OFFSET))(this, sEffectPath, pTargetEntity);
		}

		::RPG::Client::MonoEffect* GetFirstFadeOutEffect(::System::String* sEffectPath, ::RPG::GameCore::GameEntity* pTargetEntity)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETFIRSTFADEOUTEFFECT_OFFSET))(this, sEffectPath, pTargetEntity);
		}

		::System::Int32 GetLastEffectCreateTimeGap(::System::String* sEffectPath, ::System::Single& lastTimeGap, ::System::Int32& fadeOutCount, ::RPG::GameCore::GameEntity* pTargetEntity)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Int32&, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETLASTEFFECTCREATETIMEGAP_OFFSET))(this, sEffectPath, lastTimeGap, fadeOutCount, pTargetEntity);
		}

		::System::Void SetHighQualityEffectsOn(::System::Boolean bIsOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SETHIGHQUALITYEFFECTSON_OFFSET))(this, bIsOn);
		}

		::System::Boolean IsAsyncLoadingEffect(::System::UInt32 uniqeEffectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISASYNCLOADINGEFFECT_OFFSET))(this, uniqeEffectID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7CFCF5679171877C*>* GetLodComponentMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7CFCF5679171877C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETLODCOMPONENTMAP_OFFSET))(this);
		}

		::System::Void AddEndOfTickPlugin(::RPG::Client::MonoEffectPluginBase* plugin)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ADDENDOFTICKPLUGIN_OFFSET))(this, plugin);
		}

		::System::Void RemoveEndOfTickPlugin(::RPG::Client::MonoEffectPluginBase* plugin)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEENDOFTICKPLUGIN_OFFSET))(this, plugin);
		}

		::System::Boolean IsAttachedToTimeline(::RPG::Client::MonoEffect* pEffectInst)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISATTACHEDTOTIMELINE_OFFSET))(this, pEffectInst);
		}

		static ::System::String* GetEffectPathLOD(::System::String* sPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTPATHLOD_OFFSET))(sPath);
		}

		static ::Il2CppArray<::System::String*>* GetAllLodPath(::System::String* sPath)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETALLLODPATH_OFFSET))(sPath);
		}

		static ::System::String* GetEffectAliasPath(::RPG::GameCore::GameEntity* targetEntity, ::System::String* sPath)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTALIASPATH_OFFSET))(targetEntity, sPath);
		}

		static ::System::String* GetEffectEnhancedPath(::RPG::GameCore::GameEntity* targetEntity, ::System::String* sPath)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETEFFECTENHANCEDPATH_OFFSET))(targetEntity, sPath);
		}

		::System::String* GetSurfaceEffectPathByEntity(::RPG::GameCore::GameEntity* entity, ::System::String* effectOrginalPath)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GETSURFACEEFFECTPATHBYENTITY_OFFSET))(this, entity, effectOrginalPath);
		}

		::RPG::Client::MonoEffect* FireEffect(::RPG::Client::TriggerEffectParams* effParams)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECT_OFFSET))(this, effParams);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* effParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIREEFFECTASYNC_OFFSET))(this, effParams);
		}

		::System::Boolean _FireEffectPreProcessTargetEntity(::RPG::Client::TriggerEffectParams* effParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSTARGETENTITY_OFFSET))(this, effParams);
		}

		::System::Void _FireEffectPreProcessParamsBeforeFire(::RPG::Client::TriggerEffectParams* effParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTPREPROCESSPARAMSBEFOREFIRE_OFFSET))(this, effParams);
		}

		::RPG::Client::MonoEffect* _FireEffectLoadInstanceFromPool(::RPG::Client::TriggerEffectParams* effParams, ::System::Boolean isAsync)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FIREEFFECTLOADINSTANCEFROMPOOL_OFFSET))(this, effParams, isAsync);
		}

		::System::Void _BeforeFireEffectLoadInstanceFromPool(::RPG::Client::TriggerEffectParams* effParams, ::System::String*& effectPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__BEFOREFIREEFFECTLOADINSTANCEFROMPOOL_OFFSET))(this, effParams, effectPath);
		}

		::System::Void _OnTriggerParamReleased(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams callbackParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONTRIGGERPARAMRELEASED_OFFSET))(this, effect, callbackParams);
		}

		::System::Void _OnEffectAsyncLoaded(::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONEFFECTASYNCLOADED_OFFSET))(this, pSpecialEffect);
		}

		::System::Void _OnTargetEntityModelAsyncLoaded(::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONTARGETENTITYMODELASYNCLOADED_OFFSET))(this, pSpecialEffect);
		}

		::System::Boolean _InitEffectGoInstance(::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__INITEFFECTGOINSTANCE_OFFSET))(this, pSpecialEffect);
		}

		::System::Void _ProcessAdvEffectExtraParams(::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADVEFFECTEXTRAPARAMS_OFFSET))(this, pSpecialEffect);
		}

		::System::Void _ProcessResidentMaterialTargetEffect(::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSRESIDENTMATERIALTARGETEFFECT_OFFSET))(this, pSpecialEffect);
		}

		::System::Void _ProcessLittleGameEffectExtraParamsBeforePluginInit(::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSLITTLEGAMEEFFECTEXTRAPARAMSBEFOREPLUGININIT_OFFSET))(this, pSpecialEffect);
		}

		::System::Void LoadLODMonoEffectByUniqueID(::System::UInt32 id, ::System::Boolean safeLoad)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_LOADLODMONOEFFECTBYUNIQUEID_OFFSET))(this, id, safeLoad);
		}

		::System::Void UnLoadLODMonoEffectByUniqueID(::System::UInt32 id, ::System::Boolean safeLoad)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_UNLOADLODMONOEFFECTBYUNIQUEID_OFFSET))(this, id, safeLoad);
		}

		::RPG::Client::MonoEffect* ForceLoadEffectByUniqueName(::System::String* uniqueName, ::RPG::GameCore::GameEntity* entity, ::System::Boolean logNotFound)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FORCELOADEFFECTBYUNIQUENAME_OFFSET))(this, uniqueName, entity, logNotFound);
		}

		::System::Void TryRecoverAllCulledEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERALLCULLEDEFFECTS_OFFSET))(this);
		}

		::System::Void TryRecoverCulledEffect(::RPG::Client::TriggerEffectParams* triggerParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYRECOVERCULLEDEFFECT_OFFSET))(this, triggerParams);
		}

		::System::Void RetriggerEffect(::RPG::Client::TriggerEffectParams* triggerParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RETRIGGEREFFECT_OFFSET))(this, triggerParams);
		}

		::System::Void RemoveOneMonoEffect(::RPG::Client::MonoEffect* pEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECT_OFFSET))(this, pEffect);
		}

		::System::Boolean RemoveOneMonoEffectFromManager(::RPG::Client::MonoEffect* pEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEONEMONOEFFECTFROMMANAGER_OFFSET))(this, pEffect);
		}

		::System::Boolean _RemoveEffectFilter(::Class_1_E144C29F214A8F26* param, ::RPG::GameCore::GameEntity* targetEntity, ::System::String* uniqueName, ::System::String* effectName, ::System::String* attachPointName, ::System::UInt32 uniqueEffectID, ::System::Int32 flagMask, ::System::Boolean isModifierAttached)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__REMOVEEFFECTFILTER_OFFSET))(this, param, targetEntity, uniqueName, effectName, attachPointName, uniqueEffectID, flagMask, isModifierAttached);
		}

		::System::Boolean RemoveEffect(::Class_1_E144C29F214A8F26* param, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_OFFSET))(this, param, bIsNeedFadeout);
		}

		::System::Boolean RemoveEffectByTriggerParamsRef(::RPG::Client::TriggerEffectParamsRef triggerParam, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTRIGGERPARAMSREF_OFFSET))(this, triggerParam, bIsNeedFadeout);
		}

		::System::Boolean RemoveEffectByEntity(::RPG::GameCore::GameEntity* targetEntity, ::System::String* effectName, ::System::String* uniqueName, ::System::String* attachPointName, ::System::Boolean bIsNeedFadeout, ::System::Boolean bUnbind, ::System::Boolean forceImmediateFadeOut, ::System::Int32 uniqueEffectID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags, ::System::Boolean includeModifierAttached)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYENTITY_OFFSET))(this, targetEntity, effectName, uniqueName, attachPointName, bIsNeedFadeout, bUnbind, forceImmediateFadeOut, uniqueEffectID, flags, includeModifierAttached);
		}

		::System::Void RemoveEffectByFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYFLAGS_OFFSET))(this, flags, bIsNeedFadeout);
		}

		::System::Void RemoveEffectByUniqueID(::System::UInt32 uniqueId, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUEID_OFFSET))(this, uniqueId, bIsNeedFadeout);
		}

		::System::Void RemoveEffectByUniqueName(::System::String* strEffectUniqueName, ::System::Boolean bIsNeedFadeout, ::System::Boolean bUnbind, ::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYUNIQUENAME_OFFSET))(this, strEffectUniqueName, bIsNeedFadeout, bUnbind, instanceID);
		}

		::System::Void RemoveEffect_1(::RPG::GameCore::GameEntity* pEntity, ::System::String* strEffectName, ::System::String* attachPointName, ::System::Boolean bIsNeedFadeout, ::System::Boolean bUnbind, ::System::Boolean forceImmediateFadeOut, ::System::Int32 instanceID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flags)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECT_1_OFFSET))(this, pEntity, strEffectName, attachPointName, bIsNeedFadeout, bUnbind, forceImmediateFadeOut, instanceID, flags);
		}

		::System::Boolean RemoveAsyncLoadingEffect(::Class_1_E144C29F214A8F26* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_OFFSET))(this, param);
		}

		::System::Boolean RemoveAsyncLoadingEffect_1(::RPG::GameCore::GameEntity* pEntity, ::System::String* strEffectName, ::System::String* strUniqueName)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_1_OFFSET))(this, pEntity, strEffectName, strUniqueName);
		}

		::System::Boolean RemoveAsyncLoadingEffect_2(::RPG::Client::TriggerEffectParams* triggerParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECT_2_OFFSET))(this, triggerParam);
		}

		::System::Boolean RemoveAsyncLoadingEffectByUniqueID(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEASYNCLOADINGEFFECTBYUNIQUEID_OFFSET))(this, id);
		}

		::System::Boolean RemoveUnloadEffectStreamingItems(::Class_1_E144C29F214A8F26* param)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E144C29F214A8F26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEUNLOADEFFECTSTREAMINGITEMS_OFFSET))(this, param);
		}

		::System::Void RemoveMonoEffectStreamingItem(::System::UInt32 uniqeEffectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEMONOEFFECTSTREAMINGITEM_OFFSET))(this, uniqeEffectID);
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

		::System::Void ClearAllEffect(::System::Boolean includeCrossMapEffect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARALLEFFECT_OFFSET))(this, includeCrossMapEffect);
		}

		::System::Boolean IsInClearEffectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISINCLEAREFFECTFLAG_OFFSET))(this);
		}

		::System::Boolean IsEffectExist(::System::String* uniqueName, ::RPG::GameCore::GameEntity* entity, ::System::Boolean includeUnprepared, ::System::Boolean includeFadeOut)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISEFFECTEXIST_OFFSET))(this, uniqueName, entity, includeUnprepared, includeFadeOut);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Find(::System::String* sEffName)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FIND_OFFSET))(this, sEffName);
		}

		::RPG::Client::MonoEffect* FindEffectByUniqueName(::System::String* strEffectUniqueName, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUENAME_OFFSET))(this, strEffectUniqueName, entity);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* FindEffectByTargetGo(::UnityEngine::GameObject* targetGo, ::System::Boolean includeFinish)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYTARGETGO_OFFSET))(this, targetGo, includeFinish);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* FindEffectsByEntity(::RPG::GameCore::GameEntity* entity, ::System::Boolean includeFinish)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_OFFSET))(this, entity, includeFinish);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* FindEffectsByEntity_1(::RPG::GameCore::GameEntity* entity, ::Il2CppArray<::System::String*>* effectNames, ::System::Boolean includeFinish)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_1_OFFSET))(this, entity, effectNames, includeFinish);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* FindEffectsByEntity_2(::RPG::GameCore::GameEntity* entity, ::System::String* effectName, ::System::Boolean includeFinish)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTSBYENTITY_2_OFFSET))(this, entity, effectName, includeFinish);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* FindEffectByAttachPoint(::System::String* attPointName)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_OFFSET))(this, attPointName);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* FindEffectByAttachPoint_1(::UnityEngine::Transform* attPoint)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYATTACHPOINT_1_OFFSET))(this, attPoint);
		}

		::RPG::Client::MonoEffect* FindEffectByUniqueID(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_FINDEFFECTBYUNIQUEID_OFFSET))(this, uniqueID);
		}

		::System::Void HideEffectByCharacherMask(::System::UInt32 mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTBYCHARACHERMASK_OFFSET))(this, mask);
		}

		::System::Void EnableEffectByCharacterMask(::System::UInt32 mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ENABLEEFFECTBYCHARACTERMASK_OFFSET))(this, mask);
		}

		::System::Void HideTargetModifierAttachedEffect(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* targets, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag> flagFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDETARGETMODIFIERATTACHEDEFFECT_OFFSET))(this, targets, flagFilter);
		}

		::System::Void ClearHideTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_CLEARHIDETARGET_OFFSET))(this);
		}

		::System::Void HideAvatarModifierAttachedEffect(::System::Boolean bIsHide, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag> flagFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEAVATARMODIFIERATTACHEDEFFECT_OFFSET))(this, bIsHide, flagFilter);
		}

		::System::Void HideMonsterModifierAttachedEffect(::System::Boolean bIsHide, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag> flagFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::MonoEffectFlag>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEMONSTERMODIFIERATTACHEDEFFECT_OFFSET))(this, bIsHide, flagFilter);
		}

		::System::Boolean IsNeedRecoverDarkTimelineSkillEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_ISNEEDRECOVERDARKTIMELINESKILLEFFECT_OFFSET))(this);
		}

		::System::Void ShowHidedEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SHOWHIDEDEFFECTS_OFFSET))(this);
		}

		::System::Void HideOrShowAllEffects(::System::Boolean bIsHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEORSHOWALLEFFECTS_OFFSET))(this, bIsHide);
		}

		::System::Void HideEffectsByPath(::Il2CppArray<::System::String*>* paths, ::RPG::Client::MonoEffectHideReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEEFFECTSBYPATH_OFFSET))(this, paths, reason);
		}

		::System::Void ResetHideEffectByPath(::Il2CppArray<::System::String*>* paths, ::RPG::Client::MonoEffectHideReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_RESETHIDEEFFECTBYPATH_OFFSET))(this, paths, reason);
		}

		::System::Void HideHideInInTimelineEffect(::System::Boolean bIsHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEHIDEININTIMELINEEFFECT_OFFSET))(this, bIsHide);
		}

		::System::Void HideCharacterFrozenFilterEffects(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDECHARACTERFROZENFILTEREFFECTS_OFFSET))(this, pEntity, isHide);
		}

		::System::Void HideAllCharacterEffects(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bIsHide, ::RPG::Client::MonoEffectHideReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEALLCHARACTEREFFECTS_OFFSET))(this, pEntity, bIsHide, reason);
		}

		::System::Void RemoveEffectByTimelineRemoveFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_REMOVEEFFECTBYTIMELINEREMOVEFLAG_OFFSET))(this);
		}

		::System::Void HidePropEffects(::System::Boolean bisHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_HIDEPROPEFFECTS_OFFSET))(this, bisHide);
		}

		::System::Void TryReattachAttachPoint(::RPG::Client::TriggerEffectParams* effParams, ::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYREATTACHATTACHPOINT_OFFSET))(this, effParams, pSpecialEffect);
		}

		::System::Void _TryGetAttachPointFromEntityBeforeLoadEffect(::RPG::Client::TriggerEffectParams* effParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYBEFORELOADEFFECT_OFFSET))(this, effParams);
		}

		::System::Void _TryGetAttachPointFromEntityAfterLoadEffect(::RPG::Client::TriggerEffectParams* effParams, ::RPG::Client::MonoEffect* pSpecialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYGETATTACHPOINTFROMENTITYAFTERLOADEFFECT_OFFSET))(this, effParams, pSpecialEffect);
		}

		::UnityEngine::Transform* _GetEntityAttachPointSafe(::RPG::GameCore::GameEntity* pEntity, ::System::String* attachPointName, ::System::String* effectName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYATTACHPOINTSAFE_OFFSET))(this, pEntity, attachPointName, effectName);
		}

		::UnityEngine::Transform* _GetEntityEffectAttachPoint(::System::String* strEffectName, ::RPG::GameCore::GameEntity* pEntity, ::RPG::Client::MonoEffect* pSpecialEffect, ::System::String* dynamicAttachName, ::System::String*& attachPointName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTATTACHPOINT_OFFSET))(this, strEffectName, pEntity, pSpecialEffect, dynamicAttachName, attachPointName);
		}

		::UnityEngine::Vector3 _GetInitPositionByEntity(::RPG::GameCore::GameEntity* targetEntity, ::System::Nullable_1<::UnityEngine::Vector3> positionOffset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETINITPOSITIONBYENTITY_OFFSET))(this, targetEntity, positionOffset);
		}

		::System::Void _AddToEffectList(::RPG::Client::MonoEffect* specialEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ADDTOEFFECTLIST_OFFSET))(this, specialEffect);
		}

		::System::Boolean _EntityTypeHideEffectMaskFilter(::RPG::Client::MonoEffect* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ENTITYTYPEHIDEEFFECTMASKFILTER_OFFSET))(this, effect);
		}

		::System::Boolean _IsAvatarEntity(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISAVATARENTITY_OFFSET))(this, targetEntity);
		}

		::System::Boolean _IsMonsterEntity(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISMONSTERENTITY_OFFSET))(this, targetEntity);
		}

		::System::Boolean _AvatarModifierHideEffectFilter(::RPG::Client::MonoEffect* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__AVATARMODIFIERHIDEEFFECTFILTER_OFFSET))(this, effect);
		}

		::System::Boolean _MonsterModifierHideEffectFilter(::RPG::Client::MonoEffect* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__MONSTERMODIFIERHIDEEFFECTFILTER_OFFSET))(this, effect);
		}

		::System::Boolean _EntityFreezonHideEffectFilter(::RPG::GameCore::GameEntity* pEntity, ::RPG::Client::MonoEffect* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ENTITYFREEZONHIDEEFFECTFILTER_OFFSET))(this, pEntity, effect);
		}

		::System::Void TrySetEffectEnable(::RPG::Client::MonoEffect* effect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_TRYSETEFFECTENABLE_OFFSET))(this, effect);
		}

		::System::Void _CreateManagerGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CREATEMANAGERGO_OFFSET))(this);
		}

		::System::String* _GetEntityEffectName(::RPG::GameCore::GameEntity* pEntity, ::System::String* strEffectName)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETENTITYEFFECTNAME_OFFSET))(this, pEntity, strEffectName);
		}

		::System::Void _LoadStaticResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__LOADSTATICRESOURCES_OFFSET))(this);
		}

		::System::Void _ReleaseStaticResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__RELEASESTATICRESOURCES_OFFSET))(this);
		}

		::System::Boolean _ProcessAddMonoEffectLodLogic(::RPG::Client::TriggerEffectParams* effParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PROCESSADDMONOEFFECTLODLOGIC_OFFSET))(this, effParams);
		}

		::System::Void _AddMonoEffectStreamingItem(::RPG::Client::TriggerEffectParams* effectParams, ::RPG::GameCore::MonoEffectLodDetail* lodDetail)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::GameCore::MonoEffectLodDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ADDMONOEFFECTSTREAMINGITEM_OFFSET))(this, effectParams, lodDetail);
		}

		::System::Void _ParticleBeginEmission(::UnityEngine::ParticleSystem* ps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__PARTICLEBEGINEMISSION_OFFSET))(this, ps);
		}

		::System::Boolean _CheckEffectCulling(::System::String* path, ::System::String*& resultCullingPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__CHECKEFFECTCULLING_OFFSET))(this, path, resultCullingPath);
		}

		::System::String* _GetOriginalEffectPath(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__GETORIGINALEFFECTPATH_OFFSET))(this, path);
		}

		::System::Boolean _IsEffectOverBudged(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ISEFFECTOVERBUDGED_OFFSET))(this, path);
		}

		::System::Int32 _CompareTriggerEffectParamsByCreateTimeStamp(::RPG::Client::TriggerEffectParams* effectParamsA, ::RPG::Client::TriggerEffectParams* effectParamsB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__COMPARETRIGGEREFFECTPARAMSBYCREATETIMESTAMP_OFFSET))(this, effectParamsA, effectParamsB);
		}

		::System::UInt32 _AttachToPlayingTimeline()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ATTACHTOPLAYINGTIMELINE_OFFSET))(this);
		}

		::System::Boolean _TryAttachToTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__TRYATTACHTOTIMELINE_OFFSET))(this);
		}

		::System::Void _OnTimelineStopped(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONTIMELINESTOPPED_OFFSET))(this, arg);
		}

		::System::Void _FinishWaitTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FINISHWAITTIMELINE_OFFSET))(this);
		}

		::System::Void _FinishAttachTimelineEffects(::System::UInt32 timelineVersion, ::System::UInt32 timelineOwnerID, ::System::UInt32 ignoreTimelineOwnerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__FINISHATTACHTIMELINEEFFECTS_OFFSET))(this, timelineVersion, timelineOwnerID, ignoreTimelineOwnerID);
		}

		::System::Void _OnBattleCameraCloseupShotStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTSTART_OFFSET))(this, arg);
		}

		::System::Void _OnBattleCameraCloseupShotFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER__ONBATTLECAMERACLOSEUPSHOTFINISH_OFFSET))(this, arg);
		}

		::System::Void set_TimeInSecond(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SET_TIMEINSECOND_OFFSET))(this, value);
		}

		::System::Single get_TimeInSecond()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_TIMEINSECOND_OFFSET))(this);
		}

		::System::Single get_LastTickDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_LASTTICKDELTATIME_OFFSET))(this);
		}

		::System::Void set_LastTickDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_SET_LASTTICKDELTATIME_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* get_EffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_GET_EFFECTLIST_OFFSET))(this);
		}
	};
}
