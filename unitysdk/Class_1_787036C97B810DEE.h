#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CLASS_1_787036C97B810DEE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB786800)
#define CLASS_1_787036C97B810DEE_METHOD_1_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xB7858A0)
#define CLASS_1_787036C97B810DEE_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB785F10)
#define CLASS_1_787036C97B810DEE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB7865E0)
#define CLASS_1_787036C97B810DEE_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0xB785820)
#define CLASS_1_787036C97B810DEE_METHOD_1_EAC2737A96E071C9_1_OFFSET UNITYSDK_OFFSET(0xB786660)
#define CLASS_1_787036C97B810DEE_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xB785680)
#define CLASS_1_787036C97B810DEE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB786810)
#define CLASS_1_787036C97B810DEE__CTOR_OFFSET UNITYSDK_OFFSET(0xB785610)

inline static constexpr unsigned int Class_1_787036C97B810DEE_TypeDefinitionIndex = 72961;

class Class_1_787036C97B810DEE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::Client::ChimeraBattlePuzzleArea* Field_1_1; // 0x18
	::RPG::Client::ChimeraBattlePuzzleArea* Field_1_2; // 0x20
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_3; // 0x28
	::System::Boolean _IsFinished_k__BackingField; // 0x30
	::System::Single Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x38

	::System::Void _ctor(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_METHOD_1_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_METHOD_1_EAC2737A96E071C9_1_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_METHOD_1_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_787036C97B810DEE_SET_ISFINISHED_OFFSET))(this, a1);
	}
};
