#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_16D5AA1BB6C5C497_Struct_2_DA0255BED8A7AC13_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorLookupBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define CLASS_4_16D5AA1BB6C5C497_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x14786960)
#define CLASS_4_16D5AA1BB6C5C497_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14786970)
#define CLASS_4_16D5AA1BB6C5C497_METHOD_4_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x14785E10)
#define CLASS_4_16D5AA1BB6C5C497_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14785CE0)
#define CLASS_4_16D5AA1BB6C5C497_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x14786950)
#define CLASS_4_16D5AA1BB6C5C497_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14785D70)
#define CLASS_4_16D5AA1BB6C5C497_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x147862B0)
#define CLASS_4_16D5AA1BB6C5C497__CTOR_OFFSET UNITYSDK_OFFSET(0x14786930)

inline static constexpr unsigned int Class_4_16D5AA1BB6C5C497_TypeDefinitionIndex = 80940;

class Class_4_16D5AA1BB6C5C497 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ColorLookup*, ::MoleMole::Timeline::ColorLookupBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_2; // 0x38
	::Class_4_16D5AA1BB6C5C497_Struct_2_DA0255BED8A7AC13_1 Field_4_0; // 0x40
	::System::Single Field_4_4; // 0x60
	::System::Boolean Field_4_5; // 0x64
	::System::Boolean Field_4_1; // 0x65
	::System::Boolean Field_4_6; // 0x66
	::System::Boolean Field_4_3; // 0x67

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_8C0E3211A8AE23ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_METHOD_4_8C0E3211A8AE23ED_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_16D5AA1BB6C5C497_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
