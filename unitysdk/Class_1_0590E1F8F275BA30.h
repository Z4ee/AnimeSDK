#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_70;
class Class_1_455008579EB95638_81;
class Class_1_A5CB437A9230ABA0_6;
class Class_1_D55C9EF3F758FF20_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0590E1F8F275BA30_CHECKCANTAKE_OFFSET UNITYSDK_OFFSET(0x11A33370)
#define CLASS_1_0590E1F8F275BA30_CHECKHASTAKEN_OFFSET UNITYSDK_OFFSET(0x11A33480)
#define CLASS_1_0590E1F8F275BA30_GETCURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0x11A335B0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET UNITYSDK_OFFSET(0x11A332C0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x11A33210)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x11A32ED0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_E53DFBBB5F1609C2_OFFSET UNITYSDK_OFFSET(0x11A33110)
#define CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x11A32F90)
#define CLASS_1_0590E1F8F275BA30__CTOR_OFFSET UNITYSDK_OFFSET(0x11A336A0)

inline static constexpr unsigned int Class_1_0590E1F8F275BA30_TypeDefinitionIndex = 58534;

class Class_1_0590E1F8F275BA30 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D55C9EF3F758FF20_3*>* Field_1_0; // 0x10

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

	::System::Void Method_1_E53DFBBB5F1609C2(::Class_1_455008579EB95638_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_81*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_E53DFBBB5F1609C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_355A2207C3B7A99D_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_70*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0_1(::Class_1_A5CB437A9230ABA0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5CB437A9230ABA0_6*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET))(this, a1);
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
