#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_401;
class Class_1_1C30CE192ABE4C54;
class Class_2_1DB6C02CA182EEBA;
class Class_2_7AA0468CE6C1F3D7_1;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_2_BEF04BB3FD6CC9EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13911690)
#define CLASS_2_BEF04BB3FD6CC9EE_GET_CONFIGREF_OFFSET UNITYSDK_OFFSET(0x13911A30)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13910690)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x13911990)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_682B457C35BCA4A1_OFFSET UNITYSDK_OFFSET(0x13910240)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_6AB0047A1E525732_OFFSET UNITYSDK_OFFSET(0x139103C0)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x13911530)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x13911020)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_A5413BD51EE823B7_OFFSET UNITYSDK_OFFSET(0x13911180)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_D833886B9AC67E10_OFFSET UNITYSDK_OFFSET(0x13911720)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13911A50)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x13910700)
#define CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x13910B20)
#define CLASS_2_BEF04BB3FD6CC9EE_SET_CONFIGREF_OFFSET UNITYSDK_OFFSET(0x13911A40)
#define CLASS_2_BEF04BB3FD6CC9EE__CTOR_OFFSET UNITYSDK_OFFSET(0x13911A60)

inline static constexpr unsigned int Class_2_BEF04BB3FD6CC9EE_TypeDefinitionIndex = 53904;

class Class_2_BEF04BB3FD6CC9EE : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::StageBattleEventRow* _ConfigRef_k__BackingField; // 0x18
	::RPG::GameCore::AbilityComponent* Field_2_2; // 0x20
	::Class_2_7AA0468CE6C1F3D7_1* Field_2_3; // 0x28
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_4; // 0x30
	::Class_2_1DB6C02CA182EEBA* Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_682B457C35BCA4A1(::RPG::GameCore::StageBattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_682B457C35BCA4A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_2_D833886B9AC67E10(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_D833886B9AC67E10_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_6AB0047A1E525732(::Class_1_1C30CE192ABE4C54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_6AB0047A1E525732_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5413BD51EE823B7(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_A5413BD51EE823B7_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageBattleEventRow* get_ConfigRef()
	{
		return ((::RPG::GameCore::StageBattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_GET_CONFIGREF_OFFSET))(this);
	}

	::System::Void set_ConfigRef(::RPG::GameCore::StageBattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_SET_CONFIGREF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEF04BB3FD6CC9EE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
