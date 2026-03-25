#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AssistantTipsData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDFC8B8BE050F929_GET_PASSEDTIPS_OFFSET UNITYSDK_OFFSET(0xD1722E0)
#define CLASS_1_FDFC8B8BE050F929_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xD172210)
#define CLASS_1_FDFC8B8BE050F929_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD1721C0)
#define CLASS_1_FDFC8B8BE050F929_METHOD_1_464D6B54AE6B3DD9_OFFSET UNITYSDK_OFFSET(0xD172250)
#define CLASS_1_FDFC8B8BE050F929__CTOR_OFFSET UNITYSDK_OFFSET(0xD1722F0)

inline static constexpr unsigned int Class_1_FDFC8B8BE050F929_TypeDefinitionIndex = 50733;

class Class_1_FDFC8B8BE050F929 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* _PassedTips_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFC8B8BE050F929__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFC8B8BE050F929_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFC8B8BE050F929_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_464D6B54AE6B3DD9(::RPG::Client::AssistantTipsData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistantTipsData*))((::PBYTE)hIl2Cpp + CLASS_1_FDFC8B8BE050F929_METHOD_1_464D6B54AE6B3DD9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* get_PassedTips()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFC8B8BE050F929_GET_PASSEDTIPS_OFFSET))(this);
	}
};
