#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE0A596DEF9F7C72_2_METHOD_1_976CE8DBF12537DF_OFFSET UNITYSDK_OFFSET(0x15F958E0)
#define CLASS_1_FE0A596DEF9F7C72_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15F957B0)
#define CLASS_1_FE0A596DEF9F7C72_2_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15F95840)
#define CLASS_1_FE0A596DEF9F7C72_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15F95730)

inline static constexpr unsigned int Class_1_FE0A596DEF9F7C72_2_TypeDefinitionIndex = 64031;

class Class_1_FE0A596DEF9F7C72_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE0A596DEF9F7C72_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE0A596DEF9F7C72_2_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE0A596DEF9F7C72_2_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* Method_1_976CE8DBF12537DF()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE0A596DEF9F7C72_2_METHOD_1_976CE8DBF12537DF_OFFSET))(this);
	}
};
