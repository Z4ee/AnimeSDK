#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_E87E81F3A9C4E052;

#define CLASS_1_32751454E814BC1B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA83DBA0)
#define CLASS_1_32751454E814BC1B_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xA83E4F0)
#define CLASS_1_32751454E814BC1B_METHOD_1_1C3F624946A5F704_OFFSET UNITYSDK_OFFSET(0xA83E1C0)
#define CLASS_1_32751454E814BC1B_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xA83E5A0)
#define CLASS_1_32751454E814BC1B_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xA83DFF0)
#define CLASS_1_32751454E814BC1B_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xA83DC50)
#define CLASS_1_32751454E814BC1B__CTOR_OFFSET UNITYSDK_OFFSET(0xA83DB90)

inline static constexpr unsigned int Class_1_32751454E814BC1B_TypeDefinitionIndex = 71837;

class Class_1_32751454E814BC1B : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_2* Field_1_0; // 0x10
	::Class_3_E87E81F3A9C4E052* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_E87E81F3A9C4E052* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_E87E81F3A9C4E052*))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Boolean Method_1_1C3F624946A5F704(::RPG::Client::LittleGame::PixAir::PixAirPlaneType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + CLASS_1_32751454E814BC1B_METHOD_1_1C3F624946A5F704_OFFSET))(this, a1);
	}
};
