#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXComicDotEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_B853AF2ECAC04AB3_METHOD_1_57A5088226E5516A_OFFSET UNITYSDK_OFFSET(0x1745D110)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_B853AF2ECAC04AB3__CTOR_OFFSET UNITYSDK_OFFSET(0x1745D100)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_B853AF2ECAC04AB3_TypeDefinitionIndex = 77476;

class Class_1_5C5D1BCD30A891BA_Class_1_B853AF2ECAC04AB3 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityFXComicDotEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_B853AF2ECAC04AB3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_57A5088226E5516A(::MoleMole::Config::ConfigEntityFXComicDotEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFXComicDotEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_B853AF2ECAC04AB3_METHOD_1_57A5088226E5516A_OFFSET))(this, a1);
	}
};
