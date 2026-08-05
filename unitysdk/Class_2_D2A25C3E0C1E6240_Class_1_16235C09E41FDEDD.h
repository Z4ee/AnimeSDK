#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define CLASS_2_D2A25C3E0C1E6240_CLASS_1_16235C09E41FDEDD_METHOD_1_82391CF19139BEB0_OFFSET UNITYSDK_OFFSET(0x1AF2B1B0)
#define CLASS_2_D2A25C3E0C1E6240_CLASS_1_16235C09E41FDEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2B1A0)

inline static constexpr unsigned int Class_2_D2A25C3E0C1E6240_Class_1_16235C09E41FDEDD_TypeDefinitionIndex = 58607;

class Class_2_D2A25C3E0C1E6240_Class_1_16235C09E41FDEDD : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2A25C3E0C1E6240_CLASS_1_16235C09E41FDEDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_82391CF19139BEB0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D2A25C3E0C1E6240_CLASS_1_16235C09E41FDEDD_METHOD_1_82391CF19139BEB0_OFFSET))(this, a1);
	}
};
