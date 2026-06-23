#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1.h"
#include "unitysdk/System/Object.h"

class Class_1_EEA0111A28582B57;
class Class_2_208CC9941471731A_1108;
class Class_2_208CC9941471731A_336;
namespace MoleMole { class UITabBtn05RowWidgetController; }
namespace System { class String; }

#define CLASS_1_1005B9479049BC5A_METHOD_1_17781C67C46C8E05_OFFSET UNITYSDK_OFFSET(0x150DA2A0)
#define CLASS_1_1005B9479049BC5A_METHOD_1_3249389B928082B9_OFFSET UNITYSDK_OFFSET(0x150DA4C0)
#define CLASS_1_1005B9479049BC5A_METHOD_1_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0x150DA280)
#define CLASS_1_1005B9479049BC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x150D9EF0)

inline static constexpr unsigned int Class_1_1005B9479049BC5A_TypeDefinitionIndex = 59341;

class Class_1_1005B9479049BC5A : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_1108* Field_1_2; // 0x10
	::Class_2_208CC9941471731A_336* Field_1_1; // 0x18
	::Enum_3_63CAB6C405C6C7B1 Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_208CC9941471731A_336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_336*))((::PBYTE)hIl2Cpp + CLASS_1_1005B9479049BC5A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_17781C67C46C8E05(::MoleMole::UITabBtn05RowWidgetController* a1, ::Class_1_EEA0111A28582B57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn05RowWidgetController*, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + CLASS_1_1005B9479049BC5A_METHOD_1_17781C67C46C8E05_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_3249389B928082B9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1005B9479049BC5A_METHOD_1_3249389B928082B9_OFFSET))(this);
	}

	::System::Int32 Method_1_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1005B9479049BC5A_METHOD_1_80C66335F1B7C73D_OFFSET))(this);
	}
};
