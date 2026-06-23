#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_7798ACAFBF5EECCA_METHOD_1_DD6ECB4F8F4861C4_OFFSET UNITYSDK_OFFSET(0x133439D0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_7798ACAFBF5EECCA__CTOR_OFFSET UNITYSDK_OFFSET(0x133439C0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_7798ACAFBF5EECCA_TypeDefinitionIndex = 77475;

class Class_1_5C5D1BCD30A891BA_Class_1_7798ACAFBF5EECCA : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityOldCRTEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_7798ACAFBF5EECCA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DD6ECB4F8F4861C4(::MoleMole::Config::ConfigEntityOldCRTEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityOldCRTEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_7798ACAFBF5EECCA_METHOD_1_DD6ECB4F8F4861C4_OFFSET))(this, a1);
	}
};
