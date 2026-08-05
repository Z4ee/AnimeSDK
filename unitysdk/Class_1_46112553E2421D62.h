#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_46112553E2421D62_METHOD_1_0A1B17B7EDC508A9_OFFSET UNITYSDK_OFFSET(0x17064B00)
#define CLASS_1_46112553E2421D62__CTOR_OFFSET UNITYSDK_OFFSET(0x17064AF0)

inline static constexpr unsigned int Class_1_46112553E2421D62_TypeDefinitionIndex = 46722;

class Class_1_46112553E2421D62 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46112553E2421D62__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0A1B17B7EDC508A9(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_46112553E2421D62_METHOD_1_0A1B17B7EDC508A9_OFFSET))(a1, a2);
	}
};
