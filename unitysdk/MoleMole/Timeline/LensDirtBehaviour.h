#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LensDirtBehaviour_Struct_2_52AD02145F5FCE3A_21.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x18D02D50)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x18D03590)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18D04770)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_6350DE3AC1B8C899_OFFSET UNITYSDK_OFFSET(0x18D03090)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x18D04780)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x18D047A0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x18D04790)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18D03480)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18D040C0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18D042E0)
#define MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18D04720)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LensDirtBehaviour_TypeDefinitionIndex = 69659;

	class LensDirtBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LensDirtBehaviour_Struct_2_52AD02145F5FCE3A_21 _methodParm; // 0x18
		::System::Boolean enabled; // 0x78
		::System::Boolean active_dirtTexture; // 0x79
		::System::Boolean use_dirtTexture; // 0x7A
		::UnityEngine::Texture* dirtTexture; // 0x80
		::System::Boolean active_enable; // 0x88
		::System::Boolean use_enable; // 0x89
		::System::Boolean enable; // 0x8A
		::System::Boolean active_intensity; // 0x8B
		::System::Boolean use_intensity; // 0x8C
		::System::Single intensity; // 0x90
		::System::Boolean active_dirtTextureScaleOffset; // 0x94
		::System::Boolean use_dirtTextureScaleOffset; // 0x95
		::UnityEngine::Vector4 dirtTextureScaleOffset; // 0x98
		::System::Boolean active_dirtTextureOverlay; // 0xA8
		::System::Boolean use_dirtTextureOverlay; // 0xA9
		::UnityEngine::Texture* dirtTextureOverlay; // 0xB0
		::System::Boolean active_dirtTextureOverlayScaleOffset; // 0xB8
		::System::Boolean use_dirtTextureOverlayScaleOffset; // 0xB9
		::UnityEngine::Vector4 dirtTextureOverlayScaleOffset; // 0xBC
		::System::Boolean active_dirtFlickFrequency; // 0xCC
		::System::Boolean use_dirtFlickFrequency; // 0xCD
		::System::Single dirtFlickFrequency; // 0xD0
		::UnityEngine::Rendering::Universal::LensDirt* _LensDirt; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::LensDirt* Method_4_6350DE3AC1B8C899(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::LensDirt*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_6350DE3AC1B8C899_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LENSDIRTBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}
	};
}
