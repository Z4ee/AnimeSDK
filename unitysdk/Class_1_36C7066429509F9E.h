#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AA891661B6A5272;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_36C7066429509F9E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C376E30)
#define CLASS_1_36C7066429509F9E_METHOD_1_B21AC53070C59890_OFFSET UNITYSDK_OFFSET(0x1C376040)
#define CLASS_1_36C7066429509F9E_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x1C376120)
#define CLASS_1_36C7066429509F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C375FB0)

inline static constexpr unsigned int Class_1_36C7066429509F9E_TypeDefinitionIndex = 10236;

class Class_1_36C7066429509F9E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_2; // 0x10
	::Class_1_6AA891661B6A5272* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B21AC53070C59890(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E_METHOD_1_B21AC53070C59890_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6AA891661B6A5272* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AA891661B6A5272*))((::PBYTE)hIl2Cpp + CLASS_1_36C7066429509F9E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
