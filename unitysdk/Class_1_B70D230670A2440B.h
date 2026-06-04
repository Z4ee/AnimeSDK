#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B70D230670A2440B_METHOD_1_0B7AE2333E75CC14_OFFSET UNITYSDK_OFFSET(0xACA62F0)
#define CLASS_1_B70D230670A2440B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xACA64A0)
#define CLASS_1_B70D230670A2440B__CTOR_OFFSET UNITYSDK_OFFSET(0xACA6530)

inline static constexpr unsigned int Class_1_B70D230670A2440B_TypeDefinitionIndex = 46442;

class Class_1_B70D230670A2440B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B70D230670A2440B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B7AE2333E75CC14(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B70D230670A2440B_METHOD_1_0B7AE2333E75CC14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B70D230670A2440B_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
