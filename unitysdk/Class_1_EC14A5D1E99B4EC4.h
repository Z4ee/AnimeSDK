#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7291C38274750BA2_3;
namespace RPG::Client { class PSManager; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC14A5D1E99B4EC4_METHOD_1_DE88AAF79561A4CF_OFFSET UNITYSDK_OFFSET(0x1599F310)
#define CLASS_1_EC14A5D1E99B4EC4_METHOD_1_E11988A8DED142CF_1_OFFSET UNITYSDK_OFFSET(0x1599F380)
#define CLASS_1_EC14A5D1E99B4EC4_METHOD_1_E11988A8DED142CF_OFFSET UNITYSDK_OFFSET(0x1599F1C0)
#define CLASS_1_EC14A5D1E99B4EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1599F4D0)

inline static constexpr unsigned int Class_1_EC14A5D1E99B4EC4_TypeDefinitionIndex = 64320;

class Class_1_EC14A5D1E99B4EC4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC14A5D1E99B4EC4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E11988A8DED142CF(::System::Action_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_1_EC14A5D1E99B4EC4_METHOD_1_E11988A8DED142CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E11988A8DED142CF_1(::System::Action_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>* a1, ::System::Action_1<::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_1_EC14A5D1E99B4EC4_METHOD_1_E11988A8DED142CF_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::PSManager* Method_1_DE88AAF79561A4CF()
	{
		return ((::RPG::Client::PSManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC14A5D1E99B4EC4_METHOD_1_DE88AAF79561A4CF_OFFSET))(this);
	}
};
