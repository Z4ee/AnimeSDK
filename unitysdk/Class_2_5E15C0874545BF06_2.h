#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FB2D0)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_2_TypeDefinitionIndex = 24718;

class Class_2_5E15C0874545BF06_2 : public ::System::Attribute
{
public:
	::System::String* JIDLKIHJLFL; // 0x10
	::System::String* MIFJNPKACOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_2__CTOR_OFFSET))(this);
	}
};
