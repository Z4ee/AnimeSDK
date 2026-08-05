#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B46798A9584868B1;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E593D09458ED939D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x101C2EF0)
#define CLASS_1_E593D09458ED939D__CTOR_OFFSET UNITYSDK_OFFSET(0x101C2EE0)

inline static constexpr unsigned int Class_1_E593D09458ED939D_TypeDefinitionIndex = 57316;

class Class_1_E593D09458ED939D : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::Collider* Field_1_3; // 0x18
	::Class_1_B46798A9584868B1* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Int32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E593D09458ED939D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E593D09458ED939D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
