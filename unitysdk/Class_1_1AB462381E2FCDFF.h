#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1AB462381E2FCDFF_METHOD_1_7EA8BB1E68CEF446_OFFSET UNITYSDK_OFFSET(0x188068E0)
#define CLASS_1_1AB462381E2FCDFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188067B0)
#define CLASS_1_1AB462381E2FCDFF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x18806840)
#define CLASS_1_1AB462381E2FCDFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18806730)

inline static constexpr unsigned int Class_1_1AB462381E2FCDFF_TypeDefinitionIndex = 66977;

class Class_1_1AB462381E2FCDFF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* JMFEAGMLOEA; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueBuffData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + CLASS_1_1AB462381E2FCDFF__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB462381E2FCDFF_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB462381E2FCDFF_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueBuffData*>* Method_1_7EA8BB1E68CEF446()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB462381E2FCDFF_METHOD_1_7EA8BB1E68CEF446_OFFSET))(this);
	}
};
