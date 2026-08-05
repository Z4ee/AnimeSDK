#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_6859A3CE5AC993B4_METHOD_1_D3BD54F27CEF0EDC_OFFSET UNITYSDK_OFFSET(0x190300C0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_6859A3CE5AC993B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1901C2D0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_6859A3CE5AC993B4_TypeDefinitionIndex = 67669;

class Class_1_5C5D1BCD30A891BA_Class_1_6859A3CE5AC993B4 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityDistortionEffects*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_6859A3CE5AC993B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D3BD54F27CEF0EDC(::MoleMole::Config::ConfigEntityDistortionEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityDistortionEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_6859A3CE5AC993B4_METHOD_1_D3BD54F27CEF0EDC_OFFSET))(this, a1);
	}
};
