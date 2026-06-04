#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_62FE704B7FCA5D80;
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System { class String; }

#define CLASS_2_444389D33B1116F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C3F750)
#define CLASS_2_444389D33B1116F1_GET_CURRENTPHASENAME_OFFSET UNITYSDK_OFFSET(0x13C3FC90)
#define CLASS_2_444389D33B1116F1_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x13C3FA80)
#define CLASS_2_444389D33B1116F1_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x13C3F7B0)
#define CLASS_2_444389D33B1116F1_METHOD_2_8ECF38D969131217_OFFSET UNITYSDK_OFFSET(0x13C3FA20)
#define CLASS_2_444389D33B1116F1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x13C3F830)
#define CLASS_2_444389D33B1116F1_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x13C3FBC0)
#define CLASS_2_444389D33B1116F1_METHOD_2_AC100083DD4BF3CC_OFFSET UNITYSDK_OFFSET(0x13C3FC40)
#define CLASS_2_444389D33B1116F1_METHOD_2_BAB60791A11CFB3D_OFFSET UNITYSDK_OFFSET(0x13C3FB10)
#define CLASS_2_444389D33B1116F1_SET_CURRENTPHASENAME_OFFSET UNITYSDK_OFFSET(0x13C3FCA0)
#define CLASS_2_444389D33B1116F1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3F720)

inline static constexpr unsigned int Class_2_444389D33B1116F1_TypeDefinitionIndex = 53192;

class Class_2_444389D33B1116F1 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_62FE704B7FCA5D80* Field_2_0; // 0x18
	::System::String* _CurrentPhaseName_k__BackingField; // 0x20
	::RPG::GameCore::CharacterPhaseAnimConfig* Field_2_2; // 0x28
	::RPG::GameCore::CharacterPhaseAnimConfig* Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_8ECF38D969131217(::System::String* a1, ::RPG::GameCore::CharacterPhaseAnimConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::CharacterPhaseAnimConfig*))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_8ECF38D969131217_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::RPG::GameCore::ModifierBehaviorVisual* Method_2_BAB60791A11CFB3D(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_BAB60791A11CFB3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::String* get_CurrentPhaseName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_GET_CURRENTPHASENAME_OFFSET))(this);
	}

	::System::Void set_CurrentPhaseName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_SET_CURRENTPHASENAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterPhaseAnimConfig* Method_2_AC100083DD4BF3CC()
	{
		return ((::RPG::GameCore::CharacterPhaseAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_444389D33B1116F1_METHOD_2_AC100083DD4BF3CC_OFFSET))(this);
	}
};
