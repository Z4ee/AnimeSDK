#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define LDJDEBUGDUMP_METHOD_5_252962A99A459B6A_OFFSET UNITYSDK_OFFSET(0xA4C3280)
#define LDJDEBUGDUMP_METHOD_5_42866537DF8F698C_OFFSET UNITYSDK_OFFSET(0xA4C2FB0)
#define LDJDEBUGDUMP_METHOD_5_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xA4C2CC0)
#define LDJDEBUGDUMP_METHOD_5_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0xA4C2F30)
#define LDJDEBUGDUMP__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C3840)

inline static constexpr unsigned int LDJDebugDump_TypeDefinitionIndex = 44881;

class LDJDebugDump : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_5_A3BFBAFC3028D6CA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_A3BFBAFC3028D6CA_OFFSET))(this, a1);
	}

	::System::String* Method_5_42866537DF8F698C(::UnityEngine::Vector4 a1)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_42866537DF8F698C_OFFSET))(this, a1);
	}

	::System::Void Method_5_252962A99A459B6A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_252962A99A459B6A_OFFSET))(this, a1);
	}
};
