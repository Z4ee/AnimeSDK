#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5B0957DF4420757C_METHOD_1_2D8C5D24DD2300C5_OFFSET UNITYSDK_OFFSET(0x15EED4A0)
#define CLASS_1_5B0957DF4420757C_METHOD_1_AAEFE3873973B571_OFFSET UNITYSDK_OFFSET(0x15EED360)
#define CLASS_1_5B0957DF4420757C_METHOD_1_DAB9087B1AF0C469_1_OFFSET UNITYSDK_OFFSET(0x15EED530)
#define CLASS_1_5B0957DF4420757C_METHOD_1_DAB9087B1AF0C469_OFFSET UNITYSDK_OFFSET(0x15EED440)
#define CLASS_1_5B0957DF4420757C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EED580)

inline static constexpr unsigned int Class_1_5B0957DF4420757C_TypeDefinitionIndex = 69615;

class Class_1_5B0957DF4420757C : public ::System::Object
{
public:
	// static const ::System::Char Field_1_0; // 0x0
	// static const ::System::Char Field_1_1; // 0x0
	// static const ::System::Char Field_1_2; // 0x0
	// static const ::System::Char Field_1_3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0957DF4420757C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_AAEFE3873973B571(::System::Char a1, ::System::Char& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char&))((::PBYTE)hIl2Cpp + CLASS_1_5B0957DF4420757C_METHOD_1_AAEFE3873973B571_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DAB9087B1AF0C469(::System::Char a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_5B0957DF4420757C_METHOD_1_DAB9087B1AF0C469_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DAB9087B1AF0C469_1(::System::Char a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_5B0957DF4420757C_METHOD_1_DAB9087B1AF0C469_1_OFFSET))(this, a1);
	}

	::System::Char Method_1_2D8C5D24DD2300C5(::System::Char a1)
	{
		return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_5B0957DF4420757C_METHOD_1_2D8C5D24DD2300C5_OFFSET))(this, a1);
	}
};
