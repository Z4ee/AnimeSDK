#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigNapBlooms; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_105640B08BC32684_METHOD_1_750D26BA9ACBA5D8_OFFSET UNITYSDK_OFFSET(0x13F84A10)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_105640B08BC32684__CTOR_OFFSET UNITYSDK_OFFSET(0x13F84A00)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_105640B08BC32684_TypeDefinitionIndex = 69912;

class Class_1_5C5D1BCD30A891BA_Class_1_105640B08BC32684 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigNapBlooms*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_105640B08BC32684__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_750D26BA9ACBA5D8(::MoleMole::Config::ConfigNapBlooms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigNapBlooms*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_105640B08BC32684_METHOD_1_750D26BA9ACBA5D8_OFFSET))(this, a1);
	}
};
