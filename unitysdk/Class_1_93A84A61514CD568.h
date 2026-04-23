#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_1_6AA9F3620D178FAF;
class Class_1_D4C1FF8F0F0862AF;
class Class_2_1BB8CA1042AACD99;
class Class_2_8C608625ABC8C4FA_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_93A84A61514CD568_METHOD_1_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x17DA5EE0)
#define CLASS_1_93A84A61514CD568_METHOD_1_81A01A90651760B0_OFFSET UNITYSDK_OFFSET(0x17DAB0B0)
#define CLASS_1_93A84A61514CD568_METHOD_1_87D34C3119309BDC_OFFSET UNITYSDK_OFFSET(0x17DAB190)
#define CLASS_1_93A84A61514CD568__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAAFE0)

inline static constexpr unsigned int Class_1_93A84A61514CD568_TypeDefinitionIndex = 34280;

class Class_1_93A84A61514CD568 : public ::System::Object
{
public:
	::Class_2_8C608625ABC8C4FA_1* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_1BB8CA1042AACD99*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>* Field_1_3; // 0x20
	::Class_0_16E4307DCC419505_25* Field_1_0; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_1BB8CA1042AACD99* Method_1_81A01A90651760B0(::System::UInt32 a1)
	{
		return ((::Class_2_1BB8CA1042AACD99*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568_METHOD_1_81A01A90651760B0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>* Method_1_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1BB8CA1042AACD99*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568_METHOD_1_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::Class_1_D4C1FF8F0F0862AF* Method_1_87D34C3119309BDC(::Class_1_6AA9F3620D178FAF* a1)
	{
		return ((::Class_1_D4C1FF8F0F0862AF*(*)(::PVOID, ::Class_1_6AA9F3620D178FAF*))((::PBYTE)hIl2Cpp + CLASS_1_93A84A61514CD568_METHOD_1_87D34C3119309BDC_OFFSET))(this, a1);
	}
};
