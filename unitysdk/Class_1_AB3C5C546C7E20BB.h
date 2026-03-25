#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AB3C5C546C7E20BB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x119286A0)
#define CLASS_1_AB3C5C546C7E20BB_METHOD_1_894A24F1DEB4A399_OFFSET UNITYSDK_OFFSET(0x11928730)
#define CLASS_1_AB3C5C546C7E20BB_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x119286E0)
#define CLASS_1_AB3C5C546C7E20BB__CTOR_OFFSET UNITYSDK_OFFSET(0x11928350)

inline static constexpr unsigned int Class_1_AB3C5C546C7E20BB_TypeDefinitionIndex = 63408;

class Class_1_AB3C5C546C7E20BB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* Field_1_2; // 0x10
	::Class_3_543326C044264182* Field_1_1; // 0x18
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_1_894A24F1DEB4A399(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_AB3C5C546C7E20BB_METHOD_1_894A24F1DEB4A399_OFFSET))(this, a1);
	}
};
