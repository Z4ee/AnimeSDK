#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_73;
class Class_1_455008579EB95638_81;
class Class_1_766E1CF11E204F43_11;
class Class_1_A5CB437A9230ABA0_6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0590E1F8F275BA30_CHECKCANTAKE_OFFSET UNITYSDK_OFFSET(0xBC3C9F0)
#define CLASS_1_0590E1F8F275BA30_CHECKHASTAKEN_OFFSET UNITYSDK_OFFSET(0xBC3CAC0)
#define CLASS_1_0590E1F8F275BA30_GETCURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0xBC3CBA0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_173B4412467E28D4_OFFSET UNITYSDK_OFFSET(0xBC3C770)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET UNITYSDK_OFFSET(0xBC3C940)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0xBC3C890)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xBC3C530)
#define CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xBC3C5F0)
#define CLASS_1_0590E1F8F275BA30__CTOR_OFFSET UNITYSDK_OFFSET(0xBC3CC60)

inline static constexpr unsigned int Class_1_0590E1F8F275BA30_TypeDefinitionIndex = 59464;

class Class_1_0590E1F8F275BA30 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_766E1CF11E204F43_11*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void TakeReward(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET))(this, a1);
	}

	::System::Void Method_1_173B4412467E28D4(::Class_1_455008579EB95638_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_81*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_173B4412467E28D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_355A2207C3B7A99D_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_73*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
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
