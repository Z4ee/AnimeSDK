#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B306F6B59B665F4B.h"
#include "unitysdk/System/Object.h"

class Class_2_C1491116B0527AAB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C1491116B0527AAB_CLASS_1_94467CC2AFC4CBDF_METHOD_1_D585DC5649D9D15B_1_OFFSET UNITYSDK_OFFSET(0x14E2DA90)
#define CLASS_2_C1491116B0527AAB_CLASS_1_94467CC2AFC4CBDF_METHOD_1_D585DC5649D9D15B_OFFSET UNITYSDK_OFFSET(0x14E2D9D0)
#define CLASS_2_C1491116B0527AAB_CLASS_1_94467CC2AFC4CBDF__CTOR_OFFSET UNITYSDK_OFFSET(0x14E2D9C0)

inline static constexpr unsigned int Class_2_C1491116B0527AAB_Class_1_94467CC2AFC4CBDF_TypeDefinitionIndex = 82435;

class Class_2_C1491116B0527AAB_Class_1_94467CC2AFC4CBDF : public ::System::Object
{
public:
	::Struct_2_B306F6B59B665F4B Field_1_0; // 0x10
	::Class_2_C1491116B0527AAB* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_94467CC2AFC4CBDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D585DC5649D9D15B(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_94467CC2AFC4CBDF_METHOD_1_D585DC5649D9D15B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D585DC5649D9D15B_1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C1491116B0527AAB_CLASS_1_94467CC2AFC4CBDF_METHOD_1_D585DC5649D9D15B_1_OFFSET))(this, a1, a2);
	}
};
