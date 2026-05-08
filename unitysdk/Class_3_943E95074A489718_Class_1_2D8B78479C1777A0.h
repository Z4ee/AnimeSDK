#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_943E95074A489718_CLASS_1_2D8B78479C1777A0_METHOD_1_77B018C4C30975F4_OFFSET UNITYSDK_OFFSET(0x14A60510)
#define CLASS_3_943E95074A489718_CLASS_1_2D8B78479C1777A0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A60500)

inline static constexpr unsigned int Class_3_943E95074A489718_Class_1_2D8B78479C1777A0_TypeDefinitionIndex = 64934;

class Class_3_943E95074A489718_Class_1_2D8B78479C1777A0 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CLASS_1_2D8B78479C1777A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_77B018C4C30975F4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CLASS_1_2D8B78479C1777A0_METHOD_1_77B018C4C30975F4_OFFSET))(this, a1);
	}
};
