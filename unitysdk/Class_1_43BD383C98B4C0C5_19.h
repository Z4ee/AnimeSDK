#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_459992294D008A3E;
class Class_1_A0174173F9D3AFD8;
class Class_1_E750E5E5D854E770;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_43BD383C98B4C0C5_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C52FB80)
#define CLASS_1_43BD383C98B4C0C5_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52FF50)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_19_TypeDefinitionIndex = 41627;

class Class_1_43BD383C98B4C0C5_19 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_19__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_19_TOSTRING_OFFSET))(this);
	}
};
