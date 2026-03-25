#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A043D803AC652E6E.h"

#define CLASS_2_9C4E0E0141829F67_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x10538650)
#define CLASS_2_9C4E0E0141829F67_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x10538660)
#define CLASS_2_9C4E0E0141829F67__CTOR_OFFSET UNITYSDK_OFFSET(0x10538670)

inline static constexpr unsigned int Class_2_9C4E0E0141829F67_TypeDefinitionIndex = 60210;

class Class_2_9C4E0E0141829F67 : public ::Class_1_A043D803AC652E6E
{
public:
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C4E0E0141829F67__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C4E0E0141829F67_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C4E0E0141829F67_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
