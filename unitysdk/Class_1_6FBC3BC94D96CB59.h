#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6FBC3BC94D96CB59_METHOD_1_20A90087B3ABBB78_OFFSET UNITYSDK_OFFSET(0x11944070)
#define CLASS_1_6FBC3BC94D96CB59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11943F40)
#define CLASS_1_6FBC3BC94D96CB59_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x11943FD0)
#define CLASS_1_6FBC3BC94D96CB59__CTOR_OFFSET UNITYSDK_OFFSET(0x11943EC0)
#define CLASS_1_6FBC3BC94D96CB59___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x119440F0)

inline static constexpr unsigned int Class_1_6FBC3BC94D96CB59_TypeDefinitionIndex = 54498;

class Class_1_6FBC3BC94D96CB59 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueBuffData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + CLASS_1_6FBC3BC94D96CB59__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC3BC94D96CB59_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC3BC94D96CB59_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueBuffData*>* Method_1_20A90087B3ABBB78()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC3BC94D96CB59_METHOD_1_20A90087B3ABBB78_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC3BC94D96CB59___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
