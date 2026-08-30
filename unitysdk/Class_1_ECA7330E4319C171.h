#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ECA7330E4319C171_METHOD_1_E153B9DF3DE943D1_OFFSET UNITYSDK_OFFSET(0x16EAA750)
#define CLASS_1_ECA7330E4319C171_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x16EAA6E0)
#define CLASS_1_ECA7330E4319C171__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAA670)

inline static constexpr unsigned int Class_1_ECA7330E4319C171_TypeDefinitionIndex = 67056;

class Class_1_ECA7330E4319C171 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* ACFCJFLAFJO; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_ECA7330E4319C171__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA7330E4319C171_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_E153B9DF3DE943D1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA7330E4319C171_METHOD_1_E153B9DF3DE943D1_OFFSET))(this);
	}
};
