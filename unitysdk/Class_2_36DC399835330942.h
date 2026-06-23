#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C65AE38F4288793E.h"
#include "unitysdk/Enum_3_F425DCC0454CF821.h"

namespace MoleMole { class UIBabeltowerContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_36DC399835330942_METHOD_2_00E6BEC8F7C2BA02_OFFSET UNITYSDK_OFFSET(0x12CC1720)
#define CLASS_2_36DC399835330942_METHOD_2_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0x12CC1690)
#define CLASS_2_36DC399835330942_METHOD_2_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x12CC1640)
#define CLASS_2_36DC399835330942_METHOD_2_524DAA84A84DF7B3_OFFSET UNITYSDK_OFFSET(0x12CC14B0)
#define CLASS_2_36DC399835330942__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC1000)

inline static constexpr unsigned int Class_2_36DC399835330942_TypeDefinitionIndex = 57010;

class Class_2_36DC399835330942 : public ::Class_1_C65AE38F4288793E
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36DC399835330942__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_524DAA84A84DF7B3(::MoleMole::UIBabeltowerContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + CLASS_2_36DC399835330942_METHOD_2_524DAA84A84DF7B3_OFFSET))(this, a1);
	}

	::Enum_3_F425DCC0454CF821 Method_2_49AC00594530B714()
	{
		return ((::Enum_3_F425DCC0454CF821(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36DC399835330942_METHOD_2_49AC00594530B714_OFFSET))(this);
	}

	::Enum_3_F425DCC0454CF821 Method_2_49AC00594530B714_1()
	{
		return ((::Enum_3_F425DCC0454CF821(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36DC399835330942_METHOD_2_49AC00594530B714_1_OFFSET))(this);
	}

	::System::Void Method_2_00E6BEC8F7C2BA02(::MoleMole::UIBabeltowerContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerContext*))((::PBYTE)hIl2Cpp + CLASS_2_36DC399835330942_METHOD_2_00E6BEC8F7C2BA02_OFFSET))(this, a1);
	}
};
