#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_0DF44C6A92A6D32F_Struct_2_AA4EE15A8D4DB005_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class NapContactShadowBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x102319E0)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x10232970)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10232960)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x10232950)
#define CLASS_4_0DF44C6A92A6D32F_METHOD_4_E5F4273C5EEF6F21_OFFSET UNITYSDK_OFFSET(0x10231B30)
#define CLASS_4_0DF44C6A92A6D32F_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10231A80)
#define CLASS_4_0DF44C6A92A6D32F_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10232240)
#define CLASS_4_0DF44C6A92A6D32F__CTOR_OFFSET UNITYSDK_OFFSET(0x10232920)

inline static constexpr unsigned int Class_4_0DF44C6A92A6D32F_TypeDefinitionIndex = 44914;

class Class_4_0DF44C6A92A6D32F : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::NapContactShadow*, ::MoleMole::Timeline::NapContactShadowBehaviour*>
{
public:
	::Class_4_0DF44C6A92A6D32F_Struct_2_AA4EE15A8D4DB005_1 Field_4_0; // 0x38
	::System::Boolean Field_4_3; // 0x4C
	::System::Boolean Field_4_1; // 0x4D
	::System::Boolean Field_4_2; // 0x4E
	::System::Boolean Field_4_7; // 0x4F
	::System::Single Field_4_6; // 0x50
	::System::Int32 Field_4_4; // 0x54
	::System::Boolean Field_4_8; // 0x58
	::System::Boolean Field_4_5; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5F4273C5EEF6F21(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_E5F4273C5EEF6F21_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
