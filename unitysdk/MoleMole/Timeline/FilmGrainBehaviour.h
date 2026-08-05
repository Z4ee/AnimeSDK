#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FilmGrainBehaviour_Struct_2_FFFE9480B3B5BA7A_1.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x180A4B20)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_2913D2774D363840_OFFSET UNITYSDK_OFFSET(0x180A4D30)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x180A5D20)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x180A5D30)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x180A5D40)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x180A5D10)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_BC76C3D43591A39D_OFFSET UNITYSDK_OFFSET(0x180A51D0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x180A5120)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x180A5860)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x180A5A30)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x180A5CF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FilmGrainBehaviour_TypeDefinitionIndex = 81764;

	class FilmGrainBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FilmGrainBehaviour_Struct_2_FFFE9480B3B5BA7A_1 _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_type; // 0x49
		::System::Boolean use_type; // 0x4A
		::UnityEngine::Rendering::Universal::FilmGrainLookup type; // 0x4C
		::System::Boolean active_intensity; // 0x50
		::System::Boolean use_intensity; // 0x51
		::System::Single intensity; // 0x54
		::System::Boolean active_response; // 0x58
		::System::Boolean use_response; // 0x59
		::System::Single response; // 0x5C
		::System::Boolean active_texture; // 0x60
		::System::Boolean use_texture; // 0x61
		::UnityEngine::Texture* texture; // 0x68
		::UnityEngine::Rendering::Universal::FilmGrain* _FilmGrain; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_BC76C3D43591A39D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_BC76C3D43591A39D_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::FilmGrain* Method_4_2913D2774D363840(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FilmGrain*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_2913D2774D363840_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
