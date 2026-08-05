#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_75849929E643D130;
class Class_3_C6F395B609880F65;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_132DD2C8AEE0CDFB_METHOD_1_2D1C14BABBD1D4F0_OFFSET UNITYSDK_OFFSET(0x1EB0F0C0)
#define CLASS_1_132DD2C8AEE0CDFB_METHOD_1_3BC03B30CE13FE6B_OFFSET UNITYSDK_OFFSET(0x1EB0F0F0)
#define CLASS_1_132DD2C8AEE0CDFB_METHOD_1_4FF5197113AC5363_OFFSET UNITYSDK_OFFSET(0x1EB0F0B0)
#define CLASS_1_132DD2C8AEE0CDFB_METHOD_1_5335C253389036A9_OFFSET UNITYSDK_OFFSET(0x1EB0F0D0)
#define CLASS_1_132DD2C8AEE0CDFB_METHOD_1_D3B66D2C18305B0A_OFFSET UNITYSDK_OFFSET(0x1EB0F0E0)
#define CLASS_1_132DD2C8AEE0CDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0EFA0)

inline static constexpr unsigned int Class_1_132DD2C8AEE0CDFB_TypeDefinitionIndex = 29664;

class Class_1_132DD2C8AEE0CDFB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_3_C6F395B609880F65*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C6F395B609880F65*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_132DD2C8AEE0CDFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4FF5197113AC5363(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_3_C6F395B609880F65*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_3_C6F395B609880F65*>*))((::PBYTE)hIl2Cpp + CLASS_1_132DD2C8AEE0CDFB_METHOD_1_4FF5197113AC5363_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_3_C6F395B609880F65*>* Method_1_2D1C14BABBD1D4F0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_3_C6F395B609880F65*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_132DD2C8AEE0CDFB_METHOD_1_2D1C14BABBD1D4F0_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C6F395B609880F65*>* Method_1_5335C253389036A9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C6F395B609880F65*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_132DD2C8AEE0CDFB_METHOD_1_5335C253389036A9_OFFSET))(this);
	}

	::System::Void Method_1_D3B66D2C18305B0A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C6F395B609880F65*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C6F395B609880F65*>*))((::PBYTE)hIl2Cpp + CLASS_1_132DD2C8AEE0CDFB_METHOD_1_D3B66D2C18305B0A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3BC03B30CE13FE6B(::System::Int32 a1, ::Class_2_75849929E643D130*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_2_75849929E643D130*&))((::PBYTE)hIl2Cpp + CLASS_1_132DD2C8AEE0CDFB_METHOD_1_3BC03B30CE13FE6B_OFFSET))(this, a1, a2);
	}
};
