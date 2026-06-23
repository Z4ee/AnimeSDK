#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CausticsBehaviour_Struct_2_52AD02145F5FCE3A_11.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x12BE1CB0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12BE4110)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_3A9F5C9005A04C91_OFFSET UNITYSDK_OFFSET(0x12BE21E0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x12BE4120)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x12BE2760)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x12BE4100)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x12BE40F0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12BE25D0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12BE3880)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x12BE3B20)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE4090)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CausticsBehaviour_TypeDefinitionIndex = 61160;

	class CausticsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CausticsBehaviour_Struct_2_52AD02145F5FCE3A_11 _methodParm; // 0x18
		::System::Boolean enabled; // 0x88
		::System::Boolean active_Use_Caustics; // 0x89
		::System::Boolean use_Use_Caustics; // 0x8A
		::System::Boolean Use_Caustics; // 0x8B
		::System::Boolean active_Brightness; // 0x8C
		::System::Boolean use_Brightness; // 0x8D
		::System::Single Brightness; // 0x90
		::System::Boolean active_Speed; // 0x94
		::System::Boolean use_Speed; // 0x95
		::System::Single Speed; // 0x98
		::System::Boolean active_Range; // 0x9C
		::System::Boolean use_Range; // 0x9D
		::System::Single Range; // 0xA0
		::System::Boolean active_HeightOffset; // 0xA4
		::System::Boolean use_HeightOffset; // 0xA5
		::System::Single HeightOffset; // 0xA8
		::System::Boolean active_MainLightScale; // 0xAC
		::System::Boolean use_MainLightScale; // 0xAD
		::System::Single MainLightScale; // 0xB0
		::System::Boolean active_LocalLightScale; // 0xB4
		::System::Boolean use_LocalLightScale; // 0xB5
		::System::Single LocalLightScale; // 0xB8
		::System::Boolean active_IndirectScale; // 0xBC
		::System::Boolean use_IndirectScale; // 0xBD
		::System::Single IndirectScale; // 0xC0
		::System::Boolean active_Tilling; // 0xC4
		::System::Boolean use_Tilling; // 0xC5
		::System::Single Tilling; // 0xC8
		::System::Boolean active_Tint; // 0xCC
		::System::Boolean use_Tint; // 0xCD
		::UnityEngine::Color Tint; // 0xD0
		::System::Boolean active_Strength; // 0xE0
		::System::Boolean use_Strength; // 0xE1
		::System::Single Strength; // 0xE4
		::System::Boolean active_Tex; // 0xE8
		::System::Boolean use_Tex; // 0xE9
		::UnityEngine::Texture* Tex; // 0xF0
		::UnityEngine::Rendering::Universal::Caustics* _Caustics; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::Caustics* Method_4_3A9F5C9005A04C91(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Caustics*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_3A9F5C9005A04C91_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
