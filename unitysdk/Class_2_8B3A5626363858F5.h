#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_A16A135FC5A0DDB9_3;
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleLoadShowTex; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8B3A5626363858F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128AD960)
#define CLASS_2_8B3A5626363858F5_METHOD_2_00004B41EFDB322F_OFFSET UNITYSDK_OFFSET(0x128ADCF0)
#define CLASS_2_8B3A5626363858F5_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x128ADD50)
#define CLASS_2_8B3A5626363858F5_METHOD_2_FC21FC07A06ACCCD_OFFSET UNITYSDK_OFFSET(0x128ADF40)
#define CLASS_2_8B3A5626363858F5_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x128AE0A0)
#define CLASS_2_8B3A5626363858F5_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x128AE050)
#define CLASS_2_8B3A5626363858F5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128ADA90)
#define CLASS_2_8B3A5626363858F5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x128AE000)
#define CLASS_2_8B3A5626363858F5_TICK_OFFSET UNITYSDK_OFFSET(0x128ADA30)
#define CLASS_2_8B3A5626363858F5__CTOR_OFFSET UNITYSDK_OFFSET(0x128AD940)
#define CLASS_2_8B3A5626363858F5___SETTEXTURE_B__6_0_OFFSET UNITYSDK_OFFSET(0x128AE0F0)
#define CLASS_2_8B3A5626363858F5___SETTEXTURE_B__6_1_OFFSET UNITYSDK_OFFSET(0x128AE1E0)

inline static constexpr unsigned int Class_2_8B3A5626363858F5_TypeDefinitionIndex = 53899;

class Class_2_8B3A5626363858F5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::RogueGambleBaseFunc* Field_2_6; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::RogueGambleLoadShowTex* Field_2_0; // 0x28
	::RPG::GameCore::PropComponent* Field_2_2; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_3; // 0x40

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

	::System::Void Method_2_00004B41EFDB322F(::Class_1_A16A135FC5A0DDB9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_METHOD_2_00004B41EFDB322F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC21FC07A06ACCCD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_METHOD_2_FC21FC07A06ACCCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3A5626363858F5_METHOD_2_18982EFD3B740683_OFFSET))(this);
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
