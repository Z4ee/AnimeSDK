#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define LDJDEBUGDUMP_METHOD_5_252962A99A459B6A_OFFSET UNITYSDK_OFFSET(0x11759680)
#define LDJDEBUGDUMP_METHOD_5_50B4D7BF55796E78_OFFSET UNITYSDK_OFFSET(0x11759340)
#define LDJDEBUGDUMP_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x11759060)
#define LDJDEBUGDUMP_METHOD_5_A3BFBAFC3028D6CA_OFFSET UNITYSDK_OFFSET(0x117592C0)
#define LDJDEBUGDUMP__CTOR_OFFSET UNITYSDK_OFFSET(0x11759C80)

inline static constexpr unsigned int LDJDebugDump_TypeDefinitionIndex = 38451;

class LDJDebugDump : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Boolean Method_5_A3BFBAFC3028D6CA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_A3BFBAFC3028D6CA_OFFSET))(this, a1);
	}

	::System::String* Method_5_50B4D7BF55796E78(::UnityEngine::Vector4 a1)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_50B4D7BF55796E78_OFFSET))(this, a1);
	}

	::System::Void Method_5_252962A99A459B6A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LDJDEBUGDUMP_METHOD_5_252962A99A459B6A_OFFSET))(this, a1);
	}
};
