#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766_63;
class Class_1_766E1CF11E204F43_9;
class Class_1_7FF19F6206AF6DD7_80;
class Class_1_ADEFC46BF0E79810_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0590E1F8F275BA30_CHECKCANTAKE_OFFSET UNITYSDK_OFFSET(0x16E37920)
#define CLASS_1_0590E1F8F275BA30_CHECKHASTAKEN_OFFSET UNITYSDK_OFFSET(0x16E379F0)
#define CLASS_1_0590E1F8F275BA30_GETCURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0x16E37AD0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_173B4412467E28D4_OFFSET UNITYSDK_OFFSET(0x16E376A0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET UNITYSDK_OFFSET(0x16E37870)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x16E377C0)
#define CLASS_1_0590E1F8F275BA30_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x16E37410)
#define CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x16E374D0)
#define CLASS_1_0590E1F8F275BA30__CTOR_OFFSET UNITYSDK_OFFSET(0x16E37B90)

inline static constexpr unsigned int Class_1_0590E1F8F275BA30_TypeDefinitionIndex = 63601;

class Class_1_0590E1F8F275BA30 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_766E1CF11E204F43_9*>* CNPMNHGHKFG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void TakeReward(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_TAKEREWARD_OFFSET))(this, a1);
	}

	::System::Void Method_1_173B4412467E28D4(::Class_1_7FF19F6206AF6DD7_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_80*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_173B4412467E28D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_242BFB9DE152D766_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_63*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0_1(::Class_1_ADEFC46BF0E79810_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADEFC46BF0E79810_3*))((::PBYTE)hIl2Cpp + CLASS_1_0590E1F8F275BA30_METHOD_1_6DFEF4918C679AF0_1_OFFSET))(this, a1);
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
