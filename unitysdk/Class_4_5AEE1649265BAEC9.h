#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_5AEE1649265BAEC9_Struct_2_E9B2CF29B4D7A350_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class LiftGammaGainBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define CLASS_4_5AEE1649265BAEC9_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x104F5020)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x104F5000)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x104F42E0)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x104F4140)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x104F5010)
#define CLASS_4_5AEE1649265BAEC9_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x104F4220)
#define CLASS_4_5AEE1649265BAEC9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x104F48D0)
#define CLASS_4_5AEE1649265BAEC9__CTOR_OFFSET UNITYSDK_OFFSET(0x104F4FD0)

inline static constexpr unsigned int Class_4_5AEE1649265BAEC9_TypeDefinitionIndex = 82339;

class Class_4_5AEE1649265BAEC9 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::LiftGammaGain*, ::MoleMole::Timeline::LiftGammaGainBehaviour*>
{
public:
	::UnityEngine::Vector4 Field_4_6; // 0x38
	::UnityEngine::Vector4 Field_4_2; // 0x48
	::System::Boolean Field_4_7; // 0x58
	::System::Boolean Field_4_3; // 0x59
	::System::Boolean Field_4_1; // 0x5A
	::System::Boolean Field_4_8; // 0x5B
	::System::Boolean Field_4_5; // 0x5C
	::Class_4_5AEE1649265BAEC9_Struct_2_E9B2CF29B4D7A350_1 Field_4_0; // 0x60
	::UnityEngine::Vector4 Field_4_4; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_8A3E316C82E9B764_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
