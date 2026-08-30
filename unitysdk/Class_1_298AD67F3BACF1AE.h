#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialVisionConfig; }
namespace System { class String; }

#define CLASS_1_298AD67F3BACF1AE_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC46E250)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_2B78E57E6DA20820_OFFSET UNITYSDK_OFFSET(0xC46DA00)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0xC46BFF0)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC46C360)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_411B8F9427DC2247_OFFSET UNITYSDK_OFFSET(0xC46C3A0)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0xC46CC80)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0xC46B740)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_73ECB962C2058A5E_OFFSET UNITYSDK_OFFSET(0xC46C450)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_8A082AE0230435DC_1_OFFSET UNITYSDK_OFFSET(0xC46D370)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_8A082AE0230435DC_2_OFFSET UNITYSDK_OFFSET(0xC46DC70)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_8A082AE0230435DC_OFFSET UNITYSDK_OFFSET(0xC46CEA0)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_96489EDEE4ABF390_OFFSET UNITYSDK_OFFSET(0xC46CDF0)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_A12DD1C1315FC163_OFFSET UNITYSDK_OFFSET(0xC46B7C0)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_A794AA5B92939598_OFFSET UNITYSDK_OFFSET(0xC46D250)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xC46E020)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_BB5C48EF84B6AD3D_OFFSET UNITYSDK_OFFSET(0xC46D720)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_CC9AB860D93A589B_OFFSET UNITYSDK_OFFSET(0xC46CD00)
#define CLASS_1_298AD67F3BACF1AE_METHOD_1_E1AF29958691622C_OFFSET UNITYSDK_OFFSET(0xC46C4C0)
#define CLASS_1_298AD67F3BACF1AE__CTOR_OFFSET UNITYSDK_OFFSET(0xC46E420)
#define CLASS_1_298AD67F3BACF1AE___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0xC46E4A0)

inline static constexpr unsigned int Class_1_298AD67F3BACF1AE_TypeDefinitionIndex = 61046;

class Class_1_298AD67F3BACF1AE : public ::System::Object
{
public:
	static ::RPG::GameCore::SpecialVisionConfig** StaticGet_AHPICCBBFFC()
	{
		return (::RPG::GameCore::SpecialVisionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_298AD67F3BACF1AE_TypeDefinitionIndex)->GetStaticField(0x5E670);
	}
	// static const ::System::String* IFJPLEAMAFI; // 0x0
	// static const ::System::String* MDDLIHGFIKP; // 0x0
	::System::String* BCGLJEMFDNH; // 0x10
	::System::String* MNDJFCFHPKF; // 0x18
	::System::String* KMBINKJKEAG; // 0x20
	::Struct_2_0B84ADD7815498A2 NFPPGEKLENM; // 0x28
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x38
	::RPG::GameCore::GameEntity* OFJOOHGNLFK; // 0x40
	::Struct_2_0B84ADD7815498A2 ONODNENPMNH; // 0x48
	::System::Boolean FMNEEONAMNO; // 0x58
	::System::Boolean HKJMCJJLLKN; // 0x59
	::System::Int32 LLLGCPINNHL; // 0x5C
	::RPG::GameCore::SpecialVisionType GCHAHMOLNDA; // 0x60
	::System::Int32 CJKGFKMAHGE; // 0x64
	::System::Int32 LBACAJMNOBH; // 0x68
	::System::Int32 NNONPFALDGK; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_49765F1E3835BA67(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_49765F1E3835BA67_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_411B8F9427DC2247(::RPG::GameCore::SpecialVisionType a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_411B8F9427DC2247_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_73ECB962C2058A5E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_73ECB962C2058A5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A12DD1C1315FC163(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_A12DD1C1315FC163_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffect* Method_1_96489EDEE4ABF390(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_96489EDEE4ABF390_OFFSET))(this, a1);
	}

	::Struct_2_0B84ADD7815498A2 Method_1_E1AF29958691622C()
	{
		return ((::Struct_2_0B84ADD7815498A2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_E1AF29958691622C_OFFSET))(this);
	}

	::System::Void Method_1_BB5C48EF84B6AD3D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_BB5C48EF84B6AD3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::String* Method_1_2B78E57E6DA20820()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_2B78E57E6DA20820_OFFSET))(this);
	}

	::System::String* Method_1_8A082AE0230435DC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_8A082AE0230435DC_OFFSET))(this);
	}

	::System::String* Method_1_8A082AE0230435DC_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_8A082AE0230435DC_1_OFFSET))(this);
	}

	::System::String* Method_1_8A082AE0230435DC_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_8A082AE0230435DC_2_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_A794AA5B92939598(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_A794AA5B92939598_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::SpecialVisionConfig* Method_1_CC9AB860D93A589B()
	{
		return ((::RPG::GameCore::SpecialVisionConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE_METHOD_1_CC9AB860D93A589B_OFFSET))();
	}

	::System::Void __LoadNewSpecialVisionEffect_b__7_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_298AD67F3BACF1AE___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET))(this, a1, a2);
	}
};
