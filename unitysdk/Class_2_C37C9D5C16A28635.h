#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_C37C9D5C16A28635_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12A5F840)
#define CLASS_2_C37C9D5C16A28635_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x12A5F430)
#define CLASS_2_C37C9D5C16A28635_METHOD_2_91A28A0483B06A08_OFFSET UNITYSDK_OFFSET(0x12A5E650)
#define CLASS_2_C37C9D5C16A28635_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x12A5F440)
#define CLASS_2_C37C9D5C16A28635_METHOD_2_C94E09397F2F07B1_OFFSET UNITYSDK_OFFSET(0x12A5E0C0)
#define CLASS_2_C37C9D5C16A28635_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12A5F420)
#define CLASS_2_C37C9D5C16A28635_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x12A5DD90)
#define CLASS_2_C37C9D5C16A28635_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12A5E4A0)
#define CLASS_2_C37C9D5C16A28635_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12A5ED60)
#define CLASS_2_C37C9D5C16A28635__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5F3E0)

inline static constexpr unsigned int Class_2_C37C9D5C16A28635_TypeDefinitionIndex = 55474;

class Class_2_C37C9D5C16A28635 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_2_17; // 0x10
	::System::Single Field_2_11; // 0x18
	::UnityEngine::Color Field_2_6; // 0x1C
	::System::Boolean Field_2_12; // 0x2C
	::System::Boolean Field_2_1; // 0x2D
	::System::Boolean Field_2_5; // 0x2E
	::System::Boolean Field_2_19; // 0x2F
	::System::Single Field_2_15; // 0x30
	::System::Single Field_2_8; // 0x34
	::System::Single Field_2_9; // 0x38
	::System::Boolean Field_2_2; // 0x3C
	::System::Boolean Field_2_18; // 0x3D
	::System::Single Field_2_4; // 0x40
	::System::Single Field_2_14; // 0x44
	::System::Single Field_2_13; // 0x48
	::UnityEngine::Color Field_2_0; // 0x4C
	::System::Single Field_2_10; // 0x5C
	::UnityEngine::Color Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C94E09397F2F07B1(::Il2CppArray<::UnityEngine::MeshRenderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_METHOD_2_C94E09397F2F07B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_91A28A0483B06A08(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_METHOD_2_91A28A0483B06A08_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C37C9D5C16A28635_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
