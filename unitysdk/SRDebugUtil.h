#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define SRDEBUGUTIL_ASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x18466CE0)
#define SRDEBUGUTIL_ASSERT_OFFSET UNITYSDK_OFFSET(0x18466EA0)
#define SRDEBUGUTIL_EDITORASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x18466F70)
#define SRDEBUGUTIL_EDITORASSERT_OFFSET UNITYSDK_OFFSET(0x18466F80)
#define SRDEBUGUTIL_GET_ISFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18466C70)
#define SRDEBUGUTIL_SET_ISFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18466CB0)

inline static constexpr unsigned int SRDebugUtil_TypeDefinitionIndex = 27636;

class SRDebugUtil : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__IsFixedUpdate_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SRDebugUtil_TypeDefinitionIndex)->GetStaticField(0x7BD0);
	}
	// static const ::System::Int32 LineBufferCount = 0x200; // 0x0

	static ::System::Boolean get_IsFixedUpdate()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SRDEBUGUTIL_GET_ISFIXEDUPDATE_OFFSET))();
	}

	static ::System::Void set_IsFixedUpdate(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_SET_ISFIXEDUPDATE_OFFSET))(value);
	}

	static ::System::Void AssertNotNull(::System::Object* value, ::System::String* message, ::UnityEngine::MonoBehaviour* instance)
	{
		return ((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_ASSERTNOTNULL_OFFSET))(value, message, instance);
	}

	static ::System::Void Assert(::System::Boolean condition, ::System::String* message, ::UnityEngine::MonoBehaviour* instance)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_ASSERT_OFFSET))(condition, message, instance);
	}

	static ::System::Void EditorAssertNotNull(::System::Object* value, ::System::String* message, ::UnityEngine::MonoBehaviour* instance)
	{
		return ((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_EDITORASSERTNOTNULL_OFFSET))(value, message, instance);
	}

	static ::System::Void EditorAssert(::System::Boolean condition, ::System::String* message, ::UnityEngine::MonoBehaviour* instance)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_EDITORASSERT_OFFSET))(condition, message, instance);
	}
};
