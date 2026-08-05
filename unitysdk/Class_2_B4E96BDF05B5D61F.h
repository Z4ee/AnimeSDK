#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1257ED70)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x1257EC70)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_6349F8BECC5FCFA0_OFFSET UNITYSDK_OFFSET(0x1257ED40)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_8652DE0774915A40_OFFSET UNITYSDK_OFFSET(0x1257ED50)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_BBEE8C0801828E89_OFFSET UNITYSDK_OFFSET(0x1257F000)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_DF8A2FBE9F24E6BD_OFFSET UNITYSDK_OFFSET(0x1257E010)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1257ED60)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_F6C10DB4374245F7_OFFSET UNITYSDK_OFFSET(0x1257ED80)
#define CLASS_2_B4E96BDF05B5D61F_METHOD_2_FFF7C0595E2639C9_OFFSET UNITYSDK_OFFSET(0x1257ED90)
#define CLASS_2_B4E96BDF05B5D61F_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1257DCD0)
#define CLASS_2_B4E96BDF05B5D61F_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1257E1D0)
#define CLASS_2_B4E96BDF05B5D61F__CTOR_OFFSET UNITYSDK_OFFSET(0x1257EC60)

inline static constexpr unsigned int Class_2_B4E96BDF05B5D61F_TypeDefinitionIndex = 55363;

class Class_2_B4E96BDF05B5D61F : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::ParticleSystem* Field_2_0; // 0x10
	::UnityEngine::Animation* Field_2_7; // 0x18
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::UnityEngine::ParticleSystem* Method_2_6349F8BECC5FCFA0()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_6349F8BECC5FCFA0_OFFSET))(this);
	}

	::UnityEngine::Animation* Method_2_8652DE0774915A40()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_8652DE0774915A40_OFFSET))(this);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DF8A2FBE9F24E6BD(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_DF8A2FBE9F24E6BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6C10DB4374245F7(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_F6C10DB4374245F7_OFFSET))(this, a1);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_B4E96BDF05B5D61F*> Method_2_FFF7C0595E2639C9(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_B4E96BDF05B5D61F*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_FFF7C0595E2639C9_OFFSET))(a1, a2);
	}

	::System::Void Method_2_BBEE8C0801828E89(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_B4E96BDF05B5D61F_METHOD_2_BBEE8C0801828E89_OFFSET))(this, a1);
	}
};
