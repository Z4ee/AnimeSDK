#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleLoadShowTex; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8B3A5626363858F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FADBD0)
#define CLASS_2_8B3A5626363858F5_METHOD_2_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0x17FAE0D0)
#define CLASS_2_8B3A5626363858F5_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x17FAE130)
#define CLASS_2_8B3A5626363858F5_METHOD_2_FC21FC07A06ACCCD_OFFSET UNITYSDK_OFFSET(0x17FAE390)
#define CLASS_2_8B3A5626363858F5_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x17FAE4F0)
#define CLASS_2_8B3A5626363858F5_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x17FAE4A0)
#define CLASS_2_8B3A5626363858F5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17FADD80)
#define CLASS_2_8B3A5626363858F5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17FAE450)
#define CLASS_2_8B3A5626363858F5_TICK_OFFSET UNITYSDK_OFFSET(0x17FADD20)
#define CLASS_2_8B3A5626363858F5__CTOR_OFFSET UNITYSDK_OFFSET(0x17FADBB0)
#define CLASS_2_8B3A5626363858F5___SETTEXTURE_B__6_0_OFFSET UNITYSDK_OFFSET(0x17FAE540)
#define CLASS_2_8B3A5626363858F5___SETTEXTURE_B__6_1_OFFSET UNITYSDK_OFFSET(0x17FAE650)

inline static constexpr unsigned int Class_2_8B3A5626363858F5_TypeDefinitionIndex = 58615;

class Class_2_8B3A5626363858F5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::RogueGambleBaseFunc* NFMNKFPMDDB; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::RogueGambleLoadShowTex* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::PropComponent* BCCLENOIOBD; // 0x30
	::System::UInt32 FBJCMAAHKIP; // 0x38
	::System::Boolean MJGDFAHFDDF; // 0x3C
	::System::UInt32 LDKFBCDPHJD; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleLoadShowTex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleLoadShowTex*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_34D5F4DBE622AF88(::Class_1_E577B5580A99D425_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_4*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_METHOD_2_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC21FC07A06ACCCD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_METHOD_2_FC21FC07A06ACCCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void __SetTexture_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5___SETTEXTURE_B__6_0_OFFSET))(this);
	}

	::System::Void __SetTexture_b__6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5___SETTEXTURE_B__6_1_OFFSET))(this);
	}
};
