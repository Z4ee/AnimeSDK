#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_DFB5514A0DAF1897_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18627B20)
#define CLASS_2_DFB5514A0DAF1897_METHOD_2_77F05BC64CA063BB_OFFSET UNITYSDK_OFFSET(0x18626480)
#define CLASS_2_DFB5514A0DAF1897_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x18627FB0)
#define CLASS_2_DFB5514A0DAF1897_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x18627B30)
#define CLASS_2_DFB5514A0DAF1897_METHOD_2_AD99A8235CAFC77B_OFFSET UNITYSDK_OFFSET(0x18627830)
#define CLASS_2_DFB5514A0DAF1897_METHOD_2_C3006B4DE411D863_OFFSET UNITYSDK_OFFSET(0x186269E0)
#define CLASS_2_DFB5514A0DAF1897_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18627FC0)
#define CLASS_2_DFB5514A0DAF1897_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18626150)
#define CLASS_2_DFB5514A0DAF1897_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18626880)
#define CLASS_2_DFB5514A0DAF1897_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x186270A0)
#define CLASS_2_DFB5514A0DAF1897__CTOR_OFFSET UNITYSDK_OFFSET(0x18627AE0)

inline static constexpr unsigned int Class_2_DFB5514A0DAF1897_TypeDefinitionIndex = 52905;

class Class_2_DFB5514A0DAF1897 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Material* Field_2_17; // 0x10
	::UnityEngine::Color Field_2_3; // 0x18
	::UnityEngine::Color Field_2_2; // 0x28
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_9; // 0x3C
	::System::Single Field_2_12; // 0x40
	::System::Boolean Field_2_1; // 0x44
	::System::Boolean Field_2_16; // 0x45
	::System::Boolean Field_2_5; // 0x46
	::System::Boolean Field_2_0; // 0x47
	::System::Single Field_2_10; // 0x48
	::UnityEngine::Color Field_2_4; // 0x4C
	::System::Boolean Field_2_15; // 0x5C
	::System::Boolean Field_2_14; // 0x5D
	::System::Single Field_2_7; // 0x60
	::System::Single Field_2_8; // 0x64
	::System::Single Field_2_13; // 0x68
	::System::Single Field_2_11; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_2_AD99A8235CAFC77B(::System::Object* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_AD99A8235CAFC77B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_77F05BC64CA063BB(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_77F05BC64CA063BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3006B4DE411D863(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_C3006B4DE411D863_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFB5514A0DAF1897_METHOD_2_A6544B958241856F_OFFSET))(this);
	}
};
