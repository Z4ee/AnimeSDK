#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace RPG::Client { class UIDragScope; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_1FCCD956FC8DE2AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF63870)
#define CLASS_1_1FCCD956FC8DE2AA_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xCF63630)
#define CLASS_1_1FCCD956FC8DE2AA__CTOR_OFFSET UNITYSDK_OFFSET(0xCF63590)

inline static constexpr unsigned int Class_1_1FCCD956FC8DE2AA_TypeDefinitionIndex = 49848;

class Class_1_1FCCD956FC8DE2AA : public ::System::Object
{
public:
	::System::Action* MBOEDFCNCJF; // 0x10
	::System::Action* EMHNPDNGJBP; // 0x18
	::Class_0_16E4307DCC419505_397* MKKLHFCCCNF; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_397* a1, ::RPG::Client::UIDragScope* a2, ::System::Func_3<::RPG::Client::UIDragScope*, ::System::Action*, ::System::Action*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*, ::RPG::Client::UIDragScope*, ::System::Func_3<::RPG::Client::UIDragScope*, ::System::Action*, ::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FCCD956FC8DE2AA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCCD956FC8DE2AA_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCCD956FC8DE2AA_DISPOSE_OFFSET))(this);
	}
};
