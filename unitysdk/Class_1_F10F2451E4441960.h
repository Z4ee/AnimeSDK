#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F10F2451E4441960_METHOD_1_29E04EB48C8460D4_OFFSET UNITYSDK_OFFSET(0xE888220)
#define CLASS_1_F10F2451E4441960_METHOD_1_37004957DE284AA9_OFFSET UNITYSDK_OFFSET(0xE8887E0)
#define CLASS_1_F10F2451E4441960_METHOD_1_C1192407BE74F049_OFFSET UNITYSDK_OFFSET(0xE888680)

inline static constexpr unsigned int Class_1_F10F2451E4441960_TypeDefinitionIndex = 40811;

class Class_1_F10F2451E4441960 : public ::System::Object
{
public:
	static ::System::Void Method_1_29E04EB48C8460D4(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F10F2451E4441960_METHOD_1_29E04EB48C8460D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1192407BE74F049(::Enum_3_7D1331C413E60035 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Enum_3_7D1331C413E60035, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F10F2451E4441960_METHOD_1_C1192407BE74F049_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_37004957DE284AA9(::Enum_3_7D1331C413E60035 a1)
	{
		return ((::System::String*(*)(::Enum_3_7D1331C413E60035))((::PBYTE)hIl2Cpp + CLASS_1_F10F2451E4441960_METHOD_1_37004957DE284AA9_OFFSET))(a1);
	}
};
