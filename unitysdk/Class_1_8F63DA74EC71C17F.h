#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_761F3D4A71EF9DAE;
namespace MoleMole { class BaseRedDotRecord; }
namespace System { class String; }

#define CLASS_1_8F63DA74EC71C17F_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x122EA020)
#define CLASS_1_8F63DA74EC71C17F_METHOD_1_77D41A598DB7BE63_OFFSET UNITYSDK_OFFSET(0x122EA030)
#define CLASS_1_8F63DA74EC71C17F_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x122E9DE0)
#define CLASS_1_8F63DA74EC71C17F_METHOD_1_83D5276F7B48C980_OFFSET UNITYSDK_OFFSET(0x122E9DF0)
#define CLASS_1_8F63DA74EC71C17F__CTOR_OFFSET UNITYSDK_OFFSET(0x122E9DA0)

inline static constexpr unsigned int Class_1_8F63DA74EC71C17F_TypeDefinitionIndex = 41627;

class Class_1_8F63DA74EC71C17F : public ::System::Object
{
public:
	::Class_1_761F3D4A71EF9DAE* Field_1_1; // 0x10
	::MoleMole::BaseRedDotRecord* Field_1_5; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::Boolean Field_1_0; // 0x28
	::System::Int64 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F63DA74EC71C17F__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F63DA74EC71C17F_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_83D5276F7B48C980(::Class_1_1EA8435E138F2E03* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F63DA74EC71C17F_METHOD_1_83D5276F7B48C980_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_8F63DA74EC71C17F_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::String* Method_1_77D41A598DB7BE63()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F63DA74EC71C17F_METHOD_1_77D41A598DB7BE63_OFFSET))(this);
	}
};
