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

#define CLASS_2_FB30656B7291DCEF_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x136960D0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_05876B4B6F216569_OFFSET UNITYSDK_OFFSET(0x136956D0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_1269AF86FE25AECE_OFFSET UNITYSDK_OFFSET(0x13696270)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x13696150)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13696210)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_57B295B3B9273ACF_OFFSET UNITYSDK_OFFSET(0x13696140)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x13696130)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_83693FD94A4D8C98_OFFSET UNITYSDK_OFFSET(0x13695BB0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_9A90752C43418F0C_OFFSET UNITYSDK_OFFSET(0x136952D0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13695630)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_BBE3E1E8BB1B6701_OFFSET UNITYSDK_OFFSET(0x136961B0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x13695A20)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x136951D0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_E88DC1D3D084A0F1_OFFSET UNITYSDK_OFFSET(0x13695220)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x136955E0)
#define CLASS_2_FB30656B7291DCEF_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x136957D0)
#define CLASS_2_FB30656B7291DCEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x136960E0)
#define CLASS_2_FB30656B7291DCEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13695130)

inline static constexpr unsigned int Class_2_FB30656B7291DCEF_TypeDefinitionIndex = 53260;

class Class_2_FB30656B7291DCEF : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB30656B7291DCEF_TypeDefinitionIndex)->GetStaticField(0x9D50);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB30656B7291DCEF_TypeDefinitionIndex)->GetStaticField(0x9D54);
	}
	::RPG::GameCore::TransformComponent* Field_2_2; // 0x68
	::Class_2_A0580152EB393340* Field_2_3; // 0x70
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x78
	::RPG::GameCore::NPCComponent* Field_2_5; // 0x80
	::RPG::GameCore::AdventureCharacterDataComponent* Field_2_6; // 0x88
	::System::Int32 Field_2_7; // 0x90
	::UnityEngine::Vector3 Field_2_8; // 0x94
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_2_E88DC1D3D084A0F1(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_E88DC1D3D084A0F1_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_9A90752C43418F0C()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_9A90752C43418F0C_OFFSET))(this);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_05876B4B6F216569(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_05876B4B6F216569_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_83693FD94A4D8C98(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_83693FD94A4D8C98_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_2_57B295B3B9273ACF(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_57B295B3B9273ACF_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_BBE3E1E8BB1B6701(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_BBE3E1E8BB1B6701_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_1269AF86FE25AECE(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_FB30656B7291DCEF_METHOD_2_1269AF86FE25AECE_OFFSET))(this, a1, a2, a3);
	}
};
