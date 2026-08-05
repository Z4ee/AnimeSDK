#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A66082740FEFE20D_METHOD_1_12F2F16070259BED_1_OFFSET UNITYSDK_OFFSET(0x18763250)
#define CLASS_1_A66082740FEFE20D_METHOD_1_12F2F16070259BED_OFFSET UNITYSDK_OFFSET(0x18763020)
#define CLASS_1_A66082740FEFE20D_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x18763610)
#define CLASS_1_A66082740FEFE20D_METHOD_1_6ED5A49057C3786E_OFFSET UNITYSDK_OFFSET(0x18763910)
#define CLASS_1_A66082740FEFE20D_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x18763B00)
#define CLASS_1_A66082740FEFE20D_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x18763480)
#define CLASS_1_A66082740FEFE20D__CTOR_OFFSET UNITYSDK_OFFSET(0x18762F20)

inline static constexpr unsigned int Class_1_A66082740FEFE20D_TypeDefinitionIndex = 48277;

class Class_1_A66082740FEFE20D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_360*>* Field_1_0; // 0x10
	::Class_5_DCFF91E03A93C03C* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_360*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_12F2F16070259BED(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D_METHOD_1_12F2F16070259BED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_12F2F16070259BED_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D_METHOD_1_12F2F16070259BED_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_360* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D_METHOD_1_B43DD0430B0FE876_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_6ED5A49057C3786E(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D_METHOD_1_6ED5A49057C3786E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66082740FEFE20D_METHOD_1_7646FFE662147970_OFFSET))(this);
	}
};
