#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_58F45DFA6736A0B1_METHOD_1_0169951C72B2BA96_OFFSET UNITYSDK_OFFSET(0x113D71C0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_58F45DFA6736A0B1__CTOR_OFFSET UNITYSDK_OFFSET(0x113D71B0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_58F45DFA6736A0B1_TypeDefinitionIndex = 77465;

class Class_1_5C5D1BCD30A891BA_Class_1_58F45DFA6736A0B1 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityAutoExposureEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_58F45DFA6736A0B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0169951C72B2BA96(::MoleMole::Config::ConfigEntityAutoExposureEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAutoExposureEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_58F45DFA6736A0B1_METHOD_1_0169951C72B2BA96_OFFSET))(this, a1);
	}
};
