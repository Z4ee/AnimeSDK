#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/ComicDialogEmitterBehavior_FadeMode.h"
#include "unitysdk/RPG/Client/ComicDialogEmitterBehavior_TextDirection.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_B3CFB45E7E960210.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ComicDialogEmitterBehavior; }
namespace RPG::Client { class ComicDialogEmitterBehavior_DialogData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xCC4FE40)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xCC53CA0)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xCC53C80)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0xCC53C60)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xCC53D50)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xCC54060)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_4967C5B92C502D51_1_OFFSET UNITYSDK_OFFSET(0xCC53C40)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_4967C5B92C502D51_OFFSET UNITYSDK_OFFSET(0xCC53C20)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_53DEB092240C71C8_1_OFFSET UNITYSDK_OFFSET(0xCC53C50)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_53DEB092240C71C8_OFFSET UNITYSDK_OFFSET(0xCC53C30)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xCC53C90)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0xCC53C70)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC54100)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCC54070)

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterMonoPlugin_TypeDefinitionIndex = 70844;

	class ComicDialogEmitterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ComicDialogEmitterBehavior*>
	{
	public:
		static ::System::String** StaticGet_FADILKPGCEM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ComicDialogEmitterMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x57AD0);
		}
		::UnityEngine::Mesh* PatternMesh; // 0x30
		::UnityEngine::Material* BackMaterial; // 0x38
		::UnityEngine::Material* TextMaterial; // 0x40
		::System::String* FontAssetPath; // 0x48
		::System::Int32 SelectedIndex; // 0x50
		::Il2CppArray<::RPG::Client::ComicDialogEmitterBehavior_DialogData*>* DialogDatas; // 0x58
		::RPG::Client::ComicDialogEmitterBehavior_TextDirection TextDirection; // 0x60
		::System::Single TextSize; // 0x64
		::UnityEngine::Vector2 TextPadding; // 0x68
		::System::Single BackboardPadding; // 0x70
		::UnityEngine::Color TextColor; // 0x74
		::UnityEngine::Color TextColor2; // 0x84
		::System::Single BackboardRatio; // 0x94
		::System::Int32 MaxCount; // 0x98
		::System::Single DialogRefresh; // 0x9C
		::System::Single TextRefresh; // 0xA0
		::System::Single LifeAfterTextRefresh; // 0xA4
		::System::Single FadeTime; // 0xA8
		::System::UInt32 FadeInMode; // 0xAC
		::System::UInt32 FadeOutMode; // 0xB0
		::System::Boolean IfEmitByDist; // 0xB4
		::System::Single EmitDist; // 0xB8
		::System::Boolean IfUseFrustumCulling; // 0xBC
		::System::Boolean IfUseAudio; // 0xBD
		::System::Boolean IfSetAudioPerDialog; // 0xBE
		::System::String* AudioEventName; // 0xC0
		::System::Single AudioDelay; // 0xC8
		::System::Boolean _IfShowAllDialog_k__BackingField; // 0xCC
		::UnityEngine::GameObject* _AudioPlayerGO_k__BackingField; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN__CCTOR_OFFSET))();
		}

		::RPG::Client::ComicDialogEmitterBehavior_FadeMode Method_7_4967C5B92C502D51()
		{
			return ((::RPG::Client::ComicDialogEmitterBehavior_FadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_4967C5B92C502D51_OFFSET))(this);
		}

		::System::Void Method_7_53DEB092240C71C8(::RPG::Client::ComicDialogEmitterBehavior_FadeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDialogEmitterBehavior_FadeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_53DEB092240C71C8_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDialogEmitterBehavior_FadeMode Method_7_4967C5B92C502D51_1()
		{
			return ((::RPG::Client::ComicDialogEmitterBehavior_FadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_4967C5B92C502D51_1_OFFSET))(this);
		}

		::System::Void Method_7_53DEB092240C71C8_1(::RPG::Client::ComicDialogEmitterBehavior_FadeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDialogEmitterBehavior_FadeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_METHOD_7_53DEB092240C71C8_1_OFFSET))(this, a1);
		}

		::System::Boolean get_IfShowAllDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET))(this);
		}

		::System::Void set_IfShowAllDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_AudioPlayerGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET))(this);
		}

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::Struct_2_B3CFB45E7E960210 get_RenderBudgetData()
		{
			return ((::Struct_2_B3CFB45E7E960210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::Class_0_16E4307DCC419505_1028_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}
	};
}
