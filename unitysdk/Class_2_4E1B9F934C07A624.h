#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_1_70CCABA9DB985F52;
class Class_3_FF2A8DD2F301029E;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define CLASS_2_4E1B9F934C07A624_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB7E7320)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0xB7E6180)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_262B1652A7FB12F9_OFFSET UNITYSDK_OFFSET(0xB7E6720)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5127424BDC5529D7_OFFSET UNITYSDK_OFFSET(0xB7E7040)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xBAA7FA0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBAA7F40)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xB7E6F30)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_B45DC2E8B8DF29CA_OFFSET UNITYSDK_OFFSET(0xB7E6650)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xB7E63E0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7E7000)
#define CLASS_2_4E1B9F934C07A624_ONANIMATORCHANGE_OFFSET UNITYSDK_OFFSET(0xB7E71F0)
#define CLASS_2_4E1B9F934C07A624_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB7E70A0)
#define CLASS_2_4E1B9F934C07A624_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB7E7330)
#define CLASS_2_4E1B9F934C07A624__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E7350)
#define CLASS_2_4E1B9F934C07A624__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E7340)

inline static constexpr unsigned int Class_2_4E1B9F934C07A624_TypeDefinitionIndex = 49728;

class Class_2_4E1B9F934C07A624 : public ::Class_1_321489CFFF7B18E7
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1B9F934C07A624_TypeDefinitionIndex)->GetStaticField(0x11950);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1B9F934C07A624_TypeDefinitionIndex)->GetStaticField(0x11954);
	}
	::System::Boolean Field_2_8; // 0x18
	::System::Boolean Field_2_6; // 0x19
	::System::Boolean Field_2_7; // 0x1A
	::System::Boolean Field_2_5; // 0x1B
	::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624__CCTOR_OFFSET))();
	}

	::System::Void Method_2_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_B45DC2E8B8DF29CA(::Class_1_70CCABA9DB985F52* a1, ::Class_3_FF2A8DD2F301029E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*, ::Class_3_FF2A8DD2F301029E*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_B45DC2E8B8DF29CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_262B1652A7FB12F9(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_262B1652A7FB12F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5127424BDC5529D7(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_5127424BDC5529D7_OFFSET))(this, a1, a2);
	}

	::System::Void OnFlagStateChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBehaviorFlag a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBehaviorFlag, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_ONFLAGSTATECHANGE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnAnimatorChange(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_ONANIMATORCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Int32 get_HitAdditiveLayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
	}

	::System::Void set_HitAdditiveLayerIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_SET_HITADDITIVELAYERINDEX_OFFSET))(this, value);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
