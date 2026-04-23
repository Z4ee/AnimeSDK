#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_980;

#define CLASS_1_D3D14052A5904019_2___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95D3910)
#define CLASS_1_D3D14052A5904019_2___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x95D3A20)

inline static constexpr unsigned int Class_1_D3D14052A5904019_2___c__DisplayClass4_0_TypeDefinitionIndex = 66489;

class Class_1_D3D14052A5904019_2___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_980* iconData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetIconDataList_b__0(::Class_0_16E4307DCC419505_980* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_980*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_2___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET))(this, x);
	}
};
