#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class MapEntranceUnlockRow; }

#define CLASS_1_BDE6C85312507530_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x929B7A0)
#define CLASS_1_BDE6C85312507530_METHOD_1_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x929B750)
#define CLASS_1_BDE6C85312507530_METHOD_1_8365AFBD2843808C_OFFSET UNITYSDK_OFFSET(0x929B6B0)
#define CLASS_1_BDE6C85312507530__CTOR_OFFSET UNITYSDK_OFFSET(0x929B720)

inline static constexpr unsigned int Class_1_BDE6C85312507530_TypeDefinitionIndex = 62855;

class Class_1_BDE6C85312507530 : public ::System::Object
{
public:
	::RPG::Client::ConditionChecker* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::MapEntranceUnlockRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_BDE6C85312507530* Method_1_8365AFBD2843808C(::RPG::GameCore::MapEntranceUnlockRow* a1)
	{
		return ((::Class_1_BDE6C85312507530*(*)(::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_8365AFBD2843808C_OFFSET))(a1);
	}

	::System::Void Method_1_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
