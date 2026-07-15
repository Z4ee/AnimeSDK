#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CBD84809434AB007.h"

#define CLASS_2_DF8CB062CFFF8115_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x16EA1860)
#define CLASS_2_DF8CB062CFFF8115_METHOD_2_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x16EA1790)
#define CLASS_2_DF8CB062CFFF8115_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EA1740)
#define CLASS_2_DF8CB062CFFF8115__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA1A30)

inline static constexpr unsigned int Class_2_DF8CB062CFFF8115_TypeDefinitionIndex = 70799;

class Class_2_DF8CB062CFFF8115 : public ::Class_1_CBD84809434AB007
{
public:
	::System::Single Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF8CB062CFFF8115__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF8CB062CFFF8115_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF8CB062CFFF8115_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Single Method_2_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF8CB062CFFF8115_METHOD_2_68A2CA32DC720C44_OFFSET))(this);
	}
};
