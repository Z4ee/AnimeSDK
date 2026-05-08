#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_7BD6F3CCCE8E7D8C_Struct_2_52AD02145F5FCE36_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class NapCapsuleAOLightingBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x188CEB60)
#define CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x188CEB40)
#define CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x188CD8F0)
#define CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x188CDAD0)
#define CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x188CEB50)
#define CLASS_4_7BD6F3CCCE8E7D8C_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x188CD9F0)
#define CLASS_4_7BD6F3CCCE8E7D8C_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x188CE350)
#define CLASS_4_7BD6F3CCCE8E7D8C__CTOR_OFFSET UNITYSDK_OFFSET(0x188CEB10)

inline static constexpr unsigned int Class_4_7BD6F3CCCE8E7D8C_TypeDefinitionIndex = 41072;

class Class_4_7BD6F3CCCE8E7D8C : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*, ::MoleMole::Timeline::NapCapsuleAOLightingBehaviour*>
{
public:
	::System::Single Field_4_8; // 0x38
	::Class_4_7BD6F3CCCE8E7D8C_Struct_2_52AD02145F5FCE36_3 Field_4_0; // 0x3C
	::System::Boolean Field_4_1; // 0x60
	::System::Boolean Field_4_7; // 0x61
	::System::Boolean Field_4_9; // 0x62
	::System::Boolean Field_4_5; // 0x63
	::System::Single Field_4_6; // 0x64
	::System::Boolean Field_4_11; // 0x68
	::System::Boolean Field_4_3; // 0x69
	::System::Boolean Field_4_12; // 0x6A
	::System::Boolean Field_4_2; // 0x6B
	::System::Single Field_4_4; // 0x6C
	::System::Single Field_4_10; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7BD6F3CCCE8E7D8C_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}
};
