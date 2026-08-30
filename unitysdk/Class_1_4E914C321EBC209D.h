#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC63D4C97D4807F1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimMoveBakedConfig; }

#define CLASS_1_4E914C321EBC209D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C630DD0)

inline static constexpr unsigned int Class_1_4E914C321EBC209D_TypeDefinitionIndex = 41631;

class Class_1_4E914C321EBC209D : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimMoveBakedConfig* ENHIBABPIMP; // 0x10
	::Struct_2_CC63D4C97D4807F1 EFDGPNNMJFK; // 0x18
	::System::UInt32 CAKDJNJIFAJ; // 0x50
	::System::Single FMCAINKKPCL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E914C321EBC209D__CTOR_OFFSET))(this);
	}
};
