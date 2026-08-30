#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_620D9235C298BE43__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A8D00)

inline static constexpr unsigned int Class_1_620D9235C298BE43_TypeDefinitionIndex = 40366;

class Class_1_620D9235C298BE43 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HEIBMGFCJDJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_620D9235C298BE43__CTOR_OFFSET))(this);
	}
};
