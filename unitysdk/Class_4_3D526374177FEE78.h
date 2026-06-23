#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_3D526374177FEE78_Struct_2_4D9DAE3E910E138B_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class OldCRTBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define CLASS_4_3D526374177FEE78_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1342D1B0)
#define CLASS_4_3D526374177FEE78_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1342D190)
#define CLASS_4_3D526374177FEE78_METHOD_4_9CD983CE0B05D2C7_OFFSET UNITYSDK_OFFSET(0x1342C220)
#define CLASS_4_3D526374177FEE78_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1342C050)
#define CLASS_4_3D526374177FEE78_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1342D1A0)
#define CLASS_4_3D526374177FEE78_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1342C140)
#define CLASS_4_3D526374177FEE78_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1342C9B0)
#define CLASS_4_3D526374177FEE78__CTOR_OFFSET UNITYSDK_OFFSET(0x1342D170)

inline static constexpr unsigned int Class_4_3D526374177FEE78_TypeDefinitionIndex = 43553;

class Class_4_3D526374177FEE78 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::OldCRT*, ::MoleMole::Timeline::OldCRTBehaviour*>
{
public:
	::Class_4_3D526374177FEE78_Struct_2_4D9DAE3E910E138B_1 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_2; // 0x68
	::System::Boolean Field_4_5; // 0x70
	::System::Boolean Field_4_9; // 0x71
	::UnityEngine::Vector2 Field_4_4; // 0x74
	::System::Single Field_4_8; // 0x7C
	::System::Single Field_4_6; // 0x80
	::System::Boolean Field_4_7; // 0x84
	::System::Boolean Field_4_10; // 0x85
	::System::Boolean Field_4_1; // 0x86
	::System::Boolean Field_4_3; // 0x87

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_9CD983CE0B05D2C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_METHOD_4_9CD983CE0B05D2C7_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_3D526374177FEE78_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
