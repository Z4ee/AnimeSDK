#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30FEFBE80B59FC00_1_METHOD_1_26346C69215EE3D8_OFFSET UNITYSDK_OFFSET(0xBEFFE10)
#define CLASS_1_30FEFBE80B59FC00_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBEFFCA0)
#define CLASS_1_30FEFBE80B59FC00_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBEFFD30)
#define CLASS_1_30FEFBE80B59FC00_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBEFFC20)

inline static constexpr unsigned int Class_1_30FEFBE80B59FC00_1_TypeDefinitionIndex = 66991;

class Class_1_30FEFBE80B59FC00_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* FOBOPMENMHD; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_30FEFBE80B59FC00_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FEFBE80B59FC00_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FEFBE80B59FC00_1_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>* Method_1_26346C69215EE3D8()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FEFBE80B59FC00_1_METHOD_1_26346C69215EE3D8_OFFSET))(this);
	}
};
