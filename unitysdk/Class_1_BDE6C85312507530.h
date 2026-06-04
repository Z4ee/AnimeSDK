#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class MapEntranceUnlockRow; }

#define CLASS_1_BDE6C85312507530_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB04CB00)
#define CLASS_1_BDE6C85312507530_METHOD_1_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xB04CAB0)
#define CLASS_1_BDE6C85312507530_METHOD_1_8365AFBD2843808C_OFFSET UNITYSDK_OFFSET(0xB04CA10)
#define CLASS_1_BDE6C85312507530__CTOR_OFFSET UNITYSDK_OFFSET(0xB04CA80)

inline static constexpr unsigned int Class_1_BDE6C85312507530_TypeDefinitionIndex = 63790;

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

	::System::Void Method_1_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_572E53F76E315839_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDE6C85312507530_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
