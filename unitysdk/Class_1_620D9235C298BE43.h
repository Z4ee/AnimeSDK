#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_620D9235C298BE43__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4EC60)

inline static constexpr unsigned int Class_1_620D9235C298BE43_TypeDefinitionIndex = 37948;

class Class_1_620D9235C298BE43 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_620D9235C298BE43__CTOR_OFFSET))(this);
	}
};
