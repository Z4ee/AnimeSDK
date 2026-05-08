#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_0832FA22DB95B49D_2_Struct_2_52AD02145F5FCE36_30.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class AutoExposureBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class AutoExposure; }

#define CLASS_4_0832FA22DB95B49D_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15176AF0)
#define CLASS_4_0832FA22DB95B49D_2_METHOD_4_7287F77ECCDA073E_OFFSET UNITYSDK_OFFSET(0x15175850)
#define CLASS_4_0832FA22DB95B49D_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15176B00)
#define CLASS_4_0832FA22DB95B49D_2_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x151755D0)
#define CLASS_4_0832FA22DB95B49D_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15176AE0)
#define CLASS_4_0832FA22DB95B49D_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15175750)
#define CLASS_4_0832FA22DB95B49D_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15176230)
#define CLASS_4_0832FA22DB95B49D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15176AB0)

inline static constexpr unsigned int Class_4_0832FA22DB95B49D_2_TypeDefinitionIndex = 70090;

class Class_4_0832FA22DB95B49D_2 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::AutoExposure*, ::MoleMole::Timeline::AutoExposureBehaviour*>
{
public:
	::System::Boolean Field_4_13; // 0x38
	::System::Boolean Field_4_9; // 0x39
	::System::Boolean Field_4_14; // 0x3A
	::System::Boolean Field_4_1; // 0x3B
	::System::Boolean Field_4_3; // 0x3C
	::System::Boolean Field_4_5; // 0x3D
	::System::Boolean Field_4_11; // 0x3E
	::System::Boolean Field_4_8; // 0x3F
	::Class_4_0832FA22DB95B49D_2_Struct_2_52AD02145F5FCE36_30 Field_4_0; // 0x40
	::System::Single Field_4_10; // 0x78
	::System::Single Field_4_12; // 0x7C
	::UnityEngine::Vector2 Field_4_4; // 0x80
	::UnityEngine::Vector2 Field_4_2; // 0x88
	::System::Boolean Field_4_7; // 0x90
	::System::Single Field_4_6; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_7287F77ECCDA073E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_METHOD_4_7287F77ECCDA073E_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0832FA22DB95B49D_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
