#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511_Class_1_FE2BBCD0F2F96B8C;
class Class_3_472679C84451629A_25;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0244180E10798511_CLASS_1_BF01A4F637DE36F8_METHOD_1_A721D503FEB1575C_OFFSET UNITYSDK_OFFSET(0x168C74C0)
#define CLASS_2_0244180E10798511_CLASS_1_BF01A4F637DE36F8_METHOD_1_C05400DAFC1AFBB1_OFFSET UNITYSDK_OFFSET(0x168C7560)
#define CLASS_2_0244180E10798511_CLASS_1_BF01A4F637DE36F8__CTOR_OFFSET UNITYSDK_OFFSET(0x168C74B0)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_BF01A4F637DE36F8_TypeDefinitionIndex = 43978;

class Class_2_0244180E10798511_Class_1_BF01A4F637DE36F8 : public ::System::Object
{
public:
	::Class_2_0244180E10798511_Class_1_FE2BBCD0F2F96B8C* Field_1_1; // 0x10
	::Struct_2_76CCAEE20B3AE57C Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_BF01A4F637DE36F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A721D503FEB1575C(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_BF01A4F637DE36F8_METHOD_1_A721D503FEB1575C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C05400DAFC1AFBB1(::Class_3_472679C84451629A_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_25*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_BF01A4F637DE36F8_METHOD_1_C05400DAFC1AFBB1_OFFSET))(this, a1);
	}
};
