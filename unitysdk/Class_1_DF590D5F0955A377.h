#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F2088DC1442FBF8;
class Class_1_3F2088DC1442FBF8_1;
class Class_1_DF590D5F0955A377_Class_0_16E7307DCC43CB2C_2;
class Class_1_DF590D5F0955A377_Class_3_0AA90E5571183959;
class Class_1_DF590D5F0955A377_Class_3_11CBDCA989A0D873;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_DF590D5F0955A377_TypedPacketHandler_2;
template <typename T> class Class_1_DF590D5F0955A377_TypedPacketHandler_1;

#define CLASS_1_DF590D5F0955A377_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166EE2B0)
#define CLASS_1_DF590D5F0955A377_METHOD_1_96094EC3B7AC46C5_OFFSET UNITYSDK_OFFSET(0x166EE350)
#define CLASS_1_DF590D5F0955A377_METHOD_1_B0E53036553110CD_OFFSET UNITYSDK_OFFSET(0x166EE500)
#define CLASS_1_DF590D5F0955A377__CTOR_OFFSET UNITYSDK_OFFSET(0x166EE210)

inline static constexpr unsigned int Class_1_DF590D5F0955A377_TypeDefinitionIndex = 28729;

class Class_1_DF590D5F0955A377 : public ::System::Object
{
public:
	::Class_1_DF590D5F0955A377_Class_3_11CBDCA989A0D873* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_DF590D5F0955A377_Class_0_16E7307DCC43CB2C_2*>* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_DF590D5F0955A377_Class_3_11CBDCA989A0D873* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF590D5F0955A377_Class_3_11CBDCA989A0D873*))((::PBYTE)hIl2Cpp + CLASS_1_DF590D5F0955A377__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF590D5F0955A377_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_96094EC3B7AC46C5(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_DF590D5F0955A377_Class_3_0AA90E5571183959* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_DF590D5F0955A377_Class_3_0AA90E5571183959*))((::PBYTE)hIl2Cpp + CLASS_1_DF590D5F0955A377_METHOD_1_96094EC3B7AC46C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B0E53036553110CD(::System::UInt32 a1, ::Class_1_3F2088DC1442FBF8*& a2, ::Class_1_3F2088DC1442FBF8_1*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3F2088DC1442FBF8*&, ::Class_1_3F2088DC1442FBF8_1*&))((::PBYTE)hIl2Cpp + CLASS_1_DF590D5F0955A377_METHOD_1_B0E53036553110CD_OFFSET))(this, a1, a2, a3);
	}
};
