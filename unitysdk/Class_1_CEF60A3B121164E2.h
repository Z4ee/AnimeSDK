#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_CEF60A3B121164E2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15E0C5E0)
#define CLASS_1_CEF60A3B121164E2_METHOD_1_4AB2B25263ADAC0F_OFFSET UNITYSDK_OFFSET(0x15E0C550)
#define CLASS_1_CEF60A3B121164E2__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0C540)

inline static constexpr unsigned int Class_1_CEF60A3B121164E2_TypeDefinitionIndex = 80071;

class Class_1_CEF60A3B121164E2 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF60A3B121164E2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4AB2B25263ADAC0F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CEF60A3B121164E2_METHOD_1_4AB2B25263ADAC0F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF60A3B121164E2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
