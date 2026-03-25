#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TargetingMode.h"

class Class_1_36C40D023D7EF65D;
class Class_1_8444A7CEAF30C901;
class Class_2_3F4D673D3F90D12C;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_F67FF7EB526BF85C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CE7F70)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_0798AB0C5AC86AC4_OFFSET UNITYSDK_OFFSET(0x8CE8900)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_10AD0834AEF29F17_OFFSET UNITYSDK_OFFSET(0x8CE82D0)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8CE8AE0)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8CE8920)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x8CE8B90)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x8CE8060)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_5F2139267A139D9A_OFFSET UNITYSDK_OFFSET(0x8CE7EB0)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x8CE8A20)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0x8CE8AF0)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x8CE8D20)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8CE8170)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CE8130)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_F166DD22F369762B_OFFSET UNITYSDK_OFFSET(0x8CE8980)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x8CE89D0)
#define CLASS_2_F67FF7EB526BF85C_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x8CE7FC0)
#define CLASS_2_F67FF7EB526BF85C_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x8CE80B0)
#define CLASS_2_F67FF7EB526BF85C_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x8CE80F0)
#define CLASS_2_F67FF7EB526BF85C_TICK_OFFSET UNITYSDK_OFFSET(0x8CE81B0)
#define CLASS_2_F67FF7EB526BF85C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CE7E70)
#define CLASS_2_F67FF7EB526BF85C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8CE8DA0)

inline static constexpr unsigned int Class_2_F67FF7EB526BF85C_TypeDefinitionIndex = 46292;

class Class_2_F67FF7EB526BF85C : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_2_9D4DD2F4235F8658* Field_2_4; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_1; // 0x20
	::Class_2_3F4D673D3F90D12C* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_10; // 0x30
	::RPG::GameCore::NPCComponent* Field_2_3; // 0x38
	::Class_1_36C40D023D7EF65D* Field_2_6; // 0x40
	::Class_1_8444A7CEAF30C901* Field_2_13; // 0x48
	::Class_1_36C40D023D7EF65D* Field_2_5; // 0x50
	::RPG::GameCore::TargetingMode Field_2_7; // 0x58
	::System::Boolean Field_2_8; // 0x5C
	::System::Boolean Field_2_0; // 0x5D
	::System::Boolean Field_2_9; // 0x5E
	::System::Single Field_2_11; // 0x60
	::System::Single Field_2_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5F2139267A139D9A(::RPG::GameCore::TransformComponent* a1, ::Class_2_3F4D673D3F90D12C* a2, ::RPG::GameCore::NPCComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::Class_2_3F4D673D3F90D12C*, ::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_5F2139267A139D9A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F166DD22F369762B(::RPG::GameCore::TargetingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetingMode))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_F166DD22F369762B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_FD647A48096EB173_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_0798AB0C5AC86AC4()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_0798AB0C5AC86AC4_OFFSET))(this);
	}

	::System::Void Method_2_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::Class_1_36C40D023D7EF65D* Method_2_24748FC20F375725()
	{
		return ((::Class_1_36C40D023D7EF65D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_2_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Void Method_2_10AD0834AEF29F17(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_10AD0834AEF29F17_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A99EF338505A0EA9(::Class_1_36C40D023D7EF65D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36C40D023D7EF65D*))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F67FF7EB526BF85C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
