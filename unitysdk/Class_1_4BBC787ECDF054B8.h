#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4BBC787ECDF054B8_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xDD81EF0)
#define CLASS_1_4BBC787ECDF054B8_METHOD_1_106D675CC66101BE_OFFSET UNITYSDK_OFFSET(0xDD82090)
#define CLASS_1_4BBC787ECDF054B8_METHOD_1_87CF28FFD988C8A7_OFFSET UNITYSDK_OFFSET(0xDD81F90)
#define CLASS_1_4BBC787ECDF054B8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xDD82150)
#define CLASS_1_4BBC787ECDF054B8__CTOR_OFFSET UNITYSDK_OFFSET(0xDD821E0)

inline static constexpr unsigned int Class_1_4BBC787ECDF054B8_TypeDefinitionIndex = 63950;

class Class_1_4BBC787ECDF054B8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HOIBDAGLICO; // 0x10
	::System::UInt32 MPNGLIJBEEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BBC787ECDF054B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BBC787ECDF054B8_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::UInt32 Method_1_87CF28FFD988C8A7(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4BBC787ECDF054B8_METHOD_1_87CF28FFD988C8A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_106D675CC66101BE(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_4BBC787ECDF054B8_METHOD_1_106D675CC66101BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BBC787ECDF054B8_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
