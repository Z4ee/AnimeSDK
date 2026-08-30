#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_5FA6F7B2482A3E07;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C14495BD13DDA597_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0xB7E9BD0)
#define CLASS_2_C14495BD13DDA597_METHOD_2_7D3F59A6EBE6623B_OFFSET UNITYSDK_OFFSET(0xB7CEFB0)
#define CLASS_2_C14495BD13DDA597_METHOD_2_EB624220834C5CE8_OFFSET UNITYSDK_OFFSET(0xB7E9B70)
#define CLASS_2_C14495BD13DDA597__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9D60)
#define CLASS_2_C14495BD13DDA597__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7E9A30)
#define CLASS_2_C14495BD13DDA597___ONBUTTONCLICK_B__6_0_OFFSET UNITYSDK_OFFSET(0xB7E9D90)

inline static constexpr unsigned int Class_2_C14495BD13DDA597_TypeDefinitionIndex = 72209;

class Class_2_C14495BD13DDA597 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0x60
	::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x68
	::Class_2_5FA6F7B2482A3E07* KCKANELOJKG; // 0x70

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
