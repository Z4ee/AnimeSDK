#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityGlitchEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_DE3FB8516B7BCFB8_METHOD_1_3715AF19BB511D83_OFFSET UNITYSDK_OFFSET(0x12DE9C90)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_DE3FB8516B7BCFB8__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE9C80)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_DE3FB8516B7BCFB8_TypeDefinitionIndex = 69956;

class Class_1_5C5D1BCD30A891BA_Class_1_DE3FB8516B7BCFB8 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityGlitchEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_DE3FB8516B7BCFB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3715AF19BB511D83(::MoleMole::Config::ConfigEntityGlitchEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityGlitchEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_DE3FB8516B7BCFB8_METHOD_1_3715AF19BB511D83_OFFSET))(this, a1);
	}
};
