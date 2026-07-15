#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_2CEBEAE10BD13F6B_METHOD_1_4B117086645ECDEE_OFFSET UNITYSDK_OFFSET(0x162EADD0)
#define CLASS_1_2CEBEAE10BD13F6B__CTOR_OFFSET UNITYSDK_OFFSET(0x162EB3C0)

inline static constexpr unsigned int Class_1_2CEBEAE10BD13F6B_TypeDefinitionIndex = 63759;

class Class_1_2CEBEAE10BD13F6B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CEBEAE10BD13F6B__CTOR_OFFSET))(this);
	}

	static ::Class_1_2CEBEAE10BD13F6B* Method_1_4B117086645ECDEE(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
	{
		return ((::Class_1_2CEBEAE10BD13F6B*(*)(::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_2CEBEAE10BD13F6B_METHOD_1_4B117086645ECDEE_OFFSET))(a1, a2);
	}
};
