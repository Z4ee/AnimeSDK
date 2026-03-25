#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45E6CA349D5D1707;
namespace RPG::Client { class AdventurePhase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BA4EA966C308C637_METHOD_1_403DE7FB52ED4B43_OFFSET UNITYSDK_OFFSET(0x10C57100)
#define CLASS_1_BA4EA966C308C637_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x10C571A0)
#define CLASS_1_BA4EA966C308C637_METHOD_1_57B4903A52C7CB7B_OFFSET UNITYSDK_OFFSET(0x10C57740)
#define CLASS_1_BA4EA966C308C637_METHOD_1_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x10C571F0)
#define CLASS_1_BA4EA966C308C637_METHOD_1_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x10C57470)
#define CLASS_1_BA4EA966C308C637_METHOD_1_C95CD1E82F14102B_OFFSET UNITYSDK_OFFSET(0x10C575E0)
#define CLASS_1_BA4EA966C308C637_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C57150)
#define CLASS_1_BA4EA966C308C637__CTOR_OFFSET UNITYSDK_OFFSET(0x10C57870)

inline static constexpr unsigned int Class_1_BA4EA966C308C637_TypeDefinitionIndex = 49359;

class Class_1_BA4EA966C308C637 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_45E6CA349D5D1707*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_45E6CA349D5D1707*>* Field_1_1; // 0x18
	::RPG::Client::AdventurePhase* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_403DE7FB52ED4B43(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_403DE7FB52ED4B43_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_1_660474B0F8C5FECE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_660474B0F8C5FECE_OFFSET))(this);
	}

	::System::Void Method_1_A134E903C4692403(::Class_1_45E6CA349D5D1707* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45E6CA349D5D1707*))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_1_C95CD1E82F14102B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_C95CD1E82F14102B_OFFSET))(this, a1, a2);
	}

	::Class_1_45E6CA349D5D1707* Method_1_57B4903A52C7CB7B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_45E6CA349D5D1707*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA4EA966C308C637_METHOD_1_57B4903A52C7CB7B_OFFSET))(this, a1, a2);
	}
};
