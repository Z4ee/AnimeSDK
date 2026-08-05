#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_3_Struct_2_52AD02145F5FCE3A_4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class LensDirtBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class LensDirt; }

#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17EA75E0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17EA75D0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x17EA5D90)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x17EA75C0)
#define CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5F4273C5EEF6F21_OFFSET UNITYSDK_OFFSET(0x17EA60C0)
#define CLASS_4_121B841D6D63A1D3_3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17EA5F80)
#define CLASS_4_121B841D6D63A1D3_3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17EA6BE0)
#define CLASS_4_121B841D6D63A1D3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA7590)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_3_TypeDefinitionIndex = 49424;

class Class_4_121B841D6D63A1D3_3 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::LensDirt*, ::MoleMole::Timeline::LensDirtBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_8; // 0x38
	::UnityEngine::Texture* Field_4_0; // 0x40
	::Class_4_121B841D6D63A1D3_3_Struct_2_52AD02145F5FCE3A_4 Field_4_2; // 0x48
	::System::Boolean Field_4_13; // 0xA8
	::System::Boolean Field_4_7; // 0xA9
	::System::Boolean Field_4_1; // 0xAA
	::System::Boolean Field_4_19; // 0xAB
	::UnityEngine::Vector4 Field_4_10; // 0xAC
	::System::Boolean Field_4_5; // 0xBC
	::System::Boolean Field_4_6; // 0xBD
	::UnityEngine::Vector4 Field_4_14; // 0xC0
	::System::Single Field_4_4; // 0xD0
	::System::Single Field_4_12; // 0xD4
	::System::Boolean Field_4_15; // 0xD8
	::System::Boolean Field_4_9; // 0xD9
	::System::Boolean Field_4_11; // 0xDA
	::System::Boolean Field_4_18; // 0xDB

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

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
