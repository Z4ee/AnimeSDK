#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_57578741329DF018.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_1_70CCABA9DB985F52;
class Class_3_05677D33458EB438;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define CLASS_2_4E1B9F934C07A624_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x180A46E0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5127424BDC5529D7_OFFSET UNITYSDK_OFFSET(0x180A4460)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x180A3650)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x180A42F0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_B45DC2E8B8DF29CA_OFFSET UNITYSDK_OFFSET(0x180A3A80)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_BAD16C0582DF65F4_OFFSET UNITYSDK_OFFSET(0x180A3B50)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180A4420)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x180A3830)
#define CLASS_2_4E1B9F934C07A624_ONANIMATORCHANGE_OFFSET UNITYSDK_OFFSET(0x180A4610)
#define CLASS_2_4E1B9F934C07A624_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x180A44C0)
#define CLASS_2_4E1B9F934C07A624_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x180A46F0)
#define CLASS_2_4E1B9F934C07A624__CCTOR_OFFSET UNITYSDK_OFFSET(0x180A4710)
#define CLASS_2_4E1B9F934C07A624__CTOR_OFFSET UNITYSDK_OFFSET(0x180A4700)

inline static constexpr unsigned int Class_2_4E1B9F934C07A624_TypeDefinitionIndex = 54161;

class Class_2_4E1B9F934C07A624 : public ::Class_1_57578741329DF018
{
public:
	static ::System::Int32* StaticGet_GFFJPEAAMDL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1B9F934C07A624_TypeDefinitionIndex)->GetStaticField(0x12830);
	}
	static ::System::Int32* StaticGet_COJOCBCIPAN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1B9F934C07A624_TypeDefinitionIndex)->GetStaticField(0x12834);
	}
	::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint HCMKIPKCKOL; // 0x20
	::System::Int32 DCDBAJGEEHO; // 0x28
	::System::Boolean GDOMAIIIKDG; // 0x2C
	::System::Boolean EDPCLJALHGL; // 0x2D
	::System::Boolean DGDJGLFNJID; // 0x2E
	::System::Boolean PDEGILGLFKI; // 0x2F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_B45DC2E8B8DF29CA(::Class_1_70CCABA9DB985F52* a1, ::Class_3_05677D33458EB438* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*, ::Class_3_05677D33458EB438*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_B45DC2E8B8DF29CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BAD16C0582DF65F4(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_BAD16C0582DF65F4_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Int32 get_HitAdditiveLayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
	}

	::System::Void set_HitAdditiveLayerIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_SET_HITADDITIVELAYERINDEX_OFFSET))(this, a1);
	}
};
