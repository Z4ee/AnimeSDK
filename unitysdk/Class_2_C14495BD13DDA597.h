#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_5FA6F7B2482A3E07;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C14495BD13DDA597_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0x185C2410)
#define CLASS_2_C14495BD13DDA597_METHOD_2_7D3F59A6EBE6623B_OFFSET UNITYSDK_OFFSET(0x185A7B90)
#define CLASS_2_C14495BD13DDA597_METHOD_2_EB624220834C5CE8_OFFSET UNITYSDK_OFFSET(0x185C23B0)
#define CLASS_2_C14495BD13DDA597__CTOR_OFFSET UNITYSDK_OFFSET(0x185C25A0)
#define CLASS_2_C14495BD13DDA597__ONBIND_OFFSET UNITYSDK_OFFSET(0x185C2270)
#define CLASS_2_C14495BD13DDA597___ONBUTTONCLICK_B__6_0_OFFSET UNITYSDK_OFFSET(0x185C25D0)

inline static constexpr unsigned int Class_2_C14495BD13DDA597_TypeDefinitionIndex = 69009;

class Class_2_C14495BD13DDA597 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_1; // 0x60
	::Class_2_5FA6F7B2482A3E07* Field_2_2; // 0x68
	::RPG::Client::AnimatorButton* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C14495BD13DDA597__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C14495BD13DDA597__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7D3F59A6EBE6623B(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C14495BD13DDA597_METHOD_2_7D3F59A6EBE6623B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB624220834C5CE8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C14495BD13DDA597_METHOD_2_EB624220834C5CE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_24A73FD2F3BEC0BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C14495BD13DDA597_METHOD_2_24A73FD2F3BEC0BF_OFFSET))(this, a1);
	}

	::System::Void __OnButtonClick_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C14495BD13DDA597___ONBUTTONCLICK_B__6_0_OFFSET))(this);
	}
};
