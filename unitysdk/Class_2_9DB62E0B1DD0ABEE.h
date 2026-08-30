#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A167209E71412818.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_9DB62E0B1DD0ABEE_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158672A0)
#define CLASS_2_9DB62E0B1DD0ABEE_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15867230)
#define CLASS_2_9DB62E0B1DD0ABEE__CTOR_OFFSET UNITYSDK_OFFSET(0x15867360)

inline static constexpr unsigned int Class_2_9DB62E0B1DD0ABEE_TypeDefinitionIndex = 72061;

class Class_2_9DB62E0B1DD0ABEE : public ::Class_1_A167209E71412818
{
public:
	::UnityEngine::UI::Text* CMMFIGCPDIB; // 0x18
	::UnityEngine::Transform* EAGKJGELBED; // 0x20
	::UnityEngine::UI::Text* GPACJHAKGJJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DB62E0B1DD0ABEE__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DB62E0B1DD0ABEE_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DB62E0B1DD0ABEE_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
