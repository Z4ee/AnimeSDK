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

#define CLASS_1_91BE70367C0D1365_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC36CA40)
#define CLASS_1_91BE70367C0D1365_METHOD_1_2B78E57E6DA20820_OFFSET UNITYSDK_OFFSET(0xC36C1F0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0xC36A7E0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC36AB50)
#define CLASS_1_91BE70367C0D1365_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0xC36B470)
#define CLASS_1_91BE70367C0D1365_METHOD_1_49765F1E3835BA67_1_OFFSET UNITYSDK_OFFSET(0xC36AC40)
#define CLASS_1_91BE70367C0D1365_METHOD_1_49765F1E3835BA67_OFFSET UNITYSDK_OFFSET(0xC369F20)
#define CLASS_1_91BE70367C0D1365_METHOD_1_8A082AE0230435DC_1_OFFSET UNITYSDK_OFFSET(0xC36BB60)
#define CLASS_1_91BE70367C0D1365_METHOD_1_8A082AE0230435DC_2_OFFSET UNITYSDK_OFFSET(0xC36C460)
#define CLASS_1_91BE70367C0D1365_METHOD_1_8A082AE0230435DC_OFFSET UNITYSDK_OFFSET(0xC36B690)
#define CLASS_1_91BE70367C0D1365_METHOD_1_96489EDEE4ABF390_OFFSET UNITYSDK_OFFSET(0xC36B5E0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_A2951011470E8E1A_OFFSET UNITYSDK_OFFSET(0xC369FA0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_A794AA5B92939598_OFFSET UNITYSDK_OFFSET(0xC36BA40)
#define CLASS_1_91BE70367C0D1365_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xC36C810)
#define CLASS_1_91BE70367C0D1365_METHOD_1_BB5C48EF84B6AD3D_OFFSET UNITYSDK_OFFSET(0xC36BF10)
#define CLASS_1_91BE70367C0D1365_METHOD_1_CC144630CC7E066C_OFFSET UNITYSDK_OFFSET(0xC36AB90)
#define CLASS_1_91BE70367C0D1365_METHOD_1_CC9AB860D93A589B_OFFSET UNITYSDK_OFFSET(0xC36B4F0)
#define CLASS_1_91BE70367C0D1365_METHOD_1_E1AF29958691622C_OFFSET UNITYSDK_OFFSET(0xC36ACB0)
#define CLASS_1_91BE70367C0D1365__CTOR_OFFSET UNITYSDK_OFFSET(0xC36CC10)
#define CLASS_1_91BE70367C0D1365___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0xC36CC90)

inline static constexpr unsigned int Class_1_91BE70367C0D1365_TypeDefinitionIndex = 60949;

class Class_1_91BE70367C0D1365 : public ::System::Object
{
public:
	static ::RPG::GameCore::SpecialVisionConfig** StaticGet_AHPICCBBFFC()
	{
		return (::RPG::GameCore::SpecialVisionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91BE70367C0D1365_TypeDefinitionIndex)->GetStaticField(0xB2C0);
	}
	// static const ::System::String* IFJPLEAMAFI; // 0x0
	// static const ::System::String* MDDLIHGFIKP; // 0x0
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x10
	::System::String* MNDJFCFHPKF; // 0x18
	::System::String* BCGLJEMFDNH; // 0x20
	::Struct_2_0B84ADD7815498A2 NFPPGEKLENM; // 0x28
	::Struct_2_0B84ADD7815498A2 ONODNENPMNH; // 0x38
	::System::String* KMBINKJKEAG; // 0x48
	::RPG::GameCore::GameEntity* OFJOOHGNLFK; // 0x50
	::System::Int32 NNONPFALDGK; // 0x58
	::System::Boolean HKJMCJJLLKN; // 0x5C
	::System::Boolean FMNEEONAMNO; // 0x5D
	::RPG::GameCore::SpecialVisionType GCHAHMOLNDA; // 0x60
	::System::Int32 LBACAJMNOBH; // 0x64
	::System::Int32 CJKGFKMAHGE; // 0x68
	::System::Int32 LLLGCPINNHL; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_49765F1E3835BA67(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_49765F1E3835BA67_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CC144630CC7E066C(::RPG::GameCore::SpecialVisionType a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_CC144630CC7E066C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_49765F1E3835BA67_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_49765F1E3835BA67_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2951011470E8E1A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_A2951011470E8E1A_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffect* Method_1_96489EDEE4ABF390(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_96489EDEE4ABF390_OFFSET))(this, a1);
	}

	::Struct_2_0B84ADD7815498A2 Method_1_E1AF29958691622C()
	{
		return ((::Struct_2_0B84ADD7815498A2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_E1AF29958691622C_OFFSET))(this);
	}

	::System::Void Method_1_BB5C48EF84B6AD3D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_BB5C48EF84B6AD3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::String* Method_1_2B78E57E6DA20820()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_2B78E57E6DA20820_OFFSET))(this);
	}

	::System::String* Method_1_8A082AE0230435DC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_8A082AE0230435DC_OFFSET))(this);
	}

	::System::String* Method_1_8A082AE0230435DC_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_8A082AE0230435DC_1_OFFSET))(this);
	}

	::System::String* Method_1_8A082AE0230435DC_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_8A082AE0230435DC_2_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_A794AA5B92939598(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_A794AA5B92939598_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::SpecialVisionConfig* Method_1_CC9AB860D93A589B()
	{
		return ((::RPG::GameCore::SpecialVisionConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365_METHOD_1_CC9AB860D93A589B_OFFSET))();
	}

	::System::Void __LoadNewSpecialVisionEffect_b__7_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_91BE70367C0D1365___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET))(this, a1, a2);
	}
};
