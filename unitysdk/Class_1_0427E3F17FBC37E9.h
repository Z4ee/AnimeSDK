#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_2;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_1_0427E3F17FBC37E9_METHOD_1_4D9E1AC61B60D577_1_OFFSET UNITYSDK_OFFSET(0x1D87F550)
#define CLASS_1_0427E3F17FBC37E9_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x1D87F020)
#define CLASS_1_0427E3F17FBC37E9_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1D87F340)
#define CLASS_1_0427E3F17FBC37E9_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1D87F1F0)
#define CLASS_1_0427E3F17FBC37E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87EEB0)

inline static constexpr unsigned int Class_1_0427E3F17FBC37E9_TypeDefinitionIndex = 8281;

class Class_1_0427E3F17FBC37E9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0427E3F17FBC37E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0427E3F17FBC37E9_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0427E3F17FBC37E9_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0427E3F17FBC37E9_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0427E3F17FBC37E9_METHOD_1_4D9E1AC61B60D577_1_OFFSET))(this);
	}
};
