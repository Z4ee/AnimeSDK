#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace System { class Action; }

#define CLASS_1_7B694D9C359052C0_CLASS_1_460368D45CFCB042_METHOD_1_DFAEB6EA30062482_OFFSET UNITYSDK_OFFSET(0x17E74840)
#define CLASS_1_7B694D9C359052C0_CLASS_1_460368D45CFCB042__CTOR_OFFSET UNITYSDK_OFFSET(0x17E74830)

inline static constexpr unsigned int Class_1_7B694D9C359052C0_Class_1_460368D45CFCB042_TypeDefinitionIndex = 77789;

class Class_1_7B694D9C359052C0_Class_1_460368D45CFCB042 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_CLASS_1_460368D45CFCB042__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DFAEB6EA30062482(::MoleMole::Config::ConfigSpecialEffectHitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitData*))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_CLASS_1_460368D45CFCB042_METHOD_1_DFAEB6EA30062482_OFFSET))(this, a1);
	}
};
