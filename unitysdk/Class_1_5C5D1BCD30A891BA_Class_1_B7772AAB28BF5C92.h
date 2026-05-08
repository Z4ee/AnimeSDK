#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_B7772AAB28BF5C92_METHOD_1_DCED8FE1D95ECBAD_OFFSET UNITYSDK_OFFSET(0x15955060)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_B7772AAB28BF5C92__CTOR_OFFSET UNITYSDK_OFFSET(0x15955050)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_B7772AAB28BF5C92_TypeDefinitionIndex = 69950;

class Class_1_5C5D1BCD30A891BA_Class_1_B7772AAB28BF5C92 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityUnsharpMaskEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_B7772AAB28BF5C92__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCED8FE1D95ECBAD(::MoleMole::Config::ConfigEntityUnsharpMaskEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnsharpMaskEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_B7772AAB28BF5C92_METHOD_1_DCED8FE1D95ECBAD_OFFSET))(this, a1);
	}
};
