#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_5AEE1649265BAEC9_Struct_2_E9B2CF29B4D7A350.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class LiftGammaGainBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define CLASS_4_5AEE1649265BAEC9_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x133D23F0)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x133D2410)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x133D1720)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x133D1570)
#define CLASS_4_5AEE1649265BAEC9_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x133D2400)
#define CLASS_4_5AEE1649265BAEC9_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x133D1650)
#define CLASS_4_5AEE1649265BAEC9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x133D1D10)
#define CLASS_4_5AEE1649265BAEC9__CTOR_OFFSET UNITYSDK_OFFSET(0x133D23C0)

inline static constexpr unsigned int Class_4_5AEE1649265BAEC9_TypeDefinitionIndex = 42819;

class Class_4_5AEE1649265BAEC9 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::LiftGammaGain*, ::MoleMole::Timeline::LiftGammaGainBehaviour*>
{
public:
	::UnityEngine::Vector4 Field_4_1; // 0x38
	::System::Boolean Field_4_11; // 0x48
	::System::Boolean Field_4_0; // 0x49
	::System::Boolean Field_4_6; // 0x4A
	::UnityEngine::Vector4 Field_4_5; // 0x4C
	::Class_4_5AEE1649265BAEC9_Struct_2_E9B2CF29B4D7A350 Field_4_3; // 0x5C
	::UnityEngine::Vector4 Field_4_7; // 0x9C
	::System::Boolean Field_4_4; // 0xAC
	::System::Boolean Field_4_2; // 0xAD

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

	::System::Void Method_4_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_8A3E316C82E9B764_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5AEE1649265BAEC9_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
