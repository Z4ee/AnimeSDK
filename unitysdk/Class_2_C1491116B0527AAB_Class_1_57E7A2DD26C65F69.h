#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B306F6B59B665F4B.h"
#include "unitysdk/System/Object.h"

class Class_2_C1491116B0527AAB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C1491116B0527AAB_CLASS_1_57E7A2DD26C65F69_METHOD_1_675078007B97C9FF_1_OFFSET UNITYSDK_OFFSET(0x12F5C0C0)
#define CLASS_2_C1491116B0527AAB_CLASS_1_57E7A2DD26C65F69_METHOD_1_675078007B97C9FF_OFFSET UNITYSDK_OFFSET(0x12F5C000)
#define CLASS_2_C1491116B0527AAB_CLASS_1_57E7A2DD26C65F69__CTOR_OFFSET UNITYSDK_OFFSET(0x12F5BFF0)

inline static constexpr unsigned int Class_2_C1491116B0527AAB_Class_1_57E7A2DD26C65F69_TypeDefinitionIndex = 47520;

class Class_2_C1491116B0527AAB_Class_1_57E7A2DD26C65F69 : public ::System::Object
{
public:
	::Class_2_C1491116B0527AAB* Field_1_0; // 0x10
	::Struct_2_B306F6B59B665F4B Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_57E7A2DD26C65F69__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_675078007B97C9FF(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_57E7A2DD26C65F69_METHOD_1_675078007B97C9FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_675078007B97C9FF_1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_57E7A2DD26C65F69_METHOD_1_675078007B97C9FF_1_OFFSET))(this, a1, a2);
	}
};
