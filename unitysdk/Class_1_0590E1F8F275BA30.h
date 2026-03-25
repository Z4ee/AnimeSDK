#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_76;
class Class_1_6C1B2192731DC04E_6;
class Class_1_99BD961747420BEB_48;
class Class_1_C03D623E9F32FBCB_67;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0590E1F8F275BA30_CHECKCANTAKE_OFFSET UNITYSDK_OFFSET(0xD19DA00)
#define CLASS_1_0590E1F8F275BA30_CHECKHASTAKEN_OFFSET UNITYSDK_OFFSET(0xD19DB10)
#define CLASS_1_0590E1F8F275BA30_GETCURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0xD19DC40)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET UNITYSDK_OFFSET(0xD19D950)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0xD19D8A0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xD19D560)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_E53DFBBB5F1609C2_OFFSET UNITYSDK_OFFSET(0xD19D7A0)
#define CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD19D620)
#define CLASS_1_0590E1F8F275BA30__CTOR_OFFSET UNITYSDK_OFFSET(0xD19DD30)

inline static constexpr unsigned int Class_1_0590E1F8F275BA30_TypeDefinitionIndex = 51596;

class Class_1_0590E1F8F275BA30 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_99BD961747420BEB_48*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void TakeReward(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E53DFBBB5F1609C2(::Class_1_5FEFAED860528596_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_76*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_E53DFBBB5F1609C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_C03D623E9F32FBCB_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_67*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0_1(::Class_1_6C1B2192731DC04E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C1B2192731DC04E_6*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET))(this, a1);
	}

	::System::Boolean CheckCanTake(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_CHECKCANTAKE_OFFSET))(this, a1, a2);
	}

	::System::Boolean CheckHasTaken(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_CHECKHASTAKEN_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetCurrentQuantity(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_GETCURRENTQUANTITY_OFFSET))(this, a1);
	}
};
