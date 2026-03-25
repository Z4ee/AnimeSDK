#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitEnvProfile.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_0420EF97D4E89B26_METHOD_4_AB25BC46DD485A6A_OFFSET UNITYSDK_OFFSET(0x16BB8A00)
#define CLASS_4_0420EF97D4E89B26_METHOD_4_DC9F2B18FBAB6ADB_OFFSET UNITYSDK_OFFSET(0x16BB8A90)
#define CLASS_4_0420EF97D4E89B26__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB8A60)

inline static constexpr unsigned int Class_4_0420EF97D4E89B26_TypeDefinitionIndex = 20073;

class Class_4_0420EF97D4E89B26 : public ::RPG::GameCore::TransitEnvProfile
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0420EF97D4E89B26__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_AB25BC46DD485A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_0420EF97D4E89B26*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_0420EF97D4E89B26*&))((::PBYTE)hIl2Cpp + CLASS_4_0420EF97D4E89B26_METHOD_4_AB25BC46DD485A6A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_DC9F2B18FBAB6ADB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_0420EF97D4E89B26* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_0420EF97D4E89B26*))((::PBYTE)hIl2Cpp + CLASS_4_0420EF97D4E89B26_METHOD_4_DC9F2B18FBAB6ADB_OFFSET))(a1, a2);
	}
};
