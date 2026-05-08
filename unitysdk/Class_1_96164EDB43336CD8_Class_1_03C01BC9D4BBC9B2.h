#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_2A76A884C97A2E2B;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define CLASS_1_96164EDB43336CD8_CLASS_1_03C01BC9D4BBC9B2_METHOD_1_6FE28DDEEB182EB4_OFFSET UNITYSDK_OFFSET(0x120EA900)
#define CLASS_1_96164EDB43336CD8_CLASS_1_03C01BC9D4BBC9B2__CTOR_OFFSET UNITYSDK_OFFSET(0x120EA8F0)

inline static constexpr unsigned int Class_1_96164EDB43336CD8_Class_1_03C01BC9D4BBC9B2_TypeDefinitionIndex = 52345;

class Class_1_96164EDB43336CD8_Class_1_03C01BC9D4BBC9B2 : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_2A76A884C97A2E2B*>* Field_1_0; // 0x10
	::Class_1_2A76A884C97A2E2B* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_03C01BC9D4BBC9B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6FE28DDEEB182EB4(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_03C01BC9D4BBC9B2_METHOD_1_6FE28DDEEB182EB4_OFFSET))(this, a1, a2);
	}
};
