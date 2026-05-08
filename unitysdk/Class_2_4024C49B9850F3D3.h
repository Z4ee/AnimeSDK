#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class OverrideRadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_2_4024C49B9850F3D3_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x13641DA0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x13641DB0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13641D90)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_572C1B1F6F1E476D_OFFSET UNITYSDK_OFFSET(0x136416A0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_5A3C866B125EB258_OFFSET UNITYSDK_OFFSET(0x13640BF0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x136420F0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_8A9139CFB712C87D_OFFSET UNITYSDK_OFFSET(0x13641DC0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_A8B38AAE6BF1916F_OFFSET UNITYSDK_OFFSET(0x136410D0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x136420A0)
#define CLASS_2_4024C49B9850F3D3_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13642100)
#define CLASS_2_4024C49B9850F3D3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x136419D0)
#define CLASS_2_4024C49B9850F3D3_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13640340)
#define CLASS_2_4024C49B9850F3D3_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13640390)
#define CLASS_2_4024C49B9850F3D3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13641D10)
#define CLASS_2_4024C49B9850F3D3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x136403E0)
#define CLASS_2_4024C49B9850F3D3__CTOR_OFFSET UNITYSDK_OFFSET(0x13641D80)

inline static constexpr unsigned int Class_2_4024C49B9850F3D3_TypeDefinitionIndex = 63714;

class Class_2_4024C49B9850F3D3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Rendering::Volume* Field_2_1; // 0x10
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::Rendering::Universal::RadialBlur* Field_2_6; // 0x20
	::UnityEngine::Vector2 Field_2_5; // 0x28
	::System::Boolean Field_2_7; // 0x30
	::System::Boolean Field_2_3; // 0x31
	::System::Boolean Field_2_2; // 0x32
	::System::Boolean Field_2_4; // 0x33
	::System::Single Field_2_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::Universal::RadialBlur* Method_2_5A3C866B125EB258()
	{
		return ((::UnityEngine::Rendering::Universal::RadialBlur*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_5A3C866B125EB258_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_572C1B1F6F1E476D(::System::Boolean a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_572C1B1F6F1E476D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_A8B38AAE6BF1916F(::UnityEngine::Vector2 a1, ::MoleMole::Timeline::OverrideRadialBlurBehaviour* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::MoleMole::Timeline::OverrideRadialBlurBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_A8B38AAE6BF1916F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_2_8A9139CFB712C87D(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4024C49B9850F3D3_METHOD_2_8A9139CFB712C87D_OFFSET))(this, a1, a2);
	}
};
