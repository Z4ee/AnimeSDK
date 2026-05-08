#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_943E95074A489718_CLASS_1_8F469C63FFD4A2B3_METHOD_1_0D339A7577CD0027_OFFSET UNITYSDK_OFFSET(0x11A98870)
#define CLASS_3_943E95074A489718_CLASS_1_8F469C63FFD4A2B3__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98860)

inline static constexpr unsigned int Class_3_943E95074A489718_Class_1_8F469C63FFD4A2B3_TypeDefinitionIndex = 64936;

class Class_3_943E95074A489718_Class_1_8F469C63FFD4A2B3 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CLASS_1_8F469C63FFD4A2B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D339A7577CD0027(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CLASS_1_8F469C63FFD4A2B3_METHOD_1_0D339A7577CD0027_OFFSET))(this, a1);
	}
};
