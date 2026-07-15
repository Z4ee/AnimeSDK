#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_8E4A47EF10132864_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x171E3FC0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_0B3C24AF37521D8A_OFFSET UNITYSDK_OFFSET(0x171E3530)
#define CLASS_2_8E4A47EF10132864_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x171E3430)
#define CLASS_2_8E4A47EF10132864_METHOD_2_83693FD94A4D8C98_OFFSET UNITYSDK_OFFSET(0x171E3AA0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_9A90752C43418F0C_OFFSET UNITYSDK_OFFSET(0x171E30D0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x171E38E0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x171E3690)
#define CLASS_2_8E4A47EF10132864_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x171E2FC0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_E88DC1D3D084A0F1_OFFSET UNITYSDK_OFFSET(0x171E3020)
#define CLASS_2_8E4A47EF10132864_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x171E33E0)
#define CLASS_2_8E4A47EF10132864__CCTOR_OFFSET UNITYSDK_OFFSET(0x171E3FD0)
#define CLASS_2_8E4A47EF10132864__CTOR_OFFSET UNITYSDK_OFFSET(0x171E2F20)

inline static constexpr unsigned int Class_2_8E4A47EF10132864_TypeDefinitionIndex = 54475;

class Class_2_8E4A47EF10132864 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8E4A47EF10132864_TypeDefinitionIndex)->GetStaticField(0x8740);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8E4A47EF10132864_TypeDefinitionIndex)->GetStaticField(0x8744);
	}
	::RPG::GameCore::NPCComponent* Field_2_2; // 0x68
	::RPG::GameCore::TransformComponent* Field_2_3; // 0x70
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x78
	::RPG::GameCore::AdventureCharacterDataComponent* Field_2_5; // 0x80
	::Class_2_A0580152EB393340* Field_2_6; // 0x88
	::System::Int32 Field_2_7; // 0x90
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x94
	::UnityEngine::Vector3 Field_2_9; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_2_E88DC1D3D084A0F1(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_E88DC1D3D084A0F1_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_9A90752C43418F0C()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_9A90752C43418F0C_OFFSET))(this);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_0B3C24AF37521D8A(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_0B3C24AF37521D8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_83693FD94A4D8C98(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_83693FD94A4D8C98_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_GET_FLAG_OFFSET))(this);
	}
};
