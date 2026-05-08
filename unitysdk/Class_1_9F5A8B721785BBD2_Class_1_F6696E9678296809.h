#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace System { class Action; }

#define CLASS_1_9F5A8B721785BBD2_CLASS_1_F6696E9678296809_METHOD_1_79FE7A40CCC24514_OFFSET UNITYSDK_OFFSET(0x10ADC5B0)
#define CLASS_1_9F5A8B721785BBD2_CLASS_1_F6696E9678296809__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADC5A0)

inline static constexpr unsigned int Class_1_9F5A8B721785BBD2_Class_1_F6696E9678296809_TypeDefinitionIndex = 63294;

class Class_1_9F5A8B721785BBD2_Class_1_F6696E9678296809 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_CLASS_1_F6696E9678296809__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_79FE7A40CCC24514(::MoleMole::Config::ConfigAnimatorBeHitPriorities* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_CLASS_1_F6696E9678296809_METHOD_1_79FE7A40CCC24514_OFFSET))(this, a1);
	}
};
