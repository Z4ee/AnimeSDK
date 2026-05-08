#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_0C2B50B4E54DB417_METHOD_1_608ECB5CEA2C4C58_OFFSET UNITYSDK_OFFSET(0x1208DBB0)
#define CLASS_1_0C2B50B4E54DB417_METHOD_1_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x1208DAC0)
#define CLASS_1_0C2B50B4E54DB417__CTOR_OFFSET UNITYSDK_OFFSET(0x1208D890)

inline static constexpr unsigned int Class_1_0C2B50B4E54DB417_TypeDefinitionIndex = 70039;

class Class_1_0C2B50B4E54DB417 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_516A565475879095<::System::UInt32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_516A565475879095<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0C2B50B4E54DB417__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C2B50B4E54DB417_METHOD_1_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_608ECB5CEA2C4C58()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2B50B4E54DB417_METHOD_1_608ECB5CEA2C4C58_OFFSET))(this);
	}
};
