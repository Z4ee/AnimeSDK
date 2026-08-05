#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_FA69783D87A8B3FF;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define CLASS_1_0486E82E26AF727D_CLASS_1_03C01BC9D4BBC9B2_METHOD_1_6FE28DDEEB182EB4_OFFSET UNITYSDK_OFFSET(0xB191EE0)
#define CLASS_1_0486E82E26AF727D_CLASS_1_03C01BC9D4BBC9B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB191ED0)

inline static constexpr unsigned int Class_1_0486E82E26AF727D_Class_1_03C01BC9D4BBC9B2_TypeDefinitionIndex = 82631;

class Class_1_0486E82E26AF727D_Class_1_03C01BC9D4BBC9B2 : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_FA69783D87A8B3FF*>* Field_1_1; // 0x10
	::Class_1_FA69783D87A8B3FF* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0486E82E26AF727D_CLASS_1_03C01BC9D4BBC9B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6FE28DDEEB182EB4(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_0486E82E26AF727D_CLASS_1_03C01BC9D4BBC9B2_METHOD_1_6FE28DDEEB182EB4_OFFSET))(this, a1, a2);
	}
};
