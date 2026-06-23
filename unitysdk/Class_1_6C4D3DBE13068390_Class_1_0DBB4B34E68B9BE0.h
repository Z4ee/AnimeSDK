#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_6C4D3DBE13068390_CLASS_1_0DBB4B34E68B9BE0_METHOD_1_3757FABD818CCDF4_OFFSET UNITYSDK_OFFSET(0x187A19C0)
#define CLASS_1_6C4D3DBE13068390_CLASS_1_0DBB4B34E68B9BE0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x187A19B0)
#define CLASS_1_6C4D3DBE13068390_CLASS_1_0DBB4B34E68B9BE0__CTOR_OFFSET UNITYSDK_OFFSET(0x187A19A0)

inline static constexpr unsigned int Class_1_6C4D3DBE13068390_Class_1_0DBB4B34E68B9BE0_TypeDefinitionIndex = 46729;

class Class_1_6C4D3DBE13068390_Class_1_0DBB4B34E68B9BE0 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_1; // 0x10
	::UnityEngine::RenderTexture* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C4D3DBE13068390_CLASS_1_0DBB4B34E68B9BE0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C4D3DBE13068390_CLASS_1_0DBB4B34E68B9BE0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_3757FABD818CCDF4(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + CLASS_1_6C4D3DBE13068390_CLASS_1_0DBB4B34E68B9BE0_METHOD_1_3757FABD818CCDF4_OFFSET))(this, a1);
	}
};
