#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_6F9A3C06E02402A3_METHOD_1_4FD4D0D76039CF16_OFFSET UNITYSDK_OFFSET(0x12A7E7D0)
#define CLASS_1_6D17A92E4F636970_CLASS_1_6F9A3C06E02402A3__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7E7C0)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_6F9A3C06E02402A3_TypeDefinitionIndex = 82525;

class Class_1_6D17A92E4F636970_Class_1_6F9A3C06E02402A3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_6F9A3C06E02402A3__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4FD4D0D76039CF16(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_6F9A3C06E02402A3_METHOD_1_4FD4D0D76039CF16_OFFSET))(this, a1, a2);
	}
};
