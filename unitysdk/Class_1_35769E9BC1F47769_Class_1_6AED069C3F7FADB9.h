#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35769E9BC1F47769_CLASS_1_6AED069C3F7FADB9_METHOD_1_9D9670D35DB04C77_OFFSET UNITYSDK_OFFSET(0x145A7A70)
#define CLASS_1_35769E9BC1F47769_CLASS_1_6AED069C3F7FADB9_METHOD_1_A7677D4433EFAF21_OFFSET UNITYSDK_OFFSET(0x145A7920)
#define CLASS_1_35769E9BC1F47769_CLASS_1_6AED069C3F7FADB9__CTOR_OFFSET UNITYSDK_OFFSET(0x145A7C10)

inline static constexpr unsigned int Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9_TypeDefinitionIndex = 60558;

class Class_1_35769E9BC1F47769_Class_1_6AED069C3F7FADB9 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* CarryIDs; // 0x10
	::Il2CppArray<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*>* FrontRoles; // 0x18
	::Il2CppArray<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*>* BackRoles; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_6AED069C3F7FADB9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A7677D4433EFAF21(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_6AED069C3F7FADB9_METHOD_1_A7677D4433EFAF21_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_9D9670D35DB04C77(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35769E9BC1F47769_CLASS_1_6AED069C3F7FADB9_METHOD_1_9D9670D35DB04C77_OFFSET))(this, a1);
	}
};
