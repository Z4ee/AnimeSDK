#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1B2A8F1569E55080_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_426A10A9D05FB420_METHOD_1_1337C2FB1F0D96F5_OFFSET UNITYSDK_OFFSET(0xD91CF00)
#define CLASS_1_426A10A9D05FB420_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xD91D110)
#define CLASS_1_426A10A9D05FB420__CTOR_OFFSET UNITYSDK_OFFSET(0xD91CE70)

inline static constexpr unsigned int Class_1_426A10A9D05FB420_TypeDefinitionIndex = 53302;

class Class_1_426A10A9D05FB420 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_1B2A8F1569E55080_2*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426A10A9D05FB420__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1337C2FB1F0D96F5(::System::UInt32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_426A10A9D05FB420_METHOD_1_1337C2FB1F0D96F5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_426A10A9D05FB420_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}
};
