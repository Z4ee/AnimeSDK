#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02F4D434E735F1B9;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_64C09260458CEE11;
class Class_1_E1BAB16E47F2B8E6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2B89C668A3A7D6D3_METHOD_1_5709AD86ED7AB654_OFFSET UNITYSDK_OFFSET(0x1BF29720)
#define CLASS_1_2B89C668A3A7D6D3_METHOD_1_FA1FD849F68CAF57_OFFSET UNITYSDK_OFFSET(0x1BF29FB0)

inline static constexpr unsigned int Class_1_2B89C668A3A7D6D3_TypeDefinitionIndex = 40201;

class Class_1_2B89C668A3A7D6D3 : public ::System::Object
{
public:
	// static const ::System::UInt16 ABNPHONMCEP = 0x1; // 0x0
	// static const ::System::String* GJPNNCFPMGK; // 0x0

	static ::System::Void Method_1_5709AD86ED7AB654(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_E1BAB16E47F2B8E6*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_E1BAB16E47F2B8E6*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_E1BAB16E47F2B8E6*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_E1BAB16E47F2B8E6*>*))((::PBYTE)hIl2Cpp + CLASS_1_2B89C668A3A7D6D3_METHOD_1_5709AD86ED7AB654_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_02F4D434E735F1B9* Method_1_FA1FD849F68CAF57(::Class_1_64C09260458CEE11* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::Class_1_02F4D434E735F1B9*(*)(::Class_1_64C09260458CEE11*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_2B89C668A3A7D6D3_METHOD_1_FA1FD849F68CAF57_OFFSET))(a1, a2);
	}
};
