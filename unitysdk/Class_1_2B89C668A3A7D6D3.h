#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_3FDA38EC892C13B2;
class Class_1_49280AAF81D53F7B;
class Class_1_4BC7F3E0EBEF5C7F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2B89C668A3A7D6D3_METHOD_1_5709AD86ED7AB654_OFFSET UNITYSDK_OFFSET(0x164AF570)
#define CLASS_1_2B89C668A3A7D6D3_METHOD_1_FA1FD849F68CAF57_OFFSET UNITYSDK_OFFSET(0x164AE910)

inline static constexpr unsigned int Class_1_2B89C668A3A7D6D3_TypeDefinitionIndex = 32066;

class Class_1_2B89C668A3A7D6D3 : public ::System::Object
{
public:
	// static const ::System::UInt16 Field_1_0 = 0x1; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void Method_1_5709AD86ED7AB654(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_4BC7F3E0EBEF5C7F*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_4BC7F3E0EBEF5C7F*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_4BC7F3E0EBEF5C7F*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_4BC7F3E0EBEF5C7F*>*))((::PBYTE)hIl2Cpp + CLASS_1_2B89C668A3A7D6D3_METHOD_1_5709AD86ED7AB654_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_3FDA38EC892C13B2* Method_1_FA1FD849F68CAF57(::Class_1_49280AAF81D53F7B* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::Class_1_3FDA38EC892C13B2*(*)(::Class_1_49280AAF81D53F7B*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_2B89C668A3A7D6D3_METHOD_1_FA1FD849F68CAF57_OFFSET))(a1, a2);
	}
};
