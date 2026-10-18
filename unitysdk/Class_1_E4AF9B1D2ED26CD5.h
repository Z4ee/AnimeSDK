#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define CLASS_1_E4AF9B1D2ED26CD5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1589B2F0)
#define CLASS_1_E4AF9B1D2ED26CD5_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x1589B0B0)
#define CLASS_1_E4AF9B1D2ED26CD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1589AFE0)

inline static constexpr unsigned int Class_1_E4AF9B1D2ED26CD5_TypeDefinitionIndex = 49856;

class Class_1_E4AF9B1D2ED26CD5 : public ::System::Object
{
public:
	::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x10
	::System::Action* MBOEDFCNCJF; // 0x18
	::Class_0_16E4307DCC419505_397* MKKLHFCCCNF; // 0x20

	::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::Class_0_16E4307DCC419505_397* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_1_E4AF9B1D2ED26CD5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4AF9B1D2ED26CD5_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4AF9B1D2ED26CD5_DISPOSE_OFFSET))(this);
	}
};
