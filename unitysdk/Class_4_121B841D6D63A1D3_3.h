#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_3_Struct_2_52AD02145F5FCE3A_2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class LensDirtBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x115C0AB0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x115C0AD0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x115BF230)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x115C0AC0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5F4273C5EEF6F21_OFFSET UNITYSDK_OFFSET(0x115BF560)
#define CLASS_4_121B841D6D63A1D3_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x115BF420)
#define CLASS_4_121B841D6D63A1D3_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x115C0080)
#define CLASS_4_121B841D6D63A1D3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x115C0A80)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_3_TypeDefinitionIndex = 39496;

class Class_4_121B841D6D63A1D3_3 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::LensDirt*, ::MoleMole::Timeline::LensDirtBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_10; // 0x38
	::UnityEngine::Texture* Field_4_2; // 0x40
	::Class_4_121B841D6D63A1D3_3_Struct_2_52AD02145F5FCE3A_2 Field_4_0; // 0x48
	::UnityEngine::Vector4 Field_4_12; // 0xA8
	::System::Boolean Field_4_3; // 0xB8
	::System::Boolean Field_4_9; // 0xB9
	::System::Boolean Field_4_11; // 0xBA
	::System::Boolean Field_4_16; // 0xBB
	::System::Boolean Field_4_15; // 0xBC
	::System::Boolean Field_4_7; // 0xBD
	::UnityEngine::Vector4 Field_4_8; // 0xC0
	::System::Boolean Field_4_1; // 0xD0
	::System::Boolean Field_4_4; // 0xD1
	::System::Boolean Field_4_13; // 0xD2
	::System::Boolean Field_4_5; // 0xD3
	::System::Single Field_4_14; // 0xD4
	::System::Single Field_4_6; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5F4273C5EEF6F21(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5F4273C5EEF6F21_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
