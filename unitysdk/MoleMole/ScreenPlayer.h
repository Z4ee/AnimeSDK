#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7679BF924C438A9.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_1_8A43CC995889687F;
class Class_2_7DB115CD9B835DB7;
class Class_3_6AF6C981EBC616F8;
class ScreenPlayData;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer_TextureSheet; }
namespace MoleMole::Config { class BaseConfigSoundAction; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B4CE00)
#define MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0x15B4AD20)
#define MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x15B4ADA0)
#define MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x15B4D020)
#define MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x15B4AD40)
#define MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET UNITYSDK_OFFSET(0x15B4ADC0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_031CF150391E9B14_OFFSET UNITYSDK_OFFSET(0x15B4DB80)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_032AD3EBC52FC91C_OFFSET UNITYSDK_OFFSET(0x15B4BD50)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x15B4CB10)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x15B4CAB0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15B4C730)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_154998A4087BBA4C_OFFSET UNITYSDK_OFFSET(0x15B4F0C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1A404CB54D6A64FA_OFFSET UNITYSDK_OFFSET(0x15B454F0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x15B45400)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1CF84FBD817B0F20_OFFSET UNITYSDK_OFFSET(0x15B4DE00)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15B4E4F0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x15B4C430)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_28A5AB1678E791E7_OFFSET UNITYSDK_OFFSET(0x15B4E1A0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0x15B4E080)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15B4E2B0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_34E27C48868DCFB3_OFFSET UNITYSDK_OFFSET(0x15B4BA70)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_350550DCFC0FEDEF_OFFSET UNITYSDK_OFFSET(0x15B4DE40)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_35AA1256336E8112_OFFSET UNITYSDK_OFFSET(0x15B4E6D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3BFA5FDDE49C0147_OFFSET UNITYSDK_OFFSET(0x15B4E110)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3EAE0F6D775220FA_1_OFFSET UNITYSDK_OFFSET(0x15B4D950)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3EAE0F6D775220FA_OFFSET UNITYSDK_OFFSET(0x15B4D8C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3F0D4D20CAA05725_OFFSET UNITYSDK_OFFSET(0x15B4E7B0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_44D54B0829C8FEF6_OFFSET UNITYSDK_OFFSET(0x15B4D620)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_4BCD51618C77AD95_OFFSET UNITYSDK_OFFSET(0x15B4BCD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_4E3DD1117F270CB9_OFFSET UNITYSDK_OFFSET(0x15B4DD30)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_50FFE8C44036C61A_OFFSET UNITYSDK_OFFSET(0x15B4E920)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x15B4CB70)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_5829557A8D4350F5_OFFSET UNITYSDK_OFFSET(0x15B4B260)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_5CE94B0371C7CF88_OFFSET UNITYSDK_OFFSET(0x15B4DA20)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x15B4D1D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_6ADFEDF7DB9C3207_OFFSET UNITYSDK_OFFSET(0x15B4E960)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_70BDBAE57C1C9100_OFFSET UNITYSDK_OFFSET(0x15B4E0D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_70E4F26A47681690_OFFSET UNITYSDK_OFFSET(0x15B4DB00)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x15B4B770)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_7DF99BC7DA8A7C9A_OFFSET UNITYSDK_OFFSET(0x15B4E230)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x15B4C880)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x15B45360)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_95D695706D6CB2FE_OFFSET UNITYSDK_OFFSET(0x15B4DBD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15B4CD90)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A3791237F591E8B7_OFFSET UNITYSDK_OFFSET(0x15B4E850)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x15B4EFD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A97A6D4EE559F25B_OFFSET UNITYSDK_OFFSET(0x15B4F050)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_AE721E797323F86D_OFFSET UNITYSDK_OFFSET(0x15B4AF30)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15B4E6E0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B230178832541A63_OFFSET UNITYSDK_OFFSET(0x15B4D080)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15B4D9E0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15B4DDC0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x15B4E770)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x15B4C3D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B4CFE0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CD7415D0B2EB38A2_OFFSET UNITYSDK_OFFSET(0x15B4E630)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_D14907C13C942E04_OFFSET UNITYSDK_OFFSET(0x15B4E370)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_DD3CBC2B9281362E_OFFSET UNITYSDK_OFFSET(0x15B4F550)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_F4C1D793AF9ACD74_OFFSET UNITYSDK_OFFSET(0x15B4DA50)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_F5D0DA719A67CFAD_OFFSET UNITYSDK_OFFSET(0x15B4E560)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FE431D5F8C37F295_OFFSET UNITYSDK_OFFSET(0x15B4B0B0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FED43F89BEEE494D_OFFSET UNITYSDK_OFFSET(0x15B4DF40)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FF8E81CF7F8437BB_OFFSET UNITYSDK_OFFSET(0x15B4E8F0)
#define MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0x15B4AD30)
#define MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x15B4ADB0)
#define MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET UNITYSDK_OFFSET(0x15B4ADD0)
#define MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15B4ADE0)
#define MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B4D840)
#define MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B4B980)
#define MOLEMOLE_SCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4AF90)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TypeDefinitionIndex = 45731;

	class ScreenPlayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Hue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x488A0);
		}
		static ::System::String** StaticGet_Value()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x488A8);
		}
		static ::System::String** StaticGet_BlendKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x488B0);
		}
		static ::System::String** StaticGet_Saturation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x488B8);
		}
		static ::System::Int32* StaticGet__ScreenMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x11750);
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
		::Class_3_6AF6C981EBC616F8* _blendTextureSheetVeUpdater; // 0x70
		::Struct_2_6E23A591AC26A31E ScreenMatInfoNew; // 0x78
		::Struct_2_6E23A591AC26A31E ScreenMatInfoOld; // 0x5A0
		::MoleMole::IVideoPlayer* _videoPlayer; // 0xAC8
		::Foundation::AssetRequestHandle _videoRequest; // 0xAD0
		::System::Boolean isPlayingVideo; // 0xAF0
		::System::Boolean openAsyncLoadNextTexture; // 0xAF1
		::System::Boolean isDebug; // 0xAF2
		::UnityEngine::GameObject* soundStaticEmitter; // 0xAF8
		::System::Boolean muteSound; // 0xB00
		::System::Boolean switchNotClean; // 0xB01
		::System::String* ownerGameobjectPath; // 0xB08
		::System::Single cacheForceWrapRepeat; // 0xB10
		::System::Boolean IsNeedFindRender; // 0xB14
		::System::Boolean _ForceUpdate_k__BackingField; // 0xB15
		::UnityEngine::GameObject* _ScreenGO_k__BackingField; // 0xB18
		::Foundation::Coroutine::CoroutineHandle delayPlay; // 0xB20

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

		::System::Void Method_1_34E27C48868DCFB3(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_34E27C48868DCFB3_OFFSET))(this, a1);
		}

		::System::Void Method_1_032AD3EBC52FC91C(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_032AD3EBC52FC91C_OFFSET))(this, a1);
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

		::System::Void Method_1_44D54B0829C8FEF6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_44D54B0829C8FEF6_OFFSET))(this);
		}

		::System::Void Method_1_3EAE0F6D775220FA(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3EAE0F6D775220FA_OFFSET))(this, a1);
		}

		::System::Void Method_1_3EAE0F6D775220FA_1(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3EAE0F6D775220FA_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Boolean Method_1_7A4DA50406643EC6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_7A4DA50406643EC6_OFFSET))(this);
		}

		::System::Void Method_1_5CE94B0371C7CF88(::Class_1_5A6771CD0CA2718D* a1, ::UnityEngine::Vector4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_5CE94B0371C7CF88_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_F4C1D793AF9ACD74(::System::Collections::Generic::List_1<::ScreenPlayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_F4C1D793AF9ACD74_OFFSET))(this, a1);
		}

		::System::Void Method_1_70E4F26A47681690(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_70E4F26A47681690_OFFSET))(this, a1);
		}

		::System::Void Method_1_1A404CB54D6A64FA(::ScreenPlayData* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1A404CB54D6A64FA_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_1_4BCD51618C77AD95()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_4BCD51618C77AD95_OFFSET))(this);
		}

		::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
		}

		::System::Void Method_1_031CF150391E9B14(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_031CF150391E9B14_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* Method_1_4E3DD1117F270CB9()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_4E3DD1117F270CB9_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer_TextureSheet* Method_1_1CF84FBD817B0F20()
		{
			return ((::MoleMole::ScreenPlayer_TextureSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1CF84FBD817B0F20_OFFSET))(this);
		}

		::System::Void Method_1_350550DCFC0FEDEF(::System::Collections::Generic::List_1<::ScreenPlayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_350550DCFC0FEDEF_OFFSET))(this, a1);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_1_FED43F89BEEE494D(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FED43F89BEEE494D_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::ScreenPlayData*>* Method_1_70BDBAE57C1C9100()
		{
			return ((::System::Collections::Generic::List_1<::ScreenPlayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_70BDBAE57C1C9100_OFFSET))(this);
		}

		::System::Void Method_1_3BFA5FDDE49C0147(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3BFA5FDDE49C0147_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_5829557A8D4350F5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_5829557A8D4350F5_OFFSET))(this);
		}

		::System::Void Method_1_28A5AB1678E791E7(::System::Int32 a1, ::ScreenPlayData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_28A5AB1678E791E7_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_7DF99BC7DA8A7C9A(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_7DF99BC7DA8A7C9A_OFFSET))(this, a1);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_D14907C13C942E04(::System::Action* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_D14907C13C942E04_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_F5D0DA719A67CFAD(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_F5D0DA719A67CFAD_OFFSET))(this, a1);
		}

		::System::Void Method_1_CD7415D0B2EB38A2(::MoleMole::IVideoPlayer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CD7415D0B2EB38A2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_35AA1256336E8112(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_35AA1256336E8112_OFFSET))(this, a1);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_AE721E797323F86D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_AE721E797323F86D_OFFSET))(this);
		}

		::System::Void Method_1_3F0D4D20CAA05725(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3F0D4D20CAA05725_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_A3791237F591E8B7(::UnityEngine::LOD a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::LOD))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A3791237F591E8B7_OFFSET))(a1);
		}

		::System::Void Method_1_FF8E81CF7F8437BB(::Class_1_5A6771CD0CA2718D* a1, ::MoleMole::HollowPieceBlendMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FF8E81CF7F8437BB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_50FFE8C44036C61A()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_50FFE8C44036C61A_OFFSET))(this);
		}

		::System::Void Method_1_6ADFEDF7DB9C3207(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_6ADFEDF7DB9C3207_OFFSET))(this, a1);
		}

		::System::Void Method_1_95D695706D6CB2FE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_95D695706D6CB2FE_OFFSET))(this);
		}

		::System::Void Method_1_2CAADC051AEB67F9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_2CAADC051AEB67F9_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_1_A97A6D4EE559F25B(::MoleMole::StaticSceneObjectListLoopType a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticSceneObjectListLoopType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A97A6D4EE559F25B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_154998A4087BBA4C(::MoleMole::BlendTextureSheetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BlendTextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_154998A4087BBA4C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DD3CBC2B9281362E(::UnityEngine::Material* a1, ::Struct_2_6E23A591AC26A31E a2, ::Struct_2_6E23A591AC26A31E a3, ::Class_2_7DB115CD9B835DB7* a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::Struct_2_6E23A591AC26A31E, ::Struct_2_6E23A591AC26A31E, ::Class_2_7DB115CD9B835DB7*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_DD3CBC2B9281362E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
