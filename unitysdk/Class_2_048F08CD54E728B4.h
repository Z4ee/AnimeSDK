#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_81D34D116310A358.h"

class Class_3_430CD7B8B4A4AEC4_2;

#define CLASS_2_048F08CD54E728B4_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xD583000)
#define CLASS_2_048F08CD54E728B4__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD582FA0)
#define CLASS_2_048F08CD54E728B4__CTOR_OFFSET UNITYSDK_OFFSET(0xD582F80)

inline static constexpr unsigned int Class_2_048F08CD54E728B4_TypeDefinitionIndex = 54162;

class Class_2_048F08CD54E728B4 : public ::Class_1_81D34D116310A358
{
public:
	::System::UInt32 Field_2_0; // 0x30

	::System::Void _ctor(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_048F08CD54E728B4__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_430CD7B8B4A4AEC4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_430CD7B8B4A4AEC4_2*))((::PBYTE)hIl2Cpp + CLASS_2_048F08CD54E728B4__CTOR_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_048F08CD54E728B4_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}
};
