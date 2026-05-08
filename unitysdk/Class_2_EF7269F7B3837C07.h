#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_EF7269F7B3837C07_METHOD_2_4008403A081848FB_OFFSET UNITYSDK_OFFSET(0x178F3B60)
#define CLASS_2_EF7269F7B3837C07_METHOD_2_61E1DE7047E359B1_OFFSET UNITYSDK_OFFSET(0x178F3DC0)
#define CLASS_2_EF7269F7B3837C07_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x178F40D0)
#define CLASS_2_EF7269F7B3837C07_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x178F3730)
#define CLASS_2_EF7269F7B3837C07__CCTOR_OFFSET UNITYSDK_OFFSET(0x178F40C0)
#define CLASS_2_EF7269F7B3837C07__CTOR_OFFSET UNITYSDK_OFFSET(0x178F40B0)

inline static constexpr unsigned int Class_2_EF7269F7B3837C07_TypeDefinitionIndex = 45354;

class Class_2_EF7269F7B3837C07 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EF7269F7B3837C07_TypeDefinitionIndex)->GetStaticField(0xC810);
	}
	static ::System::UInt64* StaticGet_Field_2_3()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EF7269F7B3837C07_TypeDefinitionIndex)->GetStaticField(0xC818);
	}
	::UnityEngine::GameObject* Field_2_2; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_5; // 0x18
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF7269F7B3837C07__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EF7269F7B3837C07__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EF7269F7B3837C07_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4008403A081848FB(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EF7269F7B3837C07_METHOD_2_4008403A081848FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EF7269F7B3837C07_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_61E1DE7047E359B1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EF7269F7B3837C07_METHOD_2_61E1DE7047E359B1_OFFSET))(this, a1);
	}
};
