#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_2_3AE6967C0569CC1E;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3AE6967C0569CC1E_CLASS_1_443DDF37959CE7B2_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x13799090)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_443DDF37959CE7B2_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x13799250)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_443DDF37959CE7B2__CTOR_OFFSET UNITYSDK_OFFSET(0x13799240)

inline static constexpr unsigned int Class_2_3AE6967C0569CC1E_Class_1_443DDF37959CE7B2_TypeDefinitionIndex = 72904;

class Class_2_3AE6967C0569CC1E_Class_1_443DDF37959CE7B2 : public ::System::Object
{
public:
	::MoleMole::UserLocalDataItem* Field_1_0; // 0x10
	::Class_2_3AE6967C0569CC1E* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x20
	::System::Action* Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_443DDF37959CE7B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_443DDF37959CE7B2_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_443DDF37959CE7B2_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}
};
