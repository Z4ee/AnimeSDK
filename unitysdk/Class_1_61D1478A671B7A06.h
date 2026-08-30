#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_61D1478A671B7A06_METHOD_1_0AA36A8FCF1D2424_OFFSET UNITYSDK_OFFSET(0x17AEF620)
#define CLASS_1_61D1478A671B7A06_METHOD_1_3BA1599B2922A0C9_OFFSET UNITYSDK_OFFSET(0x17AEF770)

inline static constexpr unsigned int Class_1_61D1478A671B7A06_TypeDefinitionIndex = 80413;

class Class_1_61D1478A671B7A06 : public ::System::Object
{
public:
	static ::System::String* Method_1_0AA36A8FCF1D2424(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61D1478A671B7A06_METHOD_1_0AA36A8FCF1D2424_OFFSET))(a1);
	}

	static ::System::String* Method_1_3BA1599B2922A0C9(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61D1478A671B7A06_METHOD_1_3BA1599B2922A0C9_OFFSET))(a1);
	}
};
