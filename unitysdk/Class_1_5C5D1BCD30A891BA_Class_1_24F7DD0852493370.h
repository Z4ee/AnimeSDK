#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorCurvesEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_24F7DD0852493370_METHOD_1_03EDD27EB78D45B7_OFFSET UNITYSDK_OFFSET(0x14FCE330)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_24F7DD0852493370__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCE320)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_24F7DD0852493370_TypeDefinitionIndex = 67658;

class Class_1_5C5D1BCD30A891BA_Class_1_24F7DD0852493370 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityColorCurvesEffects*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_24F7DD0852493370__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03EDD27EB78D45B7(::MoleMole::Config::ConfigEntityColorCurvesEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityColorCurvesEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_24F7DD0852493370_METHOD_1_03EDD27EB78D45B7_OFFSET))(this, a1);
	}
};
