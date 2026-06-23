#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_0DF44C6A92A6D32F_1_Struct_2_AA4EE15A8D4DB005.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class NapContactShadowBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class NapContactShadow; }

#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11A84BD0)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11A85B50)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11A85B60)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11A85B40)
#define CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_E5F4273C5EEF6F21_OFFSET UNITYSDK_OFFSET(0x11A84D20)
#define CLASS_4_0DF44C6A92A6D32F_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11A84C70)
#define CLASS_4_0DF44C6A92A6D32F_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11A85430)
#define CLASS_4_0DF44C6A92A6D32F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A85B10)

inline static constexpr unsigned int Class_4_0DF44C6A92A6D32F_1_TypeDefinitionIndex = 47902;

class Class_4_0DF44C6A92A6D32F_1 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::NapContactShadow*, ::MoleMole::Timeline::NapContactShadowBehaviour*>
{
public:
	::System::Int32 Field_4_4; // 0x38
	::System::Boolean Field_4_5; // 0x3C
	::System::Boolean Field_4_3; // 0x3D
	::System::Single Field_4_6; // 0x40
	::Class_4_0DF44C6A92A6D32F_1_Struct_2_AA4EE15A8D4DB005 Field_4_0; // 0x44
	::System::Boolean Field_4_2; // 0x58
	::System::Boolean Field_4_7; // 0x59
	::System::Boolean Field_4_1; // 0x5A
	::System::Boolean Field_4_8; // 0x5B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5F4273C5EEF6F21(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_E5F4273C5EEF6F21_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0DF44C6A92A6D32F_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
