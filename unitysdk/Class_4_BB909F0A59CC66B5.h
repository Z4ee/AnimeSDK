#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_BB909F0A59CC66B5_Struct_2_E658502528B7C034_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class WhiteBalanceBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define CLASS_4_BB909F0A59CC66B5_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x14E7EE10)
#define CLASS_4_BB909F0A59CC66B5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14E7EE00)
#define CLASS_4_BB909F0A59CC66B5_METHOD_4_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x14E7E330)
#define CLASS_4_BB909F0A59CC66B5_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14E7E200)
#define CLASS_4_BB909F0A59CC66B5_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14E7EDF0)
#define CLASS_4_BB909F0A59CC66B5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14E7E290)
#define CLASS_4_BB909F0A59CC66B5_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14E7E7D0)
#define CLASS_4_BB909F0A59CC66B5__CTOR_OFFSET UNITYSDK_OFFSET(0x14E7EDE0)

inline static constexpr unsigned int Class_4_BB909F0A59CC66B5_TypeDefinitionIndex = 47648;

class Class_4_BB909F0A59CC66B5 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::WhiteBalance*, ::MoleMole::Timeline::WhiteBalanceBehaviour*>
{
public:
	::Class_4_BB909F0A59CC66B5_Struct_2_E658502528B7C034_3 Field_4_0; // 0x38
	::System::Boolean Field_4_11; // 0x4C
	::System::Boolean Field_4_5; // 0x4D
	::System::Boolean Field_4_7; // 0x4E
	::System::Boolean Field_4_10; // 0x4F
	::System::Single Field_4_4; // 0x50
	::System::Single Field_4_6; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_8C0E3211A8AE23ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_METHOD_4_8C0E3211A8AE23ED_OFFSET))(this, a1);
	}
};
