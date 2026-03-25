#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_6B160DE28C891EFB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEA51F90)
#define CLASS_1_6B160DE28C891EFB__CTOR_OFFSET UNITYSDK_OFFSET(0xEA51FE0)

inline static constexpr unsigned int Class_1_6B160DE28C891EFB_TypeDefinitionIndex = 64620;

class Class_1_6B160DE28C891EFB : public ::System::Object
{
public:
	::UnityEngine::Object* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B160DE28C891EFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B160DE28C891EFB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
