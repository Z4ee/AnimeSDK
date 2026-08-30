#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define SRDEBUGUTIL_ASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1E6A8620)
#define SRDEBUGUTIL_ASSERT_OFFSET UNITYSDK_OFFSET(0x1E6A8840)
#define SRDEBUGUTIL_EDITORASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1E6A8920)
#define SRDEBUGUTIL_EDITORASSERT_OFFSET UNITYSDK_OFFSET(0x1E6A8930)
#define SRDEBUGUTIL_GET_ISFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6A8600)
#define SRDEBUGUTIL_SET_ISFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6A8610)

inline static constexpr unsigned int SRDebugUtil_TypeDefinitionIndex = 34680;

class SRDebugUtil : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__IsFixedUpdate_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SRDebugUtil_TypeDefinitionIndex)->GetStaticField(0x13670);
	}
	// static const ::System::Int32 LineBufferCount = 0x200; // 0x0

	static ::System::Boolean get_IsFixedUpdate()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SRDEBUGUTIL_GET_ISFIXEDUPDATE_OFFSET))();
	}

	static ::System::Void set_IsFixedUpdate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_SET_ISFIXEDUPDATE_OFFSET))(a1);
	}

	static ::System::Void AssertNotNull(::System::Object* a1, ::System::String* a2, ::UnityEngine::MonoBehaviour* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_ASSERTNOTNULL_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Assert(::System::Boolean a1, ::System::String* a2, ::UnityEngine::MonoBehaviour* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_ASSERT_OFFSET))(a1, a2, a3);
	}

	static ::System::Void EditorAssertNotNull(::System::Object* a1, ::System::String* a2, ::UnityEngine::MonoBehaviour* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_EDITORASSERTNOTNULL_OFFSET))(a1, a2, a3);
	}

	static ::System::Void EditorAssert(::System::Boolean a1, ::System::String* a2, ::UnityEngine::MonoBehaviour* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + SRDEBUGUTIL_EDITORASSERT_OFFSET))(a1, a2, a3);
	}
};
