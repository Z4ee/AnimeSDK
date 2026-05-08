#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoWeaponVideoScreenPlayer_Enum_3_A6AB6596F4CDFB68.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class TextureFrameScreenPlayData;
class VideoScreenPlayData;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16061100)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLOSE_OFFSET UNITYSDK_OFFSET(0x16061DB0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_INIT_OFFSET UNITYSDK_OFFSET(0x16061D70)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x16061B70)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x16061390)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x16061800)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_C6A64C1D5B6D8F27_OFFSET UNITYSDK_OFFSET(0x16061FC0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_F8E6A4DF3F7D119E_OFFSET UNITYSDK_OFFSET(0x16062070)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16061B20)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16061320)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYFRAMETEXTUREONSCREEN_OFFSET UNITYSDK_OFFSET(0x16061EA0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYVIDEOONSCREEN_OFFSET UNITYSDK_OFFSET(0x16061E30)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16061CB0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x16061F10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeaponVideoScreenPlayer_TypeDefinitionIndex = 69986;

	class MonoWeaponVideoScreenPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshRenderer* frontScreenMeshRenderer; // 0x18
		::UnityEngine::MeshRenderer* transitionScreenRenderer; // 0x20
		::MoleMole::ScreenPlayer* Field_5_2; // 0x28
		::MoleMole::ScreenPlayer* Field_5_3; // 0x30
		::TextureFrameScreenPlayData* Field_5_4; // 0x38
		::System::String* Field_5_5; // 0x40
		::System::String* Field_5_6; // 0x48
		::MoleMole::MonoWeaponVideoScreenPlayer_Enum_3_A6AB6596F4CDFB68 Field_5_7; // 0x50
		::System::String* Field_5_8; // 0x58
		::System::String* Field_5_9; // 0x60
		::System::String* Field_5_10; // 0x68
		::System::Boolean Field_5_11; // 0x70
		::System::String* Field_5_12; // 0x78
		::System::Boolean Field_5_13; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_INIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLOSE_OFFSET))(this);
		}

		::System::Void PlayVideoOnScreen(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYVIDEOONSCREEN_OFFSET))(this, a1, a2);
		}

		::System::Void PlayFrameTextureOnScreen(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYFRAMETEXTUREONSCREEN_OFFSET))(this, a1, a2);
		}

		::VideoScreenPlayData* Method_5_C6A64C1D5B6D8F27(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::IVideoPlayer*>* a3)
		{
			return ((::VideoScreenPlayData*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_C6A64C1D5B6D8F27_OFFSET))(this, a1, a2, a3);
		}

		::TextureFrameScreenPlayData* Method_5_F8E6A4DF3F7D119E(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Events::UnityAction* a3)
		{
			return ((::TextureFrameScreenPlayData*(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_F8E6A4DF3F7D119E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_735EE20B25F86BF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_735EE20B25F86BF4_OFFSET))(this);
		}

		::System::Void Method_5_063ADB01C44981A7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_063ADB01C44981A7_OFFSET))(this, a1);
		}

		::System::Void Method_5_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_METHOD_5_66F42CE2EDA79734_OFFSET))(this);
		}
	};
}
