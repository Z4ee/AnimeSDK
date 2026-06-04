#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CD010263573232AE;

#define CLASS_1_CD010263573232AE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB92650)
#define CLASS_1_CD010263573232AE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB92680)
#define CLASS_1_CD010263573232AE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1AB92690)

inline static constexpr unsigned int Class_1_CD010263573232AE___c_TypeDefinitionIndex = 28742;

class Class_1_CD010263573232AE___c : public ::System::Object
{
public:
	static ::Class_1_CD010263573232AE___c** StaticGet___9()
	{
		return (::Class_1_CD010263573232AE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE___c_TypeDefinitionIndex)->GetStaticField(0x25510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE___C__CTOR_OFFSET))(this);
	}

	::Class_1_CD010263573232AE* __cctor_b__58_0()
	{
		return ((::Class_1_CD010263573232AE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE___C___CCTOR_B__58_0_OFFSET))(this);
	}
};
