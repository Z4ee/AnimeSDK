#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_BB909F0A59CC66B5_1_Struct_2_E658502528B7C034_4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class PaniniProjectionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define CLASS_4_BB909F0A59CC66B5_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1565AE80)
#define CLASS_4_BB909F0A59CC66B5_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1565AE70)
#define CLASS_4_BB909F0A59CC66B5_1_METHOD_4_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x1565A3A0)
#define CLASS_4_BB909F0A59CC66B5_1_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1565A270)
#define CLASS_4_BB909F0A59CC66B5_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1565AE90)
#define CLASS_4_BB909F0A59CC66B5_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1565A300)
#define CLASS_4_BB909F0A59CC66B5_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1565A840)
#define CLASS_4_BB909F0A59CC66B5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1565AE50)

inline static constexpr unsigned int Class_4_BB909F0A59CC66B5_1_TypeDefinitionIndex = 49727;

class Class_4_BB909F0A59CC66B5_1 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::PaniniProjection*, ::MoleMole::Timeline::PaniniProjectionBehaviour*>
{
public:
	::System::Single Field_4_4; // 0x38
	::Class_4_BB909F0A59CC66B5_1_Struct_2_E658502528B7C034_4 Field_4_0; // 0x3C
	::System::Single Field_4_6; // 0x50
	::System::Boolean Field_4_10; // 0x54
	::System::Boolean Field_4_5; // 0x55
	::System::Boolean Field_4_7; // 0x56
	::System::Boolean Field_4_11; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_8C0E3211A8AE23ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_BB909F0A59CC66B5_1_METHOD_4_8C0E3211A8AE23ED_OFFSET))(this, a1);
	}
};
