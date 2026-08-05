#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D69A5F7574A01DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15019950)

inline static constexpr unsigned int Class_1_D69A5F7574A01DAB_TypeDefinitionIndex = 63339;

class Class_1_D69A5F7574A01DAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D69A5F7574A01DAB__CTOR_OFFSET))(this);
	}
};
