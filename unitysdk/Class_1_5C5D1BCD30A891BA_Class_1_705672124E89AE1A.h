#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_705672124E89AE1A_METHOD_1_91F155C5B3971C7F_OFFSET UNITYSDK_OFFSET(0x14FCD220)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_705672124E89AE1A__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCD210)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_705672124E89AE1A_TypeDefinitionIndex = 67656;

class Class_1_5C5D1BCD30A891BA_Class_1_705672124E89AE1A : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_705672124E89AE1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91F155C5B3971C7F(::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_705672124E89AE1A_METHOD_1_91F155C5B3971C7F_OFFSET))(this, a1);
	}
};
