#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_13FE4AAA1A281B42;
class Class_2_1BB8CA1042AACD99;
class Class_3_3BDFAF4A2AB65026;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_463149620C8AFC31_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9726190)
#define CLASS_2_463149620C8AFC31_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x97261F0)
#define CLASS_2_463149620C8AFC31_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9726030)
#define CLASS_2_463149620C8AFC31__CTOR_OFFSET UNITYSDK_OFFSET(0x9725FE0)

inline static constexpr unsigned int Class_2_463149620C8AFC31_TypeDefinitionIndex = 55652;

class Class_2_463149620C8AFC31 : public ::Class_1_2231FD56C070349F
{
public:
	::Class_1_13FE4AAA1A281B42* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x20
	::Class_2_1BB8CA1042AACD99* Field_2_0; // 0x28
	::System::UInt32 Field_2_1; // 0x30

	::System::Void _ctor(::Class_3_3BDFAF4A2AB65026* a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
