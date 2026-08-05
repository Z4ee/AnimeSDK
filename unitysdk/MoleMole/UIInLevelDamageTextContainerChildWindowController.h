#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_00AACBD1E90727E6.h"
#include "unitysdk/Enum_3_018E10D1FF758986.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_6F714FF477D2D093.h"
#include "unitysdk/Enum_3_907CF213AF1B4209.h"
#include "unitysdk/Enum_3_9B96ACE49506217C.h"
#include "unitysdk/Enum_3_9B987022DA1CF35D.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/UIInLevelDamageTextContainerChildWindowController_DamageTextTypeRecord.h"
#include "unitysdk/MoleMole/UIInLevelDamageTextContainerChildWindowController_WindCatalyzeTextureCacheEntry.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_8530E184D8325889.h"
#include "unitysdk/Struct_2_E7893E25665FBB90.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2C471FBD0CB148C7;
class Class_1_EA1FEF8121ADE963;
class Class_2_BAD6A92751CA2F54_1;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F41D242A20F8FE06;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelDamageTextTMPChildWindowController; }
namespace MoleMole { class UIInLevelSpecialDamageTextBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal::Internal { class DamageTextSystem_DamageTextItem; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ADDENTITYDAMAGECOUNT_OFFSET UNITYSDK_OFFSET(0x17A9DD40)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_APPLYWINDCATALYZETEXTUREREPLACE_OFFSET UNITYSDK_OFFSET(0x17AA4300)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CLEARDAMAGETEXTDATA_OFFSET UNITYSDK_OFFSET(0x17A9D140)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CLEARMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x17A9D260)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CLEARWINDCATALYZETEXTURECACHE_OFFSET UNITYSDK_OFFSET(0x17A9CD00)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_COMBINEDAMAGETEXTFROMCMD_OFFSET UNITYSDK_OFFSET(0x17AA0210)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_COMBINEDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17A97820)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CREATESPECIALDAMAGETEXTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17AA5F10)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DESTROYALLCOMBINETEXT_OFFSET UNITYSDK_OFFSET(0x17A9A4A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DESTROYSPECIALDAMAGETEXTV3CACHE_OFFSET UNITYSDK_OFFSET(0x17A9D860)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DOPREBATTLEPREFABWARMUP_OFFSET UNITYSDK_OFFSET(0x17A9C0F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DOSHOWONEDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17AA09F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_EXECUTESHOWDAMAGETEXTCMD_OFFSET UNITYSDK_OFFSET(0x17A9F000)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GENERATECOMBINEGPUDAMAGETEXTITEM_OFFSET UNITYSDK_OFFSET(0x17A98070)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GENERATEGPUDAMAGETEXTITEM_OFFSET UNITYSDK_OFFSET(0x17A99790)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETCOMBINEDAMAGETEXTMISCPOSOFFSETINFOFROMCMD_OFFSET UNITYSDK_OFFSET(0x17AA0D60)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETCOMBINEDAMAGETEXTMISCPOSOFFSETINFO_OFFSET UNITYSDK_OFFSET(0x17A96BE0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETDAMAGETEXTSHOWINFOFROMCMD_OFFSET UNITYSDK_OFFSET(0x17A9FCF0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETDAMAGETEXTSHOWINFO_OFFSET UNITYSDK_OFFSET(0x17AA20B0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETEFFECTCOLORINDEX_OFFSET UNITYSDK_OFFSET(0x17AA7830)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETENTITYDAMAGECOUNT_OFFSET UNITYSDK_OFFSET(0x17A9E0B0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETENTITYDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x17A9E150)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETFACEINDEX_OFFSET UNITYSDK_OFFSET(0x17AA7630)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETGPUTEXTSCREENSPACERATIO_OFFSET UNITYSDK_OFFSET(0x17A98280)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x17A9E200)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETROOTALPHA_OFFSET UNITYSDK_OFFSET(0x17A9DCD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETSCREENSPACEPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x17A98410)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETSPECIALDAMAGETEXTLANGUAGETYPE_OFFSET UNITYSDK_OFFSET(0x17AA7930)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETSPECIALDAMAGEV3TEXTPATHDICT_OFFSET UNITYSDK_OFFSET(0x17AA79B0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETTARGETFOLLOWTYPE_OFFSET UNITYSDK_OFFSET(0x17A9E810)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETTMPFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0x17AA6270)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETWINDCATALYZETEXTUREREPLACECONFIG_OFFSET UNITYSDK_OFFSET(0x17AA5650)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17A9AEA0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITCOMBINETEXT_OFFSET UNITYSDK_OFFSET(0x17A969C0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITDAMAGETEXTFOLLOWDAMPING_OFFSET UNITYSDK_OFFSET(0x17A9C130)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x17A9B790)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITSPECIALDAMAGETEXTV3CACHE_OFFSET UNITYSDK_OFFSET(0x17A9BFE0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x17A9B2F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITWINDCATALYZETEXTURECACHE_OFFSET UNITYSDK_OFFSET(0x17AA4FB0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISDAMAGETEXTVALID_OFFSET UNITYSDK_OFFSET(0x17AA42B0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISDAMAGETOAVATARCOMP_OFFSET UNITYSDK_OFFSET(0x17AA2460)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISENABLEDAMAGETEXTCOMBINEFROMCMD_OFFSET UNITYSDK_OFFSET(0x17AA0030)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISENABLEDAMAGETEXTCOMBINE_OFFSET UNITYSDK_OFFSET(0x17A96A00)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISINVIEW_OFFSET UNITYSDK_OFFSET(0x17A9F430)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONAFTERCAMERALATEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x17A9E250)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONCHARACTERULTPERFORMSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17A9E910)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A9AEB0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONDAMAGETEXTEND_OFFSET UNITYSDK_OFFSET(0x17AA78C0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x17A9E870)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONQTEWINDOWTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x17A9E8C0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONSHOWDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17A9E960)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONSHOWONLYSPECIALDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17AA0FF0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17A9C810)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A9C8A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A9AF40)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A9C3B0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUPDATETEXTAFTERCAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0x17A9E2A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x17A9D910)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_PLAYSPECIALDAMAGETEXTV3AUDIO_OFFSET UNITYSDK_OFFSET(0x17AA4D00)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_QUERYDAMAGETEXTINFO_OFFSET UNITYSDK_OFFSET(0x17AA63A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REFRESHPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x17A9C430)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REFRESHSPECIALDAMAGETEXTV3CACHE_OFFSET UNITYSDK_OFFSET(0x17AA28F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REMOVEENTITYDAMAGECOUNT_1_OFFSET UNITYSDK_OFFSET(0x17A9DF20)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REMOVEENTITYDAMAGECOUNT_OFFSET UNITYSDK_OFFSET(0x17A9DEA0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGERANDOMCHANGEDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DB20)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTCRITICALDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DAD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTRANDOMENABLED_OFFSET UNITYSDK_OFFSET(0x17A9DA80)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTRESISTTYPEDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DC30)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTTARGETFOLLOWTYPEDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DC80)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGENABLESPECIALDAMAGETEXTV3_OFFSET UNITYSDK_OFFSET(0x17A9D9E0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGSCREENSPACEYOFFSET_OFFSET UNITYSDK_OFFSET(0x17AA7E90)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGSPECIALDAMAGETEXTLANGUAGETYPE_OFFSET UNITYSDK_OFFSET(0x17AA7DD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGSPECIALDAMAGETEXTTYPE_OFFSET UNITYSDK_OFFSET(0x17AA7E40)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETFORCEISSKIPDEFATTACKDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DB70)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETFORCEISTRANSFERFROMLUMENDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DBD0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETMULTITEXTDEBUG_OFFSET UNITYSDK_OFFSET(0x17A9DA30)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPDAMAGETEXTGPUVIEW_OFFSET UNITYSDK_OFFSET(0x17AA3EA0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPDAMAGETEXTTMPVIEW_OFFSET UNITYSDK_OFFSET(0x17AA3850)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPSPECIALDAMAGETEXTV2VIEW_OFFSET UNITYSDK_OFFSET(0x17AA58D0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPSPECIALDAMAGETEXTV3VIEW_OFFSET UNITYSDK_OFFSET(0x17AA2D70)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWDAMAGETEXTFROMCMD_OFFSET UNITYSDK_OFFSET(0x17A9F490)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17A9EBB0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWONEDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17AA1810)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWONLYSPECIALDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17AA1230)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_TICKCOMBINETEXT_OFFSET UNITYSDK_OFFSET(0x17A95B70)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_TRYSHOWDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17AA1680)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_USETMPDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x17AA0FA0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AA82A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA7EF0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AA8300)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17AA8390)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AA8450)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AA8460)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AA8470)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextContainerChildWindowController_TypeDefinitionIndex = 78050;

	class UIInLevelDamageTextContainerChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetPath>** StaticGet__battlePrewarmupPaths()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextContainerChildWindowController_TypeDefinitionIndex)->GetStaticField(0x3FE60);
		}
		static ::System::Int32* StaticGet_DebugCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextContainerChildWindowController_TypeDefinitionIndex)->GetStaticField(0xEC20);
		}
		// static const ::System::String* DEFAULT_DAMAGE_TEXT_STRING; // 0x0
		::System::Collections::Generic::Dictionary_2<::Struct_2_E7893E25665FBB90, ::System::Collections::Generic::List_1<::Class_1_2C471FBD0CB148C7*>*>* _combineDamageTextItemDict; // 0x318
		::System::Single _curFrameDeltaTime; // 0x320
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Single>* _damageElementEffectColorIndexMap; // 0x328
		::Class_2_BAD6A92751CA2F54_1* _view; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelDamageTextTMPChildWindowController*>* _damageTextTMPPool; // 0x338
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::System::Collections::Generic::List_1<::MoleMole::UIInLevelSpecialDamageTextBaseController*>*>* _specialDamageTextV2Pool; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityDamageCountDict; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* _entityDamageTextLengthDict; // 0x350
		::Enum_3_00AACBD1E90727E6 _damageTextWidgetType; // 0x358
		::System::Boolean _damageTextRandomEnabled; // 0x35C
		::System::Boolean _enableMultiTextDebug; // 0x35D
		::System::Boolean _damageTextCriticalDebug; // 0x35E
		::Enum_3_018E10D1FF758986 _damageElementResistTypeDebug; // 0x360
		::System::Boolean _damageRandomChangeDebug; // 0x364
		::Enum_3_6F714FF477D2D093 _targetFollowType; // 0x368
		::Enum_3_6F714FF477D2D093 _targetFollowTypeDebug; // 0x36C
		::System::UInt32 _forceDamageTextFaceTypeDebug; // 0x370
		::UnityEngine::Material* _selfBeHitFontMat; // 0x378
		::UnityEngine::Material* _ineffectiveResistFontMat; // 0x380
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::UnityEngine::Material*>* _damageElementFontMatMap; // 0x388
		::System::Int32 _maxDamage; // 0x390
		::System::Boolean _isPause; // 0x394
		::System::Boolean _debugEnableSpecialDamageTextV3; // 0x395
		::Enum_3_D5E55949F51D9DD0_1 _specialDamageTextLanguageType; // 0x398
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::MoleMole::UIInLevelDamageTextContainerChildWindowController_DamageTextTypeRecord>* _specialDamageTextV3RecordMap; // 0x3A0
		::MoleMole::Config::SpecialDamageTextType _debugSpecialDamageTextType; // 0x3A8
		::Enum_3_D5E55949F51D9DD0_1 _debugSpecialDamageTextLanguageType; // 0x3AC
		::System::Single _overrideScreenSpaceYOffset; // 0x3B0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::List_1<::MoleMole::UIInLevelDamageTextContainerChildWindowController_WindCatalyzeTextureCacheEntry>*>* _windCatalyzeTextureCache; // 0x3B8
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _windCatalyzeTextureHandles; // 0x3C0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::UnityEngine::Texture*>>* _windCatalyzeRendererRecords; // 0x3C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void TickCombineText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_TICKCOMBINETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void InitCombineText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITCOMBINETEXT_OFFSET))(this);
		}

		::System::Boolean IsEnableDamageTextCombine(::Class_1_EA1FEF8121ADE963* attackData, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isHideBattleProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISENABLEDAMAGETEXTCOMBINE_OFFSET))(this, attackData, specialDamageTextType, isHideBattleProperty);
		}

		::System::Boolean GetCombineDamageTextMiscPosOffsetInfo(::MoleMole::Battle::Entity* attacker, ::MoleMole::Battle::Entity* attackee, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::UnityEngine::Vector3& worldPos, ::Enum_3_907CF213AF1B4209& damageTextPosOffsetType, ::UnityEngine::Vector2& referTargetOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::SpecialDamageTextType, ::UnityEngine::Vector3&, ::Enum_3_907CF213AF1B4209&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETCOMBINEDAMAGETEXTMISCPOSOFFSETINFO_OFFSET))(this, attacker, attackee, specialDamageTextType, worldPos, damageTextPosOffsetType, referTargetOffset);
		}

		::System::Void CombineDamageText(::System::Single damageNum, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::System::UInt32 damageTextFaceType, ::MoleMole::EntityHandle attacker, ::MoleMole::Battle::Entity* attackee, ::Class_1_EA1FEF8121ADE963* attackData, ::System::Boolean isHideBattleProperty, ::Class_3_F41D242A20F8FE06* attackerAbilityComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::System::UInt32, ::MoleMole::EntityHandle, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::System::Boolean, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_COMBINEDAMAGETEXT_OFFSET))(this, damageNum, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, damageTextFaceType, attacker, attackee, attackData, isHideBattleProperty, attackerAbilityComp);
		}

		::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* GenerateCombineGPUDamageTextItem(::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::System::UInt32 damageTextFaceType, ::MoleMole::Battle::Entity* attackee, ::System::Boolean isHideBattleProperty, ::Class_3_F41D242A20F8FE06* attackerAbilityComp)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*(*)(::PVOID, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::System::UInt32, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GENERATECOMBINEGPUDAMAGETEXTITEM_OFFSET))(this, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, damageTextFaceType, attackee, isHideBattleProperty, attackerAbilityComp);
		}

		::System::Void DestroyAllCombineText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DESTROYALLCOMBINETEXT_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClearDamageTextData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CLEARDAMAGETEXTDATA_OFFSET))(this, args);
		}

		::System::Void OnUpdateText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUPDATETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void SetDebugEnableSpecialDamageTextV3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGENABLESPECIALDAMAGETEXTV3_OFFSET))(this);
		}

		::System::Void SetMultiTextDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETMULTITEXTDEBUG_OFFSET))(this);
		}

		::System::Void SetDamageTextRandomEnabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTRANDOMENABLED_OFFSET))(this);
		}

		::System::Void SetDamageTextCriticalDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTCRITICALDEBUG_OFFSET))(this);
		}

		::System::Void SetDamageRandomChangeDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGERANDOMCHANGEDEBUG_OFFSET))(this);
		}

		::System::Void SetForceIsSkipDefAttackDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETFORCEISSKIPDEFATTACKDEBUG_OFFSET))(this);
		}

		::System::Void SetForceIsTransferFromLumenDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETFORCEISTRANSFERFROMLUMENDEBUG_OFFSET))(this);
		}

		::System::Void SetDamageTextResistTypeDebug(::Enum_3_018E10D1FF758986 resistType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_018E10D1FF758986))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTRESISTTYPEDEBUG_OFFSET))(this, resistType);
		}

		::System::Void SetDamageTextTargetFollowTypeDebug(::Enum_3_6F714FF477D2D093 followType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_6F714FF477D2D093))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDAMAGETEXTTARGETFOLLOWTYPEDEBUG_OFFSET))(this, followType);
		}

		::System::Single GetRootAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETROOTALPHA_OFFSET))(this);
		}

		::System::Void AddEntityDamageCount(::MoleMole::Battle::Entity* entity, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ADDENTITYDAMAGECOUNT_OFFSET))(this, entity, length);
		}

		::System::Void RemoveEntityDamageCount(::MoleMole::Battle::Entity* entity, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REMOVEENTITYDAMAGECOUNT_OFFSET))(this, entity, length);
		}

		::System::Void RemoveEntityDamageCount_1(::System::UInt32 entityID, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REMOVEENTITYDAMAGECOUNT_1_OFFSET))(this, entityID, length);
		}

		::System::Int32 GetEntityDamageCount(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETENTITYDAMAGECOUNT_OFFSET))(this, entity);
		}

		::System::Single GetEntityDamageTextLength(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETENTITYDAMAGETEXTLENGTH_OFFSET))(this, entity);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnAfterCameraLateUpdateNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONAFTERCAMERALATEUPDATENOTIFY_OFFSET))(this);
		}

		::System::Void OnUpdateTextAfterCameraUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONUPDATETEXTAFTERCAMERAUPDATE_OFFSET))(this);
		}

		::Enum_3_6F714FF477D2D093 GetTargetFollowType()
		{
			return ((::Enum_3_6F714FF477D2D093(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETTARGETFOLLOWTYPE_OFFSET))(this);
		}

		::System::Void OnPauseGameStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET))(this, args);
		}

		::System::Void OnQTEWindowTypeChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONQTEWINDOWTYPECHANGED_OFFSET))(this, args);
		}

		::System::Void OnCharacterUltPerformStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONCHARACTERULTPERFORMSTATECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshPauseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REFRESHPAUSESTATE_OFFSET))(this);
		}

		::System::Void OnShowDamageText(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONSHOWDAMAGETEXT_OFFSET))(this, args);
		}

		::System::Void ExecuteShowDamageTextCmd(::Struct_2_8530E184D8325889 cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8530E184D8325889))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_EXECUTESHOWDAMAGETEXTCMD_OFFSET))(this, cmd);
		}

		::System::Void ShowDamageTextFromCmd(::Struct_2_8530E184D8325889& cmd, ::MoleMole::Battle::Entity* attackee, ::Class_3_C93CC3D2C2AC4067* attackeeModel, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8530E184D8325889&, ::MoleMole::Battle::Entity*, ::Class_3_C93CC3D2C2AC4067*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWDAMAGETEXTFROMCMD_OFFSET))(this, cmd, attackee, attackeeModel, worldPos);
		}

		::Enum_3_9B987022DA1CF35D GetDamageTextShowInfoFromCmd(::System::Single damage, ::Enum_3_9B96ACE49506217C hitLevel, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::Enum_3_018E10D1FF758986 resistType, ::System::Boolean isForceDamageTextNormalScale, ::System::String*& damageStr, ::System::String*& specialDamageTextStr)
		{
			return ((::Enum_3_9B987022DA1CF35D(*)(::PVOID, ::System::Single, ::Enum_3_9B96ACE49506217C, ::MoleMole::Config::SpecialDamageTextType, ::Enum_3_018E10D1FF758986, ::System::Boolean, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETDAMAGETEXTSHOWINFOFROMCMD_OFFSET))(this, damage, hitLevel, specialDamageTextType, resistType, isForceDamageTextNormalScale, damageStr, specialDamageTextStr);
		}

		::System::Boolean IsEnableDamageTextCombineFromCmd(::Struct_2_8530E184D8325889& cmd, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isHideBattleProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_8530E184D8325889&, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISENABLEDAMAGETEXTCOMBINEFROMCMD_OFFSET))(this, cmd, specialDamageTextType, isHideBattleProperty);
		}

		::System::Void CombineDamageTextFromCmd(::System::Single damageNum, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::System::UInt32 damageTextFaceType, ::System::UInt32 attackerEntityID, ::MoleMole::Battle::Entity* attackee, ::Struct_2_8530E184D8325889& cmd, ::System::Boolean isHideBattleProperty, ::Class_3_F41D242A20F8FE06* attackerAbilityComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::System::UInt32, ::System::UInt32, ::MoleMole::Battle::Entity*, ::Struct_2_8530E184D8325889&, ::System::Boolean, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_COMBINEDAMAGETEXTFROMCMD_OFFSET))(this, damageNum, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, damageTextFaceType, attackerEntityID, attackee, cmd, isHideBattleProperty, attackerAbilityComp);
		}

		::System::Boolean GetCombineDamageTextMiscPosOffsetInfoFromCmd(::System::UInt32 attackerEntityID, ::MoleMole::Battle::Entity* attackee, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::UnityEngine::Vector3& worldPos, ::Enum_3_907CF213AF1B4209& damageTextPosOffsetType, ::UnityEngine::Vector2& referTargetOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*, ::MoleMole::Config::SpecialDamageTextType, ::UnityEngine::Vector3&, ::Enum_3_907CF213AF1B4209&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETCOMBINEDAMAGETEXTMISCPOSOFFSETINFOFROMCMD_OFFSET))(this, attackerEntityID, attackee, specialDamageTextType, worldPos, damageTextPosOffsetType, referTargetOffset);
		}

		::System::Void OnShowOnlySpecialDamageText(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONSHOWONLYSPECIALDAMAGETEXT_OFFSET))(this, args);
		}

		::System::Void ShowDamageText(::Class_1_EA1FEF8121ADE963* attackData, ::MoleMole::Battle::Entity* attackee, ::MoleMole::EntityHandle attacker)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWDAMAGETEXT_OFFSET))(this, attackData, attackee, attacker);
		}

		::System::Void TryShowDamageText(::Class_1_EA1FEF8121ADE963* attackData, ::MoleMole::Battle::Entity* attackee, ::System::Single damageNum, ::UnityEngine::Vector3 position, ::MoleMole::Battle::Entity* attacker)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::System::Single, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_TRYSHOWDAMAGETEXT_OFFSET))(this, attackData, attackee, damageNum, position, attacker);
		}

		::Enum_3_9B987022DA1CF35D GetDamageTextShowInfo(::System::Single damage, ::Class_1_EA1FEF8121ADE963* attackData, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::Enum_3_018E10D1FF758986 resistType, ::System::Boolean isForceDamageTextNormalScale, ::System::String*& damageStr, ::System::String*& specialDamageTextStr)
		{
			return ((::Enum_3_9B987022DA1CF35D(*)(::PVOID, ::System::Single, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Config::SpecialDamageTextType, ::Enum_3_018E10D1FF758986, ::System::Boolean, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETDAMAGETEXTSHOWINFO_OFFSET))(this, damage, attackData, specialDamageTextType, resistType, isForceDamageTextNormalScale, damageStr, specialDamageTextStr);
		}

		::System::Boolean UseTMPDamageText(::MoleMole::Config::SpecialDamageTextType specialDamageTextType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_USETMPDAMAGETEXT_OFFSET))(this, specialDamageTextType);
		}

		::System::Boolean IsInView(::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISINVIEW_OFFSET))(this, worldPos);
		}

		::System::Int32 GetMaxDamage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETMAXDAMAGE_OFFSET))(this);
		}

		::System::Boolean IsDamageToAvatarComp(::MoleMole::Battle::Entity* attackee)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISDAMAGETOAVATARCOMP_OFFSET))(this, attackee);
		}

		::System::Void ShowOnlySpecialDamageText(::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::MoleMole::Battle::Entity* attackee, ::System::String* attachPointName, ::Enum_3_907CF213AF1B4209 posOffsetType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType, ::MoleMole::Battle::Entity*, ::System::String*, ::Enum_3_907CF213AF1B4209))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWONLYSPECIALDAMAGETEXT_OFFSET))(this, specialDamageTextType, attackee, attachPointName, posOffsetType);
		}

		::System::Void ShowOneDamageText(::System::Single damage, ::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::Class_1_EA1FEF8121ADE963* attackData, ::MoleMole::Battle::Entity* attacker)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SHOWONEDAMAGETEXT_OFFSET))(this, damage, worldPos, attackee, attackData, attacker);
		}

		::UnityEngine::Vector2 DoShowOneDamageText(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::System::UInt32 damageTextFaceType, ::MoleMole::Battle::Entity* attackee, ::Enum_3_907CF213AF1B4209 damageTextPosOffsetType, ::UnityEngine::Vector2 referTargetOffset, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isNum, ::System::Boolean isHideBattleProperty, ::Class_3_F41D242A20F8FE06* attackerAbilityComp)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::System::UInt32, ::MoleMole::Battle::Entity*, ::Enum_3_907CF213AF1B4209, ::UnityEngine::Vector2, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean, ::System::Boolean, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DOSHOWONEDAMAGETEXT_OFFSET))(this, damageStr, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, damageTextFaceType, attackee, damageTextPosOffsetType, referTargetOffset, specialDamageTextType, isNum, isHideBattleProperty, attackerAbilityComp);
		}

		::UnityEngine::Vector2 SetupSpecialDamageTextV3View(::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::Enum_3_907CF213AF1B4209 damageTextPosOffsetType, ::UnityEngine::Vector2 referTargetOffset, ::MoleMole::Config::DamageElementType damageElementType)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::Enum_3_907CF213AF1B4209, ::UnityEngine::Vector2, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPSPECIALDAMAGETEXTV3VIEW_OFFSET))(this, specialDamageTextType, worldPos, attackee, damageTextPosOffsetType, referTargetOffset, damageElementType);
		}

		::System::Void PlaySpecialDamageTextV3Audio(::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::MoleMole::Battle::Entity* attackee)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_PLAYSPECIALDAMAGETEXTV3AUDIO_OFFSET))(this, specialDamageTextType, attackee);
		}

		::System::Void ApplyWindCatalyzeTextureReplace(::System::Object* particleHandle, ::MoleMole::Config::DamageElementType damageElementType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_APPLYWINDCATALYZETEXTUREREPLACE_OFFSET))(this, particleHandle, damageElementType);
		}

		::System::Void InitWindCatalyzeTextureCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITWINDCATALYZETEXTURECACHE_OFFSET))(this);
		}

		::System::Void ClearWindCatalyzeTextureCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CLEARWINDCATALYZETEXTURECACHE_OFFSET))(this);
		}

		::UnityEngine::Vector2 SetupSpecialDamageTextV2View(::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::Enum_3_907CF213AF1B4209 damageTextPosOffsetType, ::UnityEngine::Vector2 referTargetOffset)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::Enum_3_907CF213AF1B4209, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPSPECIALDAMAGETEXTV2VIEW_OFFSET))(this, specialDamageTextType, worldPos, attackee, damageTextPosOffsetType, referTargetOffset);
		}

		::MoleMole::UIInLevelSpecialDamageTextBaseController* CreateSpecialDamageTextController(::MoleMole::Config::SpecialDamageTextType specialDamageTextType)
		{
			return ((::MoleMole::UIInLevelSpecialDamageTextBaseController*(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CREATESPECIALDAMAGETEXTCONTROLLER_OFFSET))(this, specialDamageTextType);
		}

		::UnityEngine::Vector2 SetupDamageTextTMPView(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::MoleMole::Battle::Entity* attackee, ::Enum_3_907CF213AF1B4209 damageTextPosOffsetType, ::UnityEngine::Vector2 referTargetOffset, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isNum)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::MoleMole::Battle::Entity*, ::Enum_3_907CF213AF1B4209, ::UnityEngine::Vector2, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPDAMAGETEXTTMPVIEW_OFFSET))(this, damageStr, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, attackee, damageTextPosOffsetType, referTargetOffset, specialDamageTextType, isNum);
		}

		::System::Single GetGPUTextScreenSpaceRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETGPUTEXTSCREENSPACERATIO_OFFSET))(this);
		}

		::UnityEngine::Vector2 SetupDamageTextGPUView(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::System::UInt32 damageTextFaceType, ::MoleMole::Battle::Entity* attackee, ::Enum_3_907CF213AF1B4209 damageTextPosOffsetType, ::UnityEngine::Vector2 referTargetOffset, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isNum, ::System::Boolean isHideBattleProperty, ::Class_3_F41D242A20F8FE06* attackerAbilityComp)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::System::UInt32, ::MoleMole::Battle::Entity*, ::Enum_3_907CF213AF1B4209, ::UnityEngine::Vector2, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean, ::System::Boolean, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETUPDAMAGETEXTGPUVIEW_OFFSET))(this, damageStr, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, damageTextFaceType, attackee, damageTextPosOffsetType, referTargetOffset, specialDamageTextType, isNum, isHideBattleProperty, attackerAbilityComp);
		}

		::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem* GenerateGPUDamageTextItem(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Vector3 worldPos, ::System::Boolean isDamageToAvatarCamp, ::System::Boolean isUniqueSkillDamage, ::MoleMole::Config::DamageElementType damageElementType, ::Enum_3_018E10D1FF758986 resistType, ::System::UInt32 damageTextFaceType, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Vector2 screenSpacePosOffset, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isHideBattleProperty, ::Class_3_F41D242A20F8FE06* attackerAbilityComp, ::System::Boolean isCombineText, ::System::Boolean isCombineDamageTextUseOldAnim)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DamageTextSystem_DamageTextItem*(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::Enum_3_018E10D1FF758986, ::System::UInt32, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean, ::Class_3_F41D242A20F8FE06*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GENERATEGPUDAMAGETEXTITEM_OFFSET))(this, damageStr, damageTextShowType, worldPos, isDamageToAvatarCamp, isUniqueSkillDamage, damageElementType, resistType, damageTextFaceType, attackee, screenSpacePosOffset, specialDamageTextType, isHideBattleProperty, attackerAbilityComp, isCombineText, isCombineDamageTextUseOldAnim);
		}

		::System::Boolean IsDamageTextValid(::MoleMole::Config::SpecialDamageTextType specialDamageTextType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ISDAMAGETEXTVALID_OFFSET))(this, specialDamageTextType);
		}

		::UnityEngine::Vector2 GetScreenSpacePosOffset(::MoleMole::Battle::Entity* attackee, ::Enum_3_907CF213AF1B4209 damageTextPosOffsetType, ::UnityEngine::Vector2 referTargetOffset, ::UnityEngine::Vector2 extraScreenOffset, ::UnityEngine::Vector3 worldPos, ::System::Single screenSpaceRatio, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::System::Boolean isCombineText)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Enum_3_907CF213AF1B4209, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETSCREENSPACEPOSOFFSET_OFFSET))(this, attackee, damageTextPosOffsetType, referTargetOffset, extraScreenOffset, worldPos, screenSpaceRatio, specialDamageTextType, isCombineText);
		}

		::System::Void OnDamageTextEnd(::System::UInt32 entityID, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_ONDAMAGETEXTEND_OFFSET))(this, entityID, length);
		}

		::System::Void QueryDamageTextInfo(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::Enum_3_018E10D1FF758986 resistType, ::System::Boolean isUniqueSkillDamage, ::System::Int32 animType, ::System::Boolean isCombineText, ::System::Boolean isCombineDamageTextUseOldAnim, ::System::Single& scale, ::System::Single& fadeinInterval, ::System::Single& fadeoutInterval, ::System::Single& showTime, ::System::Single& fadeinTime, ::System::Single& fadeoutTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::Enum_3_018E10D1FF758986, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_QUERYDAMAGETEXTINFO_OFFSET))(this, damageStr, damageTextShowType, resistType, isUniqueSkillDamage, animType, isCombineText, isCombineDamageTextUseOldAnim, scale, fadeinInterval, fadeoutInterval, showTime, fadeinTime, fadeoutTime);
		}

		::System::Single GetFaceIndex(::MoleMole::Config::DamageElementType damageElementType, ::System::Boolean isDamageToAvatarCamp, ::Enum_3_018E10D1FF758986 resistType, ::MoleMole::Config::SpecialDamageTextType specialDamageTextType, ::Class_3_F41D242A20F8FE06* attackerAbilityComp)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Boolean, ::Enum_3_018E10D1FF758986, ::MoleMole::Config::SpecialDamageTextType, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETFACEINDEX_OFFSET))(this, damageElementType, isDamageToAvatarCamp, resistType, specialDamageTextType, attackerAbilityComp);
		}

		::System::Single GetEffectColorIndex(::MoleMole::Config::DamageElementType damageElementType)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETEFFECTCOLORINDEX_OFFSET))(this, damageElementType);
		}

		::UnityEngine::Material* GetTMPFontMaterial(::MoleMole::Config::DamageElementType damageElementType, ::System::Boolean isDamageToAvatarCamp, ::Enum_3_018E10D1FF758986 resistType)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Boolean, ::Enum_3_018E10D1FF758986))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETTMPFONTMATERIAL_OFFSET))(this, damageElementType, isDamageToAvatarCamp, resistType);
		}

		::System::Void InitDamageTextFollowDamping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITDAMAGETEXTFOLLOWDAMPING_OFFSET))(this);
		}

		::System::Void InitMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITMATERIALCACHE_OFFSET))(this);
		}

		::System::Void ClearMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_CLEARMATERIALCACHE_OFFSET))(this);
		}

		::System::Void InitSpecialDamageTextV3Cache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_INITSPECIALDAMAGETEXTV3CACHE_OFFSET))(this);
		}

		::Enum_3_D5E55949F51D9DD0_1 GetSpecialDamageTextLanguageType(::MoleMole::LanguageType languageType)
		{
			return ((::Enum_3_D5E55949F51D9DD0_1(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETSPECIALDAMAGETEXTLANGUAGETYPE_OFFSET))(this, languageType);
		}

		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>* GetSpecialDamageV3TextPathDict(::Enum_3_D5E55949F51D9DD0_1 specialDamageTextLanguageType)
		{
			return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath>*(*)(::PVOID, ::Enum_3_D5E55949F51D9DD0_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETSPECIALDAMAGEV3TEXTPATHDICT_OFFSET))(this, specialDamageTextLanguageType);
		}

		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* GetWindCatalyzeTextureReplaceConfig(::Enum_3_D5E55949F51D9DD0_1 specialDamageTextLanguageType)
		{
			return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*(*)(::PVOID, ::Enum_3_D5E55949F51D9DD0_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_GETWINDCATALYZETEXTUREREPLACECONFIG_OFFSET))(this, specialDamageTextLanguageType);
		}

		::System::Void SetDebugSpecialDamageTextLanguageType(::Enum_3_D5E55949F51D9DD0_1 specialDamageTextLanguageType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D5E55949F51D9DD0_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGSPECIALDAMAGETEXTLANGUAGETYPE_OFFSET))(this, specialDamageTextLanguageType);
		}

		::System::Void SetDebugSpecialDamageTextType(::MoleMole::Config::SpecialDamageTextType specialDamageTextType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGSPECIALDAMAGETEXTTYPE_OFFSET))(this, specialDamageTextType);
		}

		::System::Void SetDebugScreenSpaceYOffset(::System::Single yOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_SETDEBUGSCREENSPACEYOFFSET_OFFSET))(this, yOffset);
		}

		static ::System::Void DoPrebattlePrefabWarmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DOPREBATTLEPREFABWARMUP_OFFSET))();
		}

		::System::Void RefreshSpecialDamageTextV3Cache(::Enum_3_D5E55949F51D9DD0_1 specialDamageTextLanguageType, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D5E55949F51D9DD0_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_REFRESHSPECIALDAMAGETEXTV3CACHE_OFFSET))(this, specialDamageTextLanguageType, force);
		}

		::System::Void DestroySpecialDamageTextV3Cache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER_DESTROYSPECIALDAMAGETEXTV3CACHE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
