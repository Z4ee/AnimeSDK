#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E0DCA9D208905FE;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_D17805CA63609305_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x124D93D0)
#define CLASS_3_DA947530FE358084_CLASS_1_D17805CA63609305_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x124D9270)
#define CLASS_3_DA947530FE358084_CLASS_1_D17805CA63609305__CTOR_OFFSET UNITYSDK_OFFSET(0x124D8DB0)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_D17805CA63609305_TypeDefinitionIndex = 48277;

class Class_3_DA947530FE358084_Class_1_D17805CA63609305 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::String* Field_1_0; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_D17805CA63609305__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_7E0DCA9D208905FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E0DCA9D208905FE*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_D17805CA63609305_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_D17805CA63609305_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
