#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace System { class Action; }

#define CLASS_1_7B694D9C359052C0_CLASS_1_4EEAF1F144DBE8C4_METHOD_1_1D8D3E8E356C6D91_OFFSET UNITYSDK_OFFSET(0x16209590)
#define CLASS_1_7B694D9C359052C0_CLASS_1_4EEAF1F144DBE8C4__CTOR_OFFSET UNITYSDK_OFFSET(0x16209580)

inline static constexpr unsigned int Class_1_7B694D9C359052C0_Class_1_4EEAF1F144DBE8C4_TypeDefinitionIndex = 73057;

class Class_1_7B694D9C359052C0_Class_1_4EEAF1F144DBE8C4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_CLASS_1_4EEAF1F144DBE8C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1D8D3E8E356C6D91(::MoleMole::Config::ConfigSpecialEffectHitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitData*))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_CLASS_1_4EEAF1F144DBE8C4_METHOD_1_1D8D3E8E356C6D91_OFFSET))(this, a1);
	}
};
