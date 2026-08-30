#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_6__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C2BB0)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_6_TypeDefinitionIndex = 52351;

class Class_2_5E15C0874545BF06_6 : public ::System::Attribute
{
public:
	::System::String* BLMOECIMHNO; // 0x10
	::System::String* FIIJMECGFIA; // 0x18
	::System::String* NLKIBBGEEHI; // 0x20
	::System::String* IDIEGDHBBFH; // 0x28
	::System::String* BAGMCLHAOMG; // 0x30
	::System::String* IOHNCODOJHC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_6__CTOR_OFFSET))(this);
	}
};
