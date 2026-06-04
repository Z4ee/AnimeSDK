#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_283E14C05600D26A_1_METHOD_1_F1B3C25BA2441ED4_OFFSET UNITYSDK_OFFSET(0xAB2C0F0)
#define CLASS_1_283E14C05600D26A_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB2BF80)
#define CLASS_1_283E14C05600D26A_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xAB2C010)
#define CLASS_1_283E14C05600D26A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2BF00)
#define CLASS_1_283E14C05600D26A_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAB2C100)

inline static constexpr unsigned int Class_1_283E14C05600D26A_1_TypeDefinitionIndex = 62633;

class Class_1_283E14C05600D26A_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_283E14C05600D26A_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_283E14C05600D26A_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_283E14C05600D26A_1_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>* Method_1_F1B3C25BA2441ED4()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_283E14C05600D26A_1_METHOD_1_F1B3C25BA2441ED4_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_283E14C05600D26A_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
