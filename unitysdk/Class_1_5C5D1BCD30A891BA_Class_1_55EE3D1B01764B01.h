#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityMotionBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_55EE3D1B01764B01_METHOD_1_8B103AE7BF8567D1_OFFSET UNITYSDK_OFFSET(0x10B8A9C0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_55EE3D1B01764B01__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8A9B0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_55EE3D1B01764B01_TypeDefinitionIndex = 69954;

class Class_1_5C5D1BCD30A891BA_Class_1_55EE3D1B01764B01 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityMotionBlurEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_55EE3D1B01764B01__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B103AE7BF8567D1(::MoleMole::Config::ConfigEntityMotionBlurEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityMotionBlurEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_55EE3D1B01764B01_METHOD_1_8B103AE7BF8567D1_OFFSET))(this, a1);
	}
};
