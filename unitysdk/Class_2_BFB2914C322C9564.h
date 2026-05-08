#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTargetRole_TagNumWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRole_TargetWidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_BFB2914C322C9564_METHOD_2_57DFF24ACF7DBF36_OFFSET UNITYSDK_OFFSET(0xFD799A0)
#define CLASS_2_BFB2914C322C9564_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xFD79B20)
#define CLASS_2_BFB2914C322C9564_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFD79BD0)
#define CLASS_2_BFB2914C322C9564__CTOR_OFFSET UNITYSDK_OFFSET(0xFD79BC0)

inline static constexpr unsigned int Class_2_BFB2914C322C9564_TypeDefinitionIndex = 55700;

class Class_2_BFB2914C322C9564 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIFlowerMainTargetRole_TargetWidgetController*>* Field_2_0; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIFlowerMainTargetRole_TagNumWidgetController*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB2914C322C9564__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57DFF24ACF7DBF36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BFB2914C322C9564_METHOD_2_57DFF24ACF7DBF36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BFB2914C322C9564_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB2914C322C9564_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
