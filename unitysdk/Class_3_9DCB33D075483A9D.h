#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F50EE9166BE7CA48.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_9DCB33D075483A9D_METHOD_3_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x18F3A6F0)
#define CLASS_3_9DCB33D075483A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3A770)
#define CLASS_3_9DCB33D075483A9D__ONBIND_OFFSET UNITYSDK_OFFSET(0x18F3A690)

inline static constexpr unsigned int Class_3_9DCB33D075483A9D_TypeDefinitionIndex = 71757;

class Class_3_9DCB33D075483A9D : public ::Class_2_F50EE9166BE7CA48
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* IIFENECAOBG; // 0x0
	// static const ::System::String* CGNGHKIIGCM; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x70

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
};
