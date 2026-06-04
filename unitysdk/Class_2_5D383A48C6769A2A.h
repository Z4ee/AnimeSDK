#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_5FA6F7B2482A3E07;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_5D383A48C6769A2A_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0xA69DC30)
#define CLASS_2_5D383A48C6769A2A_METHOD_2_994AEE4DBD645811_OFFSET UNITYSDK_OFFSET(0xA69DBD0)
#define CLASS_2_5D383A48C6769A2A_METHOD_2_C8094DCEC61C8592_OFFSET UNITYSDK_OFFSET(0xA69DB60)
#define CLASS_2_5D383A48C6769A2A__CTOR_OFFSET UNITYSDK_OFFSET(0xA69DDC0)
#define CLASS_2_5D383A48C6769A2A__ONBIND_OFFSET UNITYSDK_OFFSET(0xA69DA20)
#define CLASS_2_5D383A48C6769A2A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA69DE30)
#define CLASS_2_5D383A48C6769A2A___ONBUTTONCLICK_B__6_0_OFFSET UNITYSDK_OFFSET(0xA69DDF0)

inline static constexpr unsigned int Class_2_5D383A48C6769A2A_TypeDefinitionIndex = 67528;

class Class_2_5D383A48C6769A2A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_1; // 0x60
	::RPG::Client::AnimatorButton* Field_2_2; // 0x68
	::Class_2_5FA6F7B2482A3E07* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C8094DCEC61C8592(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A_METHOD_2_C8094DCEC61C8592_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_994AEE4DBD645811(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A_METHOD_2_994AEE4DBD645811_OFFSET))(this, a1);
	}

	::System::Void Method_2_24A73FD2F3BEC0BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A_METHOD_2_24A73FD2F3BEC0BF_OFFSET))(this, a1);
	}

	::System::Void __OnButtonClick_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A___ONBUTTONCLICK_B__6_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D383A48C6769A2A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
