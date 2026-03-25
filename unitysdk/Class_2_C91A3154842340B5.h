#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_B99383C5AE28BE6F;

#define CLASS_2_C91A3154842340B5_METHOD_2_57FC422C238CCA4F_OFFSET UNITYSDK_OFFSET(0x115CE160)
#define CLASS_2_C91A3154842340B5_METHOD_2_60543752498FF59A_OFFSET UNITYSDK_OFFSET(0x115CD970)
#define CLASS_2_C91A3154842340B5_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x115CDEC0)
#define CLASS_2_C91A3154842340B5__CTOR_OFFSET UNITYSDK_OFFSET(0x115CD910)
#define CLASS_2_C91A3154842340B5__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x115CDEF0)
#define CLASS_2_C91A3154842340B5__ONTICK_OFFSET UNITYSDK_OFFSET(0x115CE100)
#define CLASS_2_C91A3154842340B5__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x115CDFC0)
#define CLASS_2_C91A3154842340B5___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x115CE450)
#define CLASS_2_C91A3154842340B5___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x115CE510)
#define CLASS_2_C91A3154842340B5___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x115CE4B0)

inline static constexpr unsigned int Class_2_C91A3154842340B5_TypeDefinitionIndex = 59392;

class Class_2_C91A3154842340B5 : public ::RPG::Client::UIController
{
public:
	::System::UInt32 Field_2_3; // 0x180
	::System::Boolean Field_2_2; // 0x184
	::System::Single Field_2_1; // 0x188
	::System::Single Field_2_0; // 0x18C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_60543752498FF59A(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5_METHOD_2_60543752498FF59A_OFFSET))(this, a1, a2);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_57FC422C238CCA4F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5_METHOD_2_57FC422C238CCA4F_OFFSET))(this, a1);
	}

	::Class_2_B99383C5AE28BE6F* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_B99383C5AE28BE6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C91A3154842340B5___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
