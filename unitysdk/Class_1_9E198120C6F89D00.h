#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E198120C6F89D00_METHOD_1_45EDB413ACD6B7B1_OFFSET UNITYSDK_OFFSET(0x115A6A00)
#define CLASS_1_9E198120C6F89D00_METHOD_1_CAA1387F8D547DBB_OFFSET UNITYSDK_OFFSET(0x115A6690)
#define CLASS_1_9E198120C6F89D00__CTOR_OFFSET UNITYSDK_OFFSET(0x115A6DC0)

inline static constexpr unsigned int Class_1_9E198120C6F89D00_TypeDefinitionIndex = 49508;

class Class_1_9E198120C6F89D00 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E198120C6F89D00__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CAA1387F8D547DBB(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E198120C6F89D00_METHOD_1_CAA1387F8D547DBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45EDB413ACD6B7B1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + CLASS_1_9E198120C6F89D00_METHOD_1_45EDB413ACD6B7B1_OFFSET))(this, a1, a2);
	}
};
