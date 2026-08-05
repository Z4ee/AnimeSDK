#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_903CA025C946473F_METHOD_1_7EB6947225883892_OFFSET UNITYSDK_OFFSET(0x117B81A0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_903CA025C946473F__CTOR_OFFSET UNITYSDK_OFFSET(0x117B8190)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_903CA025C946473F_TypeDefinitionIndex = 67652;

class Class_1_5C5D1BCD30A891BA_Class_1_903CA025C946473F : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityPaniniProjectionEffects*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_903CA025C946473F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EB6947225883892(::MoleMole::Config::ConfigEntityPaniniProjectionEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityPaniniProjectionEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_903CA025C946473F_METHOD_1_7EB6947225883892_OFFSET))(this, a1);
	}
};
