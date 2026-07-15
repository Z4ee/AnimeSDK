#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02F4D434E735F1B9;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_64C09260458CEE11;
class Class_1_714EC10B569D81C0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2B89C668A3A7D6D3_METHOD_1_5709AD86ED7AB654_OFFSET UNITYSDK_OFFSET(0x12E2FD40)
#define CLASS_1_2B89C668A3A7D6D3_METHOD_1_FA1FD849F68CAF57_OFFSET UNITYSDK_OFFSET(0x12E305D0)

inline static constexpr unsigned int Class_1_2B89C668A3A7D6D3_TypeDefinitionIndex = 39328;

class Class_1_2B89C668A3A7D6D3 : public ::System::Object
{
public:
	// static const ::System::UInt16 Field_1_0 = 0x1; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void Method_1_5709AD86ED7AB654(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>*))((::PBYTE)hIl2Cpp + CLASS_1_2B89C668A3A7D6D3_METHOD_1_5709AD86ED7AB654_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_02F4D434E735F1B9* Method_1_FA1FD849F68CAF57(::Class_1_64C09260458CEE11* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::Class_1_02F4D434E735F1B9*(*)(::Class_1_64C09260458CEE11*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_2B89C668A3A7D6D3_METHOD_1_FA1FD849F68CAF57_OFFSET))(a1, a2);
	}
};
