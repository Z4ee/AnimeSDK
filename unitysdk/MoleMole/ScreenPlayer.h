#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7679BF924C438A9.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/Struct_2_BCEA3C06DDE2274F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_1_8A43CC995889687F;
class Class_2_7DB115CD9B835DB7;
class Class_3_4A66A9AA1229EED9;
class ScreenPlayData;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer_TextureSheet; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole::Config { class BaseConfigSoundAction; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190AAD40)
#define MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0x190A8540)
#define MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x190A85C0)
#define MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x190AAF60)
#define MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x190A8560)
#define MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET UNITYSDK_OFFSET(0x190A85E0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_04349BAD038A876C_OFFSET UNITYSDK_OFFSET(0x190AC0D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x190A9C40)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x190AA690)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x190AA630)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x190AA2C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_13877A6D73DFA168_OFFSET UNITYSDK_OFFSET(0x190B0C60)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_154998A4087BBA4C_OFFSET UNITYSDK_OFFSET(0x190AC9C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1A404CB54D6A64FA_OFFSET UNITYSDK_OFFSET(0x190AC230)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x190B1080)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1CF84FBD817B0F20_OFFSET UNITYSDK_OFFSET(0x190B1040)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x190B0D50)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x190AB580)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x190A9FC0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_28A5AB1678E791E7_OFFSET UNITYSDK_OFFSET(0x190B0950)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0x190B0B50)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_2E5CA3725B39C818_OFFSET UNITYSDK_OFFSET(0x190A9280)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x190B06E0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_350550DCFC0FEDEF_OFFSET UNITYSDK_OFFSET(0x190AC6D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3BFA5FDDE49C0147_OFFSET UNITYSDK_OFFSET(0x190B0DC0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x190AA920)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3EAE0F6D775220FA_OFFSET UNITYSDK_OFFSET(0x190B0FB0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3F0D4D20CAA05725_OFFSET UNITYSDK_OFFSET(0x190AC920)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_41C3C66B2D4132A8_OFFSET UNITYSDK_OFFSET(0x190AC070)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_4BCD51618C77AD95_OFFSET UNITYSDK_OFFSET(0x190A94D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_4E3DD1117F270CB9_OFFSET UNITYSDK_OFFSET(0x190B07A0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_50FFE8C44036C61A_OFFSET UNITYSDK_OFFSET(0x190B1140)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x190AA6F0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_5829557A8D4350F5_OFFSET UNITYSDK_OFFSET(0x190A8A70)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_5CE94B0371C7CF88_OFFSET UNITYSDK_OFFSET(0x190ACE60)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x190AB110)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_6ADFEDF7DB9C3207_OFFSET UNITYSDK_OFFSET(0x190AB8C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_70BDBAE57C1C9100_OFFSET UNITYSDK_OFFSET(0x190B0C20)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_74F9575C1C2A5360_OFFSET UNITYSDK_OFFSET(0x190B0BB0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_77B8789DBD3FC5F6_OFFSET UNITYSDK_OFFSET(0x190B0E90)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x190A8F80)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_7DF99BC7DA8A7C9A_OFFSET UNITYSDK_OFFSET(0x190B0450)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_83F6B9A4C76036E5_OFFSET UNITYSDK_OFFSET(0x190A9550)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x190AA410)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x190ABFD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_94B03BF93EE7A609_OFFSET UNITYSDK_OFFSET(0x190B0F20)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x190AACD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A3791237F591E8B7_OFFSET UNITYSDK_OFFSET(0x190AB820)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x190B0CD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A69FA5E6168C596B_OFFSET UNITYSDK_OFFSET(0x190AC7D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_AE721E797323F86D_OFFSET UNITYSDK_OFFSET(0x190A8750)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x190B04D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B230178832541A63_OFFSET UNITYSDK_OFFSET(0x190AAFC0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x190B0BA0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x190A9BE0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x190B08D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x190B0910)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x190B0E50)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x190AAF20)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CD7415D0B2EB38A2_OFFSET UNITYSDK_OFFSET(0x190B0830)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_D14907C13C942E04_OFFSET UNITYSDK_OFFSET(0x190B0560)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_DD3CBC2B9281362E_OFFSET UNITYSDK_OFFSET(0x190ACE90)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_F4C1D793AF9ACD74_OFFSET UNITYSDK_OFFSET(0x190ABF20)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_F5D0DA719A67CFAD_OFFSET UNITYSDK_OFFSET(0x190AC850)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FE431D5F8C37F295_OFFSET UNITYSDK_OFFSET(0x190A88C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FED43F89BEEE494D_OFFSET UNITYSDK_OFFSET(0x190B0A10)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FF8E81CF7F8437BB_OFFSET UNITYSDK_OFFSET(0x190B09E0)
#define MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0x190A8550)
#define MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x190A85D0)
#define MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET UNITYSDK_OFFSET(0x190A85F0)
#define MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x190A8600)
#define MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190AB7A0)
#define MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x190A9190)
#define MOLEMOLE_SCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x190A87B0)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TypeDefinitionIndex = 40791;

	class ScreenPlayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Saturation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x4A9C0);
		}
		static ::System::String** StaticGet_Value()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x4A9C8);
		}
		static ::System::String** StaticGet_BlendKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x4A9D0);
		}
		static ::System::String** StaticGet_Hue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x4A9D8);
		}
		static ::System::Int32* StaticGet__ScreenMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x11370);
		}
		// static const ::System::String* CRIWARE_MAT_KEY; // 0x0
		::Class_1_8A43CC995889687F* _lodMaterialProxy; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x18
		::Enum_3_B7679BF924C438A9 _lodType; // 0x20
		::MoleMole::StaticSceneObjectListLoopType playMode; // 0x24
		::System::Collections::Generic::List_1<::ScreenPlayData*>* quests; // 0x28
		::System::Boolean isPlaying; // 0x30
		::ScreenPlayData* _currentPlayData_k__BackingField; // 0x38
		::System::Int32 currentPlayIndex; // 0x40
		::System::Boolean mpbFullCopy; // 0x44
		::System::Action* playSuccess; // 0x48
		::System::Action* playFaild; // 0x50
		::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoPrepared; // 0x58
		::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoStarted; // 0x60
		::MoleMole::ScreenPlayer_TextureSheet* _playerTextureSheet; // 0x68
		::Class_3_4A66A9AA1229EED9* _blendTextureSheetVeUpdater; // 0x70
		::Struct_2_BCEA3C06DDE2274F ScreenMatInfoNew; // 0x78
		::Struct_2_BCEA3C06DDE2274F ScreenMatInfoOld; // 0x5A0
		::MoleMole::IVideoPlayer* _videoPlayer; // 0xAC8
		::Foundation::AssetRequestHandle _videoRequest; // 0xAD0
		::System::Boolean isPlayingVideo; // 0xAF0
		::System::Boolean openAsyncLoadNextTexture; // 0xAF1
		::System::Boolean isDebug; // 0xAF2
		::UnityEngine::GameObject* soundStaticEmitter; // 0xAF8
		::System::Boolean muteSound; // 0xB00
		::System::Boolean _hasVideoAudio; // 0xB01
		::System::String* _currentVideoStopEvent; // 0xB08
		::System::Boolean switchNotClean; // 0xB10
		::System::String* ownerGameobjectPath; // 0xB18
		::System::Single cacheForceWrapRepeat; // 0xB20
		::System::Boolean IsNeedFindRender; // 0xB24
		::System::Boolean _ForceUpdate_k__BackingField; // 0xB25
		::UnityEngine::GameObject* _ScreenGO_k__BackingField; // 0xB28
		::Foundation::Coroutine::CoroutineHandle delayPlay; // 0xB30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET))();
		}

		::ScreenPlayData* get_currentPlayData()
		{
			return ((::ScreenPlayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET))(this);
		}

		::System::Void set_currentPlayData(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_ForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void set_ForceUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ScreenGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET))(this);
		}

		::System::Void set_ScreenGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_1_FE431D5F8C37F295(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FE431D5F8C37F295_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_2E5CA3725B39C818(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_2E5CA3725B39C818_OFFSET))(this, a1);
		}

		::System::Void Method_1_83F6B9A4C76036E5(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_83F6B9A4C76036E5_OFFSET))(this, a1);
		}

		::System::Void Method_1_26E509975F92479C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_26E509975F92479C_OFFSET))(this, a1);
		}

		::System::Void Method_1_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
		}

		::System::Void Method_1_0CC4BC19C602BCD0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_1_OFFSET))(this);
		}

		::System::Void Method_1_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Texture* get_GetRenderTargetTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void Method_1_B230178832541A63(::MoleMole::Config::BaseConfigSoundAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseConfigSoundAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_B230178832541A63_OFFSET))(this, a1);
		}

		::System::Void Method_1_23C3681AC9E5D438()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_23C3681AC9E5D438_OFFSET))(this);
		}

		::System::Boolean Method_1_AE721E797323F86D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_AE721E797323F86D_OFFSET))(this);
		}

		static ::System::Boolean Method_1_A3791237F591E8B7(::UnityEngine::LOD a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::LOD))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A3791237F591E8B7_OFFSET))(a1);
		}

		::System::Void Method_1_6ADFEDF7DB9C3207(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_6ADFEDF7DB9C3207_OFFSET))(this, a1);
		}

		::System::Void Method_1_F4C1D793AF9ACD74(::System::Collections::Generic::List_1<::ScreenPlayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_F4C1D793AF9ACD74_OFFSET))(this, a1);
		}

		::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
		}

		::System::Void Method_1_41C3C66B2D4132A8(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_41C3C66B2D4132A8_OFFSET))(this, a1);
		}

		::System::Void Method_1_1A404CB54D6A64FA(::ScreenPlayData* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1A404CB54D6A64FA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_350550DCFC0FEDEF(::System::Collections::Generic::List_1<::ScreenPlayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_350550DCFC0FEDEF_OFFSET))(this, a1);
		}

		::System::Void Method_1_A69FA5E6168C596B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A69FA5E6168C596B_OFFSET))(this, a1);
		}

		::System::Void Method_1_F5D0DA719A67CFAD(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_F5D0DA719A67CFAD_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_3F0D4D20CAA05725(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3F0D4D20CAA05725_OFFSET))(this, a1);
		}

		::System::Void Method_1_154998A4087BBA4C(::MoleMole::BlendTextureSheetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BlendTextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_154998A4087BBA4C_OFFSET))(this, a1);
		}

		::System::Void Method_1_5CE94B0371C7CF88(::Class_1_5A6771CD0CA2718D* a1, ::UnityEngine::Vector4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_5CE94B0371C7CF88_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_0865E94460F11643_OFFSET))(this);
		}

		::System::Boolean Method_1_7A4DA50406643EC6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_7A4DA50406643EC6_OFFSET))(this);
		}

		::System::Void Method_1_3BFE3B9EF8374F61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3BFE3B9EF8374F61_OFFSET))(this);
		}

		::System::Boolean Method_1_DD3CBC2B9281362E(::UnityEngine::Material* a1, ::Struct_2_BCEA3C06DDE2274F a2, ::Struct_2_BCEA3C06DDE2274F a3, ::Class_2_7DB115CD9B835DB7* a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::Struct_2_BCEA3C06DDE2274F, ::Struct_2_BCEA3C06DDE2274F, ::Class_2_7DB115CD9B835DB7*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_DD3CBC2B9281362E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* Method_1_7DF99BC7DA8A7C9A(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_7DF99BC7DA8A7C9A_OFFSET))(this, a1);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_D14907C13C942E04(::System::Action* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_D14907C13C942E04_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Renderer* Method_1_4E3DD1117F270CB9()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_4E3DD1117F270CB9_OFFSET))(this);
		}

		::System::Void Method_1_CD7415D0B2EB38A2(::MoleMole::IVideoPlayer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CD7415D0B2EB38A2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_1_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_1_28A5AB1678E791E7(::System::Int32 a1, ::ScreenPlayData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_28A5AB1678E791E7_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_4BCD51618C77AD95()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_4BCD51618C77AD95_OFFSET))(this);
		}

		::System::Void Method_1_FF8E81CF7F8437BB(::Class_1_5A6771CD0CA2718D* a1, ::MoleMole::HollowPieceBlendMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FF8E81CF7F8437BB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_FED43F89BEEE494D(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FED43F89BEEE494D_OFFSET))(this, a1);
		}

		::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
		}

		::System::Void Method_1_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Boolean Method_1_74F9575C1C2A5360(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_74F9575C1C2A5360_OFFSET))(this, a1);
		}

		::System::Void Method_1_04349BAD038A876C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_04349BAD038A876C_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ScreenPlayData*>* Method_1_70BDBAE57C1C9100()
		{
			return ((::System::Collections::Generic::List_1<::ScreenPlayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_70BDBAE57C1C9100_OFFSET))(this);
		}

		::System::Void Method_1_13877A6D73DFA168(::MoleMole::StaticSceneObjectListLoopType a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticSceneObjectListLoopType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_13877A6D73DFA168_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_1_3BFA5FDDE49C0147(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3BFA5FDDE49C0147_OFFSET))(this, a1);
		}

		::System::Void Method_1_2CAADC051AEB67F9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_2CAADC051AEB67F9_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_1_77B8789DBD3FC5F6(::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_77B8789DBD3FC5F6_OFFSET))(this, a1);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_1_5829557A8D4350F5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_5829557A8D4350F5_OFFSET))(this);
		}

		::System::Void Method_1_94B03BF93EE7A609(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_94B03BF93EE7A609_OFFSET))(this, a1);
		}

		::System::Void Method_1_3EAE0F6D775220FA(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3EAE0F6D775220FA_OFFSET))(this, a1);
		}

		::MoleMole::ScreenPlayer_TextureSheet* Method_1_1CF84FBD817B0F20()
		{
			return ((::MoleMole::ScreenPlayer_TextureSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1CF84FBD817B0F20_OFFSET))(this);
		}

		::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_50FFE8C44036C61A()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_50FFE8C44036C61A_OFFSET))(this);
		}
	};
}
