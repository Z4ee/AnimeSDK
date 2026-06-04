#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AssistantTipsData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C0F86DCBD7F43C67_GET_PASSEDTIPS_OFFSET UNITYSDK_OFFSET(0x13B39C50)
#define CLASS_1_C0F86DCBD7F43C67_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x13B39B30)
#define CLASS_1_C0F86DCBD7F43C67_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13B39AE0)
#define CLASS_1_C0F86DCBD7F43C67_METHOD_1_7B2A0858FDE848FE_OFFSET UNITYSDK_OFFSET(0x13B39B70)
#define CLASS_1_C0F86DCBD7F43C67__CTOR_OFFSET UNITYSDK_OFFSET(0x13B39C60)

inline static constexpr unsigned int Class_1_C0F86DCBD7F43C67_TypeDefinitionIndex = 58424;

class Class_1_C0F86DCBD7F43C67 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* _PassedTips_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F86DCBD7F43C67__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F86DCBD7F43C67_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F86DCBD7F43C67_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_7B2A0858FDE848FE(::RPG::Client::AssistantTipsData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistantTipsData*))((::PBYTE)hIl2Cpp + CLASS_1_C0F86DCBD7F43C67_METHOD_1_7B2A0858FDE848FE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* get_PassedTips()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0F86DCBD7F43C67_GET_PASSEDTIPS_OFFSET))(this);
	}
};
