#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class EventArgs; }

#define CLASS_2_5C5754DDF4E59233_CLASS_1_16235C09E41FDEDD_METHOD_1_82391CF19139BEB0_OFFSET UNITYSDK_OFFSET(0x11FB91C0)
#define CLASS_2_5C5754DDF4E59233_CLASS_1_16235C09E41FDEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x11FB91B0)

inline static constexpr unsigned int Class_2_5C5754DDF4E59233_Class_1_16235C09E41FDEDD_TypeDefinitionIndex = 49990;

class Class_2_5C5754DDF4E59233_Class_1_16235C09E41FDEDD : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_1_16235C09E41FDEDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_82391CF19139BEB0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_5C5754DDF4E59233_CLASS_1_16235C09E41FDEDD_METHOD_1_82391CF19139BEB0_OFFSET))(this, a1);
	}
};
