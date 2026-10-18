#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define CLASS_1_E4AF9B1D2ED26CD5_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15753CF0)
#define CLASS_1_E4AF9B1D2ED26CD5_1_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x15753AB0)
#define CLASS_1_E4AF9B1D2ED26CD5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x157539E0)

inline static constexpr unsigned int Class_1_E4AF9B1D2ED26CD5_1_TypeDefinitionIndex = 49858;

class Class_1_E4AF9B1D2ED26CD5_1 : public ::System::Object
{
public:
	::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x10
	::Class_0_16E4307DCC419505_397* MKKLHFCCCNF; // 0x18
	::System::Action* MBOEDFCNCJF; // 0x20

	::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::Class_0_16E4307DCC419505_397* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_1_E4AF9B1D2ED26CD5_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4AF9B1D2ED26CD5_1_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4AF9B1D2ED26CD5_1_DISPOSE_OFFSET))(this);
	}
};
