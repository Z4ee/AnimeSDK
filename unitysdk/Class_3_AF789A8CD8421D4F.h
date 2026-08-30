#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E08C4A9CFB467C17.h"
#include "unitysdk/Struct_2_A143022D1701BC76.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_365;
class Class_1_4D2DA7CD2E59DEF1;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_AF789A8CD8421D4F_METHOD_3_38293CF72E552837_OFFSET UNITYSDK_OFFSET(0x17106DE0)
#define CLASS_3_AF789A8CD8421D4F_METHOD_3_DF452AE1DF6D1110_OFFSET UNITYSDK_OFFSET(0x17106CE0)
#define CLASS_3_AF789A8CD8421D4F_METHOD_3_F48D4F99ABB903BE_OFFSET UNITYSDK_OFFSET(0x171074E0)
#define CLASS_3_AF789A8CD8421D4F__CTOR_OFFSET UNITYSDK_OFFSET(0x17107780)

inline static constexpr unsigned int Class_3_AF789A8CD8421D4F_TypeDefinitionIndex = 49359;

class Class_3_AF789A8CD8421D4F : public ::Class_2_E08C4A9CFB467C17
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* Method_3_DF452AE1DF6D1110(::Struct_2_A143022D1701BC76 a1, ::Struct_2_A143022D1701BC76 a2, ::System::Single a3, ::System::Single a4, ::Class_0_16E4307DCC419505_365* a5)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>*(*)(::PVOID, ::Struct_2_A143022D1701BC76, ::Struct_2_A143022D1701BC76, ::System::Single, ::System::Single, ::Class_0_16E4307DCC419505_365*))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F_METHOD_3_DF452AE1DF6D1110_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_38293CF72E552837(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_0_16E4307DCC419505_365* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_0_16E4307DCC419505_365*))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F_METHOD_3_38293CF72E552837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F48D4F99ABB903BE(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_1_4D2DA7CD2E59DEF1* a2, ::Class_1_4D2DA7CD2E59DEF1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_3_AF789A8CD8421D4F_METHOD_3_F48D4F99ABB903BE_OFFSET))(this, a1, a2, a3);
	}
};
