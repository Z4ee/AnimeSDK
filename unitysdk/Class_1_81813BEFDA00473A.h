#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_81813BEFDA00473A_METHOD_1_52D1F196106D215C_OFFSET UNITYSDK_OFFSET(0x18B8ED00)
#define CLASS_1_81813BEFDA00473A_METHOD_1_9C4CE478665A2313_OFFSET UNITYSDK_OFFSET(0x18B8ED80)
#define CLASS_1_81813BEFDA00473A_METHOD_1_AA69EB2A35AC1C8B_OFFSET UNITYSDK_OFFSET(0x18B8EB10)
#define CLASS_1_81813BEFDA00473A_METHOD_1_F6E645F5E2D577C7_OFFSET UNITYSDK_OFFSET(0x18B8E9D0)
#define CLASS_1_81813BEFDA00473A__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8ED70)

inline static constexpr unsigned int Class_1_81813BEFDA00473A_TypeDefinitionIndex = 42615;

class Class_1_81813BEFDA00473A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81813BEFDA00473A__CTOR_OFFSET))(this);
	}

	::Struct_2_C8DD384065D32AEE Method_1_F6E645F5E2D577C7(::System::Single a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_81813BEFDA00473A_METHOD_1_F6E645F5E2D577C7_OFFSET))(this, a1);
	}

	::Struct_2_C8DD384065D32AEE Method_1_AA69EB2A35AC1C8B(::System::Object* a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_81813BEFDA00473A_METHOD_1_AA69EB2A35AC1C8B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_52D1F196106D215C(::Struct_2_C8DD384065D32AEE& a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C8DD384065D32AEE&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_81813BEFDA00473A_METHOD_1_52D1F196106D215C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C4CE478665A2313(::Struct_2_C8DD384065D32AEE& a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C8DD384065D32AEE&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_81813BEFDA00473A_METHOD_1_9C4CE478665A2313_OFFSET))(this, a1, a2);
	}
};
