#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DB9CAAB5758BEDF0.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_9DCB33D075483A9D_METHOD_3_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x13916910)
#define CLASS_3_9DCB33D075483A9D_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x13916A40)
#define CLASS_3_9DCB33D075483A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x13916990)
#define CLASS_3_9DCB33D075483A9D__ONBIND_OFFSET UNITYSDK_OFFSET(0x139168B0)
#define CLASS_3_9DCB33D075483A9D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x139169C0)

inline static constexpr unsigned int Class_3_9DCB33D075483A9D_TypeDefinitionIndex = 67116;

class Class_3_9DCB33D075483A9D : public ::Class_2_DB9CAAB5758BEDF0
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::UnityEngine::Animation* Field_3_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DCB33D075483A9D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DCB33D075483A9D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DCB33D075483A9D_METHOD_3_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DCB33D075483A9D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DCB33D075483A9D_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
