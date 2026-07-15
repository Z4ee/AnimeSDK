#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2FFFE31BCBDFD37;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E20E428AE57D7278__CTOR_OFFSET UNITYSDK_OFFSET(0x180C9E20)

inline static constexpr unsigned int Class_1_E20E428AE57D7278_TypeDefinitionIndex = 40634;

class Class_1_E20E428AE57D7278 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D2FFFE31BCBDFD37*>* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E20E428AE57D7278__CTOR_OFFSET))(this);
	}
};
