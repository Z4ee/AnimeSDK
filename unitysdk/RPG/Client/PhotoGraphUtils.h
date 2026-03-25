#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/Client/MonoPhotoGraphAimInfo_KeyPointType.h"
#include "unitysdk/RPG/Client/PhotoGraphCheckCanIdleShowResult.h"
#include "unitysdk/RPG/Client/PhotoGraphUtils_StorageFormatType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24E6408184BB5D78;
class Class_1_854A2C7905ADF31B;
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PhotoGraphFilterImage; }
namespace RPG::Client { class PhotoGraphResultConditionPack; }
namespace RPG::Client { class PhotoGraphUtils_CachedImageSaveData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDIMAGEWATERMARK_OFFSET UNITYSDK_OFFSET(0x9F66290)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDTEXTWATERMARK_OFFSET UNITYSDK_OFFSET(0x9F66530)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CALCPHOTOGRAPHAIMUNITDISTANCE_OFFSET UNITYSDK_OFFSET(0x9F5FBC0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CANLOCKTRIPOD_OFFSET UNITYSDK_OFFSET(0x9F62650)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKAIMENTITYVISIBLEBYAIMINFO_OFFSET UNITYSDK_OFFSET(0x9F5ADD0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKGIANTOBJECTRATIOINRECT_OFFSET UNITYSDK_OFFSET(0x9F653D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITINRANGE_OFFSET UNITYSDK_OFFSET(0x9F5FA20)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F5F6A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CLEARIMAGESAVEBYTESBUFFER_OFFSET UNITYSDK_OFFSET(0x9F6A250)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x9F53730)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9F62850)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIDLESHOW_OFFSET UNITYSDK_OFFSET(0x9F58B00)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIKONFREESTYLE_OFFSET UNITYSDK_OFFSET(0x9F58B80)
#define RPG_CLIENT_PHOTOGRAPHUTILS_EXITFREESTYLE_OFFSET UNITYSDK_OFFSET(0x9F58780)
#define RPG_CLIENT_PHOTOGRAPHUTILS_EXITIDLESHOW_OFFSET UNITYSDK_OFFSET(0x9F588A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESHWITHBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9F63120)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESH_OFFSET UNITYSDK_OFFSET(0x9F63640)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GENERATESCREENCAPTURECOROUTINE_OFFSET UNITYSDK_OFFSET(0x9F68D20)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETAIMUNITREALAIMPOS_OFFSET UNITYSDK_OFFSET(0x9F3FCD0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBILLBOARDSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x9F682B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBLURREDCURFRAMETEXTUREWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x9F5C040)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBOXCOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0x9F5E1C0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBYTESBYSCREENCAPTURE_OFFSET UNITYSDK_OFFSET(0x9F68DB0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCAPSULECOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0x9F5E430)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_1_OFFSET UNITYSDK_OFFSET(0x9F5EB10)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0x9F5DF90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERCENTERLOCALPOS_OFFSET UNITYSDK_OFFSET(0x9F5EC40)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTUREWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x9F5BEB0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F5BBB0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURPHOTOGRAPHMODE_OFFSET UNITYSDK_OFFSET(0x9F5C440)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOCONDITIONPACK_OFFSET UNITYSDK_OFFSET(0x9F68920)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOOVERRIDEFOVRANGE_OFFSET UNITYSDK_OFFSET(0x9F68390)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETEMOTIONAVATARID_OFFSET UNITYSDK_OFFSET(0x9F5C740)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETENABLESHOTNONETARGET_OFFSET UNITYSDK_OFFSET(0x9F684B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETINTERSECTRECT_OFFSET UNITYSDK_OFFSET(0x9F40150)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETRATIOINRECT_OFFSET UNITYSDK_OFFSET(0x9F3F610)
#define RPG_CLIENT_PHOTOGRAPHUTILS_INITPHOTOGRAPHSETTINGS_OFFSET UNITYSDK_OFFSET(0x9F5C560)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISALLOWIDLESHOW_OFFSET UNITYSDK_OFFSET(0x9F5D540)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9F5DEB0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISCAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x9F5DF20)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISIDENTIFYMODE_OFFSET UNITYSDK_OFFSET(0x9F56E40)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESHOW_OFFSET UNITYSDK_OFFSET(0x9F5D300)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESTATE_OFFSET UNITYSDK_OFFSET(0x9F5D280)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISINTRIPOD_OFFSET UNITYSDK_OFFSET(0x9F627D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0x9F5E690)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISTURNINPLACE_OFFSET UNITYSDK_OFFSET(0x9F5DE40)
#define RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGINPUT_OFFSET UNITYSDK_OFFSET(0x9F5C2F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGPOSUPDATE_OFFSET UNITYSDK_OFFSET(0x9F53930)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REGISTERIDLESHOWENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F5D940)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RELEASEBLURREDFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F5C240)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RELEASECAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x9F5C280)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOEXHIBITION_OFFSET UNITYSDK_OFFSET(0x9F62450)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOUPDATETWOPOINTFOUR_OFFSET UNITYSDK_OFFSET(0x9F61180)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_TRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x9F61B10)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOEXHIBITION_OFFSET UNITYSDK_OFFSET(0x9F62540)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOUPDATETWOPOINTFOUR_OFFSET UNITYSDK_OFFSET(0x9F614E0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_TRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x9F62200)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHEND_OFFSET UNITYSDK_OFFSET(0x9F60EE0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x9F60D20)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETEMOTION_OFFSET UNITYSDK_OFFSET(0x9F58A00)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9F5CF90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETIKFLAGS_OFFSET UNITYSDK_OFFSET(0x9F5A030)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETTRIPOD_OFFSET UNITYSDK_OFFSET(0x9F62750)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESUMEFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9F5CC60)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SAVESCREENCAPTURE_OFFSET UNITYSDK_OFFSET(0x9F68A70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAROTATEENABLE_OFFSET UNITYSDK_OFFSET(0x9F64360)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAZOOMENABLE_OFFSET UNITYSDK_OFFSET(0x9F64100)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETEMOTION_OFFSET UNITYSDK_OFFSET(0x9F5C950)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETFREESTYLE_OFFSET UNITYSDK_OFFSET(0x9F5D0B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETPHOTOSHOTRESULTFOVLEVEL_OFFSET UNITYSDK_OFFSET(0x9F689C0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_STEERANGLE_OFFSET UNITYSDK_OFFSET(0x9F49DF0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SWITCHPHOTOGRAPHDRAGMODE_OFFSET UNITYSDK_OFFSET(0x9F68590)
#define RPG_CLIENT_PHOTOGRAPHUTILS_TRIGGERIDLESHOW_OFFSET UNITYSDK_OFFSET(0x9F5DA60)
#define RPG_CLIENT_PHOTOGRAPHUTILS_TRYLOCKTRIPOD_OFFSET UNITYSDK_OFFSET(0x9F626D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UNLOADCUSTOMFULLEMOTION_OFFSET UNITYSDK_OFFSET(0x9F59FC0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGINPUT_OFFSET UNITYSDK_OFFSET(0x9F527F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGPOSUPDATE_OFFSET UNITYSDK_OFFSET(0x9F53CD0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UPDATEALLOWIDLESHOW_OFFSET UNITYSDK_OFFSET(0x9F5D390)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F6A420)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMGIANTTARGETUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F5F7B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMINFOUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F5F860)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMPOINTUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F5F920)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMTARGETINLIMITCAMERADIR_OFFSET UNITYSDK_OFFSET(0x9F5FC80)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKCOLLIDERSAME_OFFSET UNITYSDK_OFFSET(0x9F60910)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKGIANTOBJECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F60070)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISBLOCKLAYER_OFFSET UNITYSDK_OFFSET(0x9F60CA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISDETECTLAYER_OFFSET UNITYSDK_OFFSET(0x9F60C30)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKOCCLUSIONCAMERATOTARGET_OFFSET UNITYSDK_OFFSET(0x9F5ED70)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAYALLWITHOUTRAYCAST_OFFSET UNITYSDK_OFFSET(0x9F65C10)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAY_OFFSET UNITYSDK_OFFSET(0x9F64B60)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CLEARCACHEDIMAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x9F6A0D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CONVERTDATABYFORMATTYPE_OFFSET UNITYSDK_OFFSET(0x9F69870)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CREATETRIPODWALL_OFFSET UNITYSDK_OFFSET(0x9F62F60)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWALLGIANTOBJECTDETECTPOS_OFFSET UNITYSDK_OFFSET(0x9F64E80)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWGIANTOBJECTDETECTPOS_OFFSET UNITYSDK_OFFSET(0x9F66210)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x9F667D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWTEXT_OFFSET UNITYSDK_OFFSET(0x9F675C0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENCHECKPOSARRAY_OFFSET UNITYSDK_OFFSET(0x9F643F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENTARGETINFOLISTEXTRADATA_OFFSET UNITYSDK_OFFSET(0x9F61670)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETBYTESBUFFER_OFFSET UNITYSDK_OFFSET(0x9F6A310)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETCAMERAPOSITIONNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x9F61CE0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0x9F5BDA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETLOCALPOSINRECT_OFFSET UNITYSDK_OFFSET(0x9F5E840)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETOWNERGROUPID_OFFSET UNITYSDK_OFFSET(0x9F61380)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETPHOTOUPDATEREPORTGAMEKEY_OFFSET UNITYSDK_OFFSET(0x9F612F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GIANTOBJECTDETECTRAYCASTPASS_OFFSET UNITYSDK_OFFSET(0x9F65EA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__ONREQUESTPERMISSION_OFFSET UNITYSDK_OFFSET(0x9F69D60)
#define RPG_CLIENT_PHOTOGRAPHUTILS__RESETFACEEMOTION_OFFSET UNITYSDK_OFFSET(0x9F5CBB0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SAVESCREENCAPTURE_OFFSET UNITYSDK_OFFSET(0x9F68F90)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOGALLERY_OFFSET UNITYSDK_OFFSET(0x9F692E0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0x9F69660)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEMOTION_OFFSET UNITYSDK_OFFSET(0x9F5CAF0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9F5CE70)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SETPLAYERACTIONENABLE_OFFSET UNITYSDK_OFFSET(0x9F642B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__TRYCACHESAVEDATAANDREQUESTPERMISSION_OFFSET UNITYSDK_OFFSET(0x9F69A70)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils_TypeDefinitionIndex = 56764;

	class PhotoGraphUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__GameKey_PhotoUpdateTwoPointFour()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45F80);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet__BytesBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45F88);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet__TargetInfoList()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45F90);
		}
		static ::UnityEngine::Collider** StaticGet__GiantObjectCollider()
		{
			return (::UnityEngine::Collider**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45F98);
		}
		static ::System::String** StaticGet__GameKey_PhotoExhibition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FA0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldCornerCache()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FA8);
		}
		static ::RPG::Client::PhotoGraphUtils_CachedImageSaveData** StaticGet__CachedImageSaveData()
		{
			return (::RPG::Client::PhotoGraphUtils_CachedImageSaveData**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FB0);
		}
		static ::System::String** StaticGet__GameKey_PhotoExhibition_HuaHuo()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FB8);
		}
		static ::RPG::Client::FrameCaptureManager** StaticGet__FrameCaptureManager()
		{
			return (::RPG::Client::FrameCaptureManager**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FC0);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__RaycastHitArray()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FC8);
		}
		static ::System::String** StaticGet_EditorTempAlbumPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FD0);
		}
		static ::System::String** StaticGet__GameKey_TrackPhoto()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFuncBtnType, ::System::String*>** StaticGet_PhotoGraphFunBtnTypeGameKeyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFuncBtnType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FE0);
		}
		static ::System::String** StaticGet__GameKey_PhotoUpdate_LongRange()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__CheckGiantObjectPosArrayDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x45FF0);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Request_Mobile_Photo_Permission()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123B0);
		}
		static ::System::Int32* StaticGet__TripodColliderCircularWallHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123C0);
		}
		static ::System::Int32* StaticGet__CaptureFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123C4);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Save_To_PC_Finish()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123C8);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Mobile_Photo_Permission_Rejected_No_Prompt()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123D8);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Already_Saved()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123E8);
		}
		static ::System::Int32* StaticGet_PhotoGraphDetectBlockLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123F8);
		}
		static ::System::Int32* StaticGet_PhotoGraphDetectLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x123FC);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Mobile_Photo_Permission_Rejected()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12400);
		}
		static ::System::Int32* StaticGet__TripodColliderCircularWallSegment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12410);
		}
		static ::System::Single* StaticGet_WallThickness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12414);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Request_Mobile_Photo_Permission_Title()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12418);
		}
		static ::System::Boolean* StaticGet_DebugRayCastEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12428);
		}
		static ::System::Boolean* StaticGet__DrawGiantObjectDetectDebug()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12429);
		}
		static ::System::Int32* StaticGet_PhotoGraphIgnoreLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x1242C);
		}
		static ::Struct_2_648594091F1A68D6* StaticGet__PhotoStartInfo()
		{
			return (::Struct_2_648594091F1A68D6*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12430);
		}
		static ::System::UInt32* StaticGet__CurrentEmoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		// static const ::System::Single _FreeStyleTransitionDuration; // 0x0
		// static const ::System::Int32 NO_TARGET_TIP_PRIORITY = 0x0; // 0x0
		// static const ::System::Int32 SEARCH_TARGET_TIP_PRIORITY = 0x32; // 0x0
		// static const ::System::Int32 TARGET_APPEAR_TIP_PRIORITY = 0x64; // 0x0
		// static const ::System::Int32 _MIN_VALID_HITCOUNT = 0x1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Texture* GetCurFrameTexture(::RPG::CustomRP::FrameCapture_CaptureFeature captureFeature)
		{
			return ((::UnityEngine::Texture*(*)(::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTURE_OFFSET))(captureFeature);
		}

		static ::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* GetCurFrameTextureWithPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTUREWITHPROMISE_OFFSET))();
		}

		static ::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* GetBlurredCurFrameTextureWithPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBLURREDCURFRAMETEXTUREWITHPROMISE_OFFSET))();
		}

		static ::System::Void ReleaseBlurredFrameTexture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RELEASEBLURREDFRAMETEXTURE_OFFSET))();
		}

		static ::System::Void ReleaseCaptureFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RELEASECAPTUREFRAME_OFFSET))();
		}

		static ::System::Void LockRoamingInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGINPUT_OFFSET))();
		}

		static ::System::Void UnlockRoamingInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGINPUT_OFFSET))();
		}

		static ::System::Void LockRoamingPosUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGPOSUPDATE_OFFSET))();
		}

		static ::System::Void UnlockRoamingPosUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGPOSUPDATE_OFFSET))();
		}

		static ::RPG::GameCore::PhotoGraphModeType GetCurPhotoGraphMode()
		{
			return ((::RPG::GameCore::PhotoGraphModeType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURPHOTOGRAPHMODE_OFFSET))();
		}

		static ::System::Void InitPhotoGraphSettings(::RPG::GameCore::PhotoGraphModeType photoGraphMode)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_INITPHOTOGRAPHSETTINGS_OFFSET))(photoGraphMode);
		}

		static ::RPG::Client::FrameCaptureManager* _GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETFRAMECAPTUREMANAGER_OFFSET))();
		}

		static ::System::UInt32 GetEmotionAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETEMOTIONAVATARID_OFFSET))();
		}

		static ::System::Void SetEmotion(::RPG::GameCore::GameEntity* entity, ::System::UInt32 emoID)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETEMOTION_OFFSET))(entity, emoID);
		}

		static ::System::Void ResetEmotion(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETEMOTION_OFFSET))(entity);
		}

		static ::System::Void ResumeFaceExpression(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESUMEFACEEXPRESSION_OFFSET))(entity);
		}

		static ::System::Void ResetFaceExpression(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETFACEEXPRESSION_OFFSET))(entity);
		}

		static ::System::Void UnLoadCustomFullEmotion(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UNLOADCUSTOMFULLEMOTION_OFFSET))(entity);
		}

		static ::System::Void _SetFaceExpression(::RPG::GameCore::GameEntity* entity, ::System::Single cheekRatio, ::System::Single shyRatio, ::System::Single shadowRatio)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEXPRESSION_OFFSET))(entity, cheekRatio, shyRatio, shadowRatio);
		}

		static ::System::Void _SetFaceEmotion(::RPG::GameCore::GameEntity* entity, ::System::String* emotionPath)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEMOTION_OFFSET))(entity, emotionPath);
		}

		static ::System::Void _ResetFaceEmotion(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__RESETFACEEMOTION_OFFSET))(entity);
		}

		static ::System::Void SetFreeStyle(::RPG::GameCore::GameEntity* entity, ::System::String* freeStyleCharacterID, ::System::String* startMotionID)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETFREESTYLE_OFFSET))(entity, freeStyleCharacterID, startMotionID);
		}

		static ::System::Void ExitFreeStyle(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_EXITFREESTYLE_OFFSET))(entity);
		}

		static ::System::Void ExitIdleShow(::RPG::GameCore::GameEntity* entity, ::System::Single duration)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_EXITIDLESHOW_OFFSET))(entity, duration);
		}

		static ::System::Void EnableIdleShow(::RPG::GameCore::GameEntity* entity, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIDLESHOW_OFFSET))(entity, enable);
		}

		static ::System::Boolean IsInIdleState(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESTATE_OFFSET))(entity);
		}

		static ::System::Boolean IsInIdleShow(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESHOW_OFFSET))(entity);
		}

		static ::System::Void UpdateAllowIdleShow(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UPDATEALLOWIDLESHOW_OFFSET))(entity);
		}

		static ::RPG::Client::PhotoGraphCheckCanIdleShowResult IsAllowIdleShow(::RPG::GameCore::GameEntity* entity, ::System::Int32 index)
		{
			return ((::RPG::Client::PhotoGraphCheckCanIdleShowResult(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISALLOWIDLESHOW_OFFSET))(entity, index);
		}

		static ::System::Void RegisterIdleShowEndCallback(::RPG::GameCore::GameEntity* entity, ::System::Action* idleShowEnd)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REGISTERIDLESHOWENDCALLBACK_OFFSET))(entity, idleShowEnd);
		}

		static ::System::Void TriggerIdleShow(::RPG::GameCore::GameEntity* entity, ::System::Int32 index)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_TRIGGERIDLESHOW_OFFSET))(entity, index);
		}

		static ::System::Void EnableIkOnFreeStyle(::RPG::GameCore::GameEntity* entity, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIKONFREESTYLE_OFFSET))(entity, enable);
		}

		static ::System::Void ResetIKFlags(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETIKFLAGS_OFFSET))(entity);
		}

		static ::System::Void SteerAngle(::RPG::GameCore::GameEntity* entity, ::System::Single angle)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_STEERANGLE_OFFSET))(entity, angle);
		}

		static ::System::Boolean IsTurnInPlace(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISTURNINPLACE_OFFSET))(entity);
		}

		static ::System::Boolean IsBoxCollider(::UnityEngine::Collider* collider)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISBOXCOLLIDER_OFFSET))(collider);
		}

		static ::System::Boolean IsCapsuleCollider(::UnityEngine::Collider* collider)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISCAPSULECOLLIDER_OFFSET))(collider);
		}

		static ::UnityEngine::Vector3 GetColliderAimPos(::UnityEngine::Collider* collider, ::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType type)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_OFFSET))(collider, type);
		}

		static ::System::Boolean GetTargetIntersectRect(::RPG::GameCore::GameEntity* targetEntity, ::UnityEngine::RectTransform* rect, ::System::Nullable_1<::UnityEngine::Vector2> rectScale)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::RectTransform*, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETINTERSECTRECT_OFFSET))(targetEntity, rect, rectScale);
		}

		static ::System::Boolean IsPointInRect(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 leftUp, ::UnityEngine::Vector2 rightUp, ::UnityEngine::Vector2 rightDown, ::UnityEngine::Vector2 leftDown)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISPOINTINRECT_OFFSET))(point, leftUp, rightUp, rightDown, leftDown);
		}

		static ::System::Boolean GetTargetRatioInRect(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 size, ::UnityEngine::RectTransform* rect, ::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETRATIOINRECT_OFFSET))(position, size, rect, ratio);
		}

		static ::System::Boolean _GetLocalPosInRect(::UnityEngine::Vector3 worldPos, ::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2& localPos)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETLOCALPOSINRECT_OFFSET))(worldPos, rect, localPos);
		}

		static ::UnityEngine::Vector3 GetColliderAimPos_1(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType type, ::UnityEngine::Collider* collider)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_1_OFFSET))(type, collider);
		}

		static ::UnityEngine::Vector3 GetColliderCenterLocalPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType type, ::UnityEngine::Collider* collider)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERCENTERLOCALPOS_OFFSET))(type, collider);
		}

		static ::UnityEngine::Vector3 GetBoxColliderAimPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType type, ::UnityEngine::Collider* collider)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBOXCOLLIDERAIMPOS_OFFSET))(type, collider);
		}

		static ::UnityEngine::Vector3 GetAimUnitRealAimPos(::UnityEngine::Transform* aimTransform, ::UnityEngine::Vector3 offset)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETAIMUNITREALAIMPOS_OFFSET))(aimTransform, offset);
		}

		static ::UnityEngine::Vector3 GetCapsuleColliderAimPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType type, ::UnityEngine::Collider* collider)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCAPSULECOLLIDERAIMPOS_OFFSET))(type, collider);
		}

		static ::System::Boolean CheckAimEntityVisibleByAimInfo(::UnityEngine::Collider* collider)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKAIMENTITYVISIBLEBYAIMINFO_OFFSET))(collider);
		}

		static ::System::Boolean CheckPhotoGraphAimUnitVisible(::Class_1_24E6408184BB5D78* aimUnit)
		{
			return ((::System::Boolean(*)(::Class_1_24E6408184BB5D78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITVISIBLE_OFFSET))(aimUnit);
		}

		static ::System::Boolean CheckPhotoGraphAimUnitInRange(::Class_1_24E6408184BB5D78* aimUnit, ::UnityEngine::Vector3 pos, ::System::Single range)
		{
			return ((::System::Boolean(*)(::Class_1_24E6408184BB5D78*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITINRANGE_OFFSET))(aimUnit, pos, range);
		}

		static ::System::Single CalcPhotoGraphAimUnitDistance(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CALCPHOTOGRAPHAIMUNITDISTANCE_OFFSET))(pos1, pos2);
		}

		static ::System::Boolean _CheckAimTargetInLimitCameraDir(::UnityEngine::Vector3 aimCenterPos)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMTARGETINLIMITCAMERADIR_OFFSET))(aimCenterPos);
		}

		static ::System::Boolean _CheckAimInfoUnitVisible(::Class_1_24E6408184BB5D78* aimUnit)
		{
			return ((::System::Boolean(*)(::Class_1_24E6408184BB5D78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMINFOUNITVISIBLE_OFFSET))(aimUnit);
		}

		static ::System::Boolean _CheckAimPointUnitVisible(::Class_1_24E6408184BB5D78* aimUnit)
		{
			return ((::System::Boolean(*)(::Class_1_24E6408184BB5D78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMPOINTUNITVISIBLE_OFFSET))(aimUnit);
		}

		static ::System::Boolean _CheckAimGiantTargetUnitVisible(::Class_1_24E6408184BB5D78* aimUnit)
		{
			return ((::System::Boolean(*)(::Class_1_24E6408184BB5D78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMGIANTTARGETUNITVISIBLE_OFFSET))(aimUnit);
		}

		static ::System::Int32 _CheckOcclusionCameraToTarget(::UnityEngine::Vector3 targetPos, ::UnityEngine::Collider* targetCollider)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKOCCLUSIONCAMERATOTARGET_OFFSET))(targetPos, targetCollider);
		}

		static ::System::Boolean _CheckIsDetectLayer(::System::Int32 layer)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISDETECTLAYER_OFFSET))(layer);
		}

		static ::System::Boolean _CheckIsBlockLayer(::System::Int32 layer)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISBLOCKLAYER_OFFSET))(layer);
		}

		static ::System::Boolean _CheckColliderSame(::UnityEngine::Collider* detectCollider, ::UnityEngine::Collider* targetCollider)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKCOLLIDERSAME_OFFSET))(detectCollider, targetCollider);
		}

		static ::System::Void ReportPhotoGraphStart(::RPG::GameCore::PhotoGraphFuncBtnType funBtnType, ::System::UInt32 groupId, ::System::Int32 startTime)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphFuncBtnType, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHSTART_OFFSET))(funBtnType, groupId, startTime);
		}

		static ::System::Void ReportPhotoGraphEnd(::RPG::GameCore::PhotoGraphFuncBtnType funBtnType, ::System::UInt32 groupId, ::System::Boolean isFinish, ::System::Int32 startTime)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphFuncBtnType, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHEND_OFFSET))(funBtnType, groupId, isFinish, startTime);
		}

		static ::System::Void ReportBegin_PhotoUpdateTwoPointFour(::System::String* serialNumber, ::System::Boolean isLongRange)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOUPDATETWOPOINTFOUR_OFFSET))(serialNumber, isLongRange);
		}

		static ::System::Void ReportEnd_PhotoUpdateTwoPointFour(::System::String* serialNumber, ::System::Boolean isFinish, ::System::Int32 costTime, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* result, ::System::Boolean isLongRange)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOUPDATETWOPOINTFOUR_OFFSET))(serialNumber, isFinish, costTime, result, isLongRange);
		}

		static ::System::UInt32 _GetOwnerGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETOWNERGROUPID_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _GenTargetInfoListExtraData(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* result)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENTARGETINFOLISTEXTRADATA_OFFSET))(result);
		}

		static ::System::String* _GetPhotoUpdateReportGameKey(::System::Boolean isLongRange)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETPHOTOUPDATEREPORTGAMEKEY_OFFSET))(isLongRange);
		}

		static ::System::Void ReportBegin_TrackPhoto(::System::String* serialNumber)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_TRACKPHOTO_OFFSET))(serialNumber);
		}

		static ::System::Void ReportEnd_TrackPhoto(::System::String* serialNumber, ::System::Boolean isFinish, ::System::Int32 costTime, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* result)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_TRACKPHOTO_OFFSET))(serialNumber, isFinish, costTime, result);
		}

		static ::System::String* _GetCameraPositionNativeString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETCAMERAPOSITIONNATIVESTRING_OFFSET))();
		}

		static ::System::Void ReportBegin_PhotoExhibition(::System::Boolean isHuaHuoCamera, ::System::String* serialNumber)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOEXHIBITION_OFFSET))(isHuaHuoCamera, serialNumber);
		}

		static ::System::Void ReportEnd_PhotoExhibition(::System::Boolean isHuaHuoCamera, ::System::String* serialNumber, ::System::Boolean isFinish, ::System::Int32 costTime)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOEXHIBITION_OFFSET))(isHuaHuoCamera, serialNumber, isFinish, costTime);
		}

		static ::System::Boolean CanLockTripod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CANLOCKTRIPOD_OFFSET))();
		}

		static ::System::Boolean TryLockTripod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_TRYLOCKTRIPOD_OFFSET))();
		}

		static ::System::Void ResetTripod()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETTRIPOD_OFFSET))();
		}

		static ::System::Boolean IsInTripod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISINTRIPOD_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateTripodModePlayerCollider(::UnityEngine::Vector3 tripodPos, ::System::Single tripodYaw, ::UnityEngine::Vector2 size, ::UnityEngine::Vector3 offset)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_OFFSET))(tripodPos, tripodYaw, size, offset);
		}

		static ::UnityEngine::GameObject* _CreateTripodWall(::UnityEngine::Quaternion tripodRot, ::UnityEngine::Vector3 wallPos, ::UnityEngine::Vector3 wallSize, ::System::Int32 layer, ::System::String* wallName, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CREATETRIPODWALL_OFFSET))(tripodRot, wallPos, wallSize, layer, wallName, parent);
		}

		static ::UnityEngine::GameObject* CreateTripodModePlayerCollider_1(::UnityEngine::Vector3 tripodPos, ::System::Single radius)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_1_OFFSET))(tripodPos, radius);
		}

		static ::System::Void GenerateCircularWallMeshWithBoxCollider(::UnityEngine::Transform* parent, ::System::Int32 layer, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESHWITHBOXCOLLIDER_OFFSET))(parent, layer, radius);
		}

		static ::UnityEngine::GameObject* GenerateCircularWallMesh(::UnityEngine::Transform* parent, ::System::Int32 layer, ::System::Single innerRadius, ::System::Single outerRadius)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESH_OFFSET))(parent, layer, innerRadius, outerRadius);
		}

		static ::System::Void SetCameraZoomEnable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAZOOMENABLE_OFFSET))(isEnable);
		}

		static ::System::Void SetCameraRotateEnable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAROTATEENABLE_OFFSET))(isEnable);
		}

		static ::System::Void _SetPlayerActionEnable(::System::String* actionName, ::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SETPLAYERACTIONENABLE_OFFSET))(actionName, isEnable);
		}

		static ::System::Boolean _CheckGiantObjectVisible(::UnityEngine::Vector3 worldPos, ::System::Single radius, ::UnityEngine::Collider* targetCollider)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKGIANTOBJECTVISIBLE_OFFSET))(worldPos, radius, targetCollider);
		}

		static ::System::Single CheckGiantObjectRatioInRect(::UnityEngine::Vector3 worldPos, ::System::Single radius)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKGIANTOBJECTRATIOINRECT_OFFSET))(worldPos, radius);
		}

		static ::System::Int32 _CheckSinglePosArrayAllWithOutRaycast(::Il2CppArray<::UnityEngine::Vector3>* posArray, ::System::Single radius, ::UnityEngine::Matrix4x4 transMatrix, ::UnityEngine::Camera* camera)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAYALLWITHOUTRAYCAST_OFFSET))(posArray, radius, transMatrix, camera);
		}

		static ::System::Boolean _CheckSinglePosArray(::Il2CppArray<::UnityEngine::Vector3>* posArray, ::System::Single radius, ::UnityEngine::Matrix4x4 transMatrix, ::UnityEngine::Vector3 cameraPos, ::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAY_OFFSET))(posArray, radius, transMatrix, cameraPos, camera);
		}

		static ::System::Void _GenCheckPosArray()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENCHECKPOSARRAY_OFFSET))();
		}

		static ::System::Boolean _GiantObjectDetectRayCastPass(::UnityEngine::Vector3 posStart, ::UnityEngine::Vector3 posEnd)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GIANTOBJECTDETECTRAYCASTPASS_OFFSET))(posStart, posEnd);
		}

		static ::System::Void _DrawAllGiantObjectDetectPos(::System::Single ratio, ::System::Single radius, ::UnityEngine::Matrix4x4 transMatrix)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWALLGIANTOBJECTDETECTPOS_OFFSET))(ratio, radius, transMatrix);
		}

		static ::System::Void _DrawGiantObjectDetectPos(::Il2CppArray<::UnityEngine::Vector3>* posArray, ::System::Single radius, ::UnityEngine::Matrix4x4 transMatrix)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWGIANTOBJECTDETECTPOS_OFFSET))(posArray, radius, transMatrix);
		}

		static ::System::Void AsyncAddImageWaterMark(::UnityEngine::RenderTexture* rt, ::UnityEngine::UI::Image* img, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Image*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDIMAGEWATERMARK_OFFSET))(rt, img, finishCallback);
		}

		static ::System::Void AsyncAddTextWaterMark(::UnityEngine::RenderTexture* rt, ::UnityEngine::UI::Text* text, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Text*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDTEXTWATERMARK_OFFSET))(rt, text, finishCallback);
		}

		static ::System::Void _DrawImage(::UnityEngine::RenderTexture* rt, ::UnityEngine::UI::Image* img)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWIMAGE_OFFSET))(rt, img);
		}

		static ::System::Void _DrawText(::UnityEngine::RenderTexture* rt, ::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWTEXT_OFFSET))(rt, text);
		}

		static ::RPG::Client::BillboardShowType GetBillboardShowType()
		{
			return ((::RPG::Client::BillboardShowType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBILLBOARDSHOWTYPE_OFFSET))();
		}

		static ::System::Void GetCurrentPhotoOverrideFovRange(::System::Single& min, ::System::Single& max)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOOVERRIDEFOVRANGE_OFFSET))(min, max);
		}

		static ::System::Boolean GetEnableShotNoneTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETENABLESHOTNONETARGET_OFFSET))();
		}

		static ::System::Void SwitchPhotoGraphDragMode(::System::Boolean enable, ::Class_1_854A2C7905ADF31B* swipeParam)
		{
			return ((::System::Void(*)(::System::Boolean, ::Class_1_854A2C7905ADF31B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SWITCHPHOTOGRAPHDRAGMODE_OFFSET))(enable, swipeParam);
		}

		static ::RPG::Client::PhotoGraphResultConditionPack* GetCurrentPhotoConditionPack()
		{
			return ((::RPG::Client::PhotoGraphResultConditionPack*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOCONDITIONPACK_OFFSET))();
		}

		static ::System::Void SetPhotoShotResultFovLevel(::System::Boolean isEnable, ::RPG::GameCore::PhotoGraphFovLevel level)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::PhotoGraphFovLevel))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETPHOTOSHOTRESULTFOVLEVEL_OFFSET))(isEnable, level);
		}

		static ::System::Boolean SaveScreenCapture(::RPG::Client::PhotoGraphFilterImage* image, ::System::String* name, ::RPG::Client::PhotoGraphUtils_StorageFormatType formatType)
		{
			return ((::System::Boolean(*)(::RPG::Client::PhotoGraphFilterImage*, ::System::String*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SAVESCREENCAPTURE_OFFSET))(image, name, formatType);
		}

		static ::System::Boolean IsIdentifyMode(::RPG::GameCore::PhotoGraphModeType modeType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISIDENTIFYMODE_OFFSET))(modeType);
		}

		static ::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>* GetBytesByScreenCapture(::RPG::Client::PhotoGraphFilterImage* image, ::RPG::Client::PhotoGraphUtils_StorageFormatType formatType)
		{
			return ((::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>*(*)(::RPG::Client::PhotoGraphFilterImage*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBYTESBYSCREENCAPTURE_OFFSET))(image, formatType);
		}

		static ::System::Collections::IEnumerator* GenerateScreenCaptureCoroutine(::RPG::Client::PhotoGraphFilterImage* image, ::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>* promise, ::RPG::Client::PhotoGraphUtils_StorageFormatType formatType)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::Client::PhotoGraphFilterImage*, ::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GENERATESCREENCAPTURECOROUTINE_OFFSET))(image, promise, formatType);
		}

		static ::System::Void _SaveScreenCapture(::System::String* name, ::Il2CppArray<::System::Byte>* bytes, ::System::Action_1<::System::Boolean>* saveCallback)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SAVESCREENCAPTURE_OFFSET))(name, bytes, saveCallback);
		}

		static ::Unity::Collections::NativeArray_1<::System::Byte> _ConvertDataByFormatType(::Unity::Collections::NativeArray_1<::System::Byte> data, ::UnityEngine::RenderTexture* rt, ::RPG::Client::PhotoGraphUtils_StorageFormatType formatType)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::Unity::Collections::NativeArray_1<::System::Byte>, ::UnityEngine::RenderTexture*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CONVERTDATABYFORMATTYPE_OFFSET))(data, rt, formatType);
		}

		static ::System::Void _SaveToGallery(::Il2CppArray<::System::Byte>* mediaBytes, ::System::String* fileName, ::System::Action_1<::System::Boolean>* saveCallback, ::System::String* title, ::System::String* desc)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOGALLERY_OFFSET))(mediaBytes, fileName, saveCallback, title, desc);
		}

		static ::System::Void _TryCacheSaveDataAndRequestPermission(::Il2CppArray<::System::Byte>* mediaBytes, ::System::String* fileName, ::System::Action_1<::System::Boolean>* saveCallback, ::System::String* title, ::System::String* desc)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__TRYCACHESAVEDATAANDREQUESTPERMISSION_OFFSET))(mediaBytes, fileName, saveCallback, title, desc);
		}

		static ::System::Void _OnRequestPermission(::System::Object* arg)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__ONREQUESTPERMISSION_OFFSET))(arg);
		}

		static ::System::Void _ClearCachedImageSaveData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CLEARCACHEDIMAGESAVEDATA_OFFSET))();
		}

		static ::System::Void _SaveToLocal(::Il2CppArray<::System::Byte>* mediaBytes, ::System::String* fileName, ::System::Action_1<::System::Boolean>* saveCallback)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOLOCAL_OFFSET))(mediaBytes, fileName, saveCallback);
		}

		static ::System::Void ClearImageSaveBytesBuffer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CLEARIMAGESAVEBYTESBUFFER_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* _GetBytesBuffer(::System::UInt32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETBYTESBUFFER_OFFSET))(size);
		}
	};
}
