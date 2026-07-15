#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A;
class Class_1_CE89E018B1132F67_1;
class Class_1_F8E9FB82D76BCA64_Class_0_16E7307DCC43CB2C_2;
class Class_1_F8E9FB82D76BCA64_Class_3_0AA90E5571183959;
class Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_F8E9FB82D76BCA64_TypedPacketHandler_2;
template <typename T> class Class_1_F8E9FB82D76BCA64_TypedPacketHandler_1;

#define CLASS_1_F8E9FB82D76BCA64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13EC31B0)
#define CLASS_1_F8E9FB82D76BCA64_METHOD_1_0A04FB4222216C95_OFFSET UNITYSDK_OFFSET(0x13EC33C0)
#define CLASS_1_F8E9FB82D76BCA64_METHOD_1_15470272040F247C_OFFSET UNITYSDK_OFFSET(0x13EC3240)
#define CLASS_1_F8E9FB82D76BCA64__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC3110)

inline static constexpr unsigned int Class_1_F8E9FB82D76BCA64_TypeDefinitionIndex = 35406;

class Class_1_F8E9FB82D76BCA64 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F8E9FB82D76BCA64_Class_0_16E7307DCC43CB2C_2*>* Field_1_0; // 0x10
	::Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873*))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_15470272040F247C(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_F8E9FB82D76BCA64_Class_3_0AA90E5571183959* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_F8E9FB82D76BCA64_Class_3_0AA90E5571183959*))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_METHOD_1_15470272040F247C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0A04FB4222216C95(::System::UInt32 a1, ::Class_1_9AD828BA811E7C7A*& a2, ::Class_1_CE89E018B1132F67_1*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9AD828BA811E7C7A*&, ::Class_1_CE89E018B1132F67_1*&))((::PBYTE)hIl2Cpp + CLASS_1_F8E9FB82D76BCA64_METHOD_1_0A04FB4222216C95_OFFSET))(this, a1, a2, a3);
	}
};
