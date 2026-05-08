#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_338D6856670688B4_METHOD_1_50EC58E19CB476E6_OFFSET UNITYSDK_OFFSET(0x11983D30)
#define CLASS_1_338D6856670688B4_METHOD_1_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x11983E70)
#define CLASS_1_338D6856670688B4_METHOD_1_902CDEE513F5A469_OFFSET UNITYSDK_OFFSET(0x11983A00)
#define CLASS_1_338D6856670688B4__CTOR_OFFSET UNITYSDK_OFFSET(0x11983900)

inline static constexpr unsigned int Class_1_338D6856670688B4_TypeDefinitionIndex = 38803;

class Class_1_338D6856670688B4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_338D6856670688B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_902CDEE513F5A469(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_338D6856670688B4_METHOD_1_902CDEE513F5A469_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_50EC58E19CB476E6(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_338D6856670688B4_METHOD_1_50EC58E19CB476E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_338D6856670688B4_METHOD_1_84D2CF41A744CC73_OFFSET))(this, a1);
	}
};
