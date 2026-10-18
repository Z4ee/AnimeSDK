#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52E21E813AA435A9;

#define CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C570700)
#define CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS5_0__GETTALENTPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1C572D00)

inline static constexpr unsigned int Class_1_BCE993FCA79BBCAF___c__DisplayClass5_0_TypeDefinitionIndex = 41881;

class Class_1_BCE993FCA79BBCAF___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 identifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetTalentPath_b__0(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF___C__DISPLAYCLASS5_0__GETTALENTPATH_B__0_OFFSET))(this, a1);
	}
};
