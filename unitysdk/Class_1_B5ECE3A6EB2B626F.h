#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E9C9AAD7C711B3E3;
namespace RPG::Client { class UIController; }

#define CLASS_1_B5ECE3A6EB2B626F_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x90E24F0)
#define CLASS_1_B5ECE3A6EB2B626F_METHOD_1_E6322927D9F0FCF1_OFFSET UNITYSDK_OFFSET(0x90E1740)
#define CLASS_1_B5ECE3A6EB2B626F_METHOD_1_E6BD0E14EB3E7279_OFFSET UNITYSDK_OFFSET(0x90E1A60)
#define CLASS_1_B5ECE3A6EB2B626F__CTOR_OFFSET UNITYSDK_OFFSET(0x90E2540)

inline static constexpr unsigned int Class_1_B5ECE3A6EB2B626F_TypeDefinitionIndex = 71439;

class Class_1_B5ECE3A6EB2B626F : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5ECE3A6EB2B626F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6322927D9F0FCF1(::Class_2_E9C9AAD7C711B3E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_B5ECE3A6EB2B626F_METHOD_1_E6322927D9F0FCF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6BD0E14EB3E7279(::System::Single a1, ::Class_2_E9C9AAD7C711B3E3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_B5ECE3A6EB2B626F_METHOD_1_E6BD0E14EB3E7279_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_E9C9AAD7C711B3E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_B5ECE3A6EB2B626F_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
