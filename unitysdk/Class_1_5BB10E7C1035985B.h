#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A280D225275881D.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_5BB10E7C1035985B_METHOD_1_57F2DDB76C82AEC4_OFFSET UNITYSDK_OFFSET(0x133D6880)
#define CLASS_1_5BB10E7C1035985B_METHOD_1_83C62D2130E2E0BC_OFFSET UNITYSDK_OFFSET(0x133D6840)

inline static constexpr unsigned int Class_1_5BB10E7C1035985B_TypeDefinitionIndex = 61021;

class Class_1_5BB10E7C1035985B : public ::System::Object
{
public:
	static ::Enum_3_3A280D225275881D Method_1_83C62D2130E2E0BC(::Enum_3_3A280D225275881D a1)
	{
		return ((::Enum_3_3A280D225275881D(*)(::Enum_3_3A280D225275881D))((::PBYTE)hIl2Cpp + CLASS_1_5BB10E7C1035985B_METHOD_1_83C62D2130E2E0BC_OFFSET))(a1);
	}

	static ::Enum_3_3A280D225275881D Method_1_57F2DDB76C82AEC4(::Enum_3_3A280D225275881D a1, ::System::Collections::Generic::IList_1<::Enum_3_3A280D225275881D>* a2)
	{
		return ((::Enum_3_3A280D225275881D(*)(::Enum_3_3A280D225275881D, ::System::Collections::Generic::IList_1<::Enum_3_3A280D225275881D>*))((::PBYTE)hIl2Cpp + CLASS_1_5BB10E7C1035985B_METHOD_1_57F2DDB76C82AEC4_OFFSET))(a1, a2);
	}
};
