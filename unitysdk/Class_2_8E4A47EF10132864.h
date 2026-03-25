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

#define CLASS_2_8E4A47EF10132864_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x8923E30)
#define CLASS_2_8E4A47EF10132864_METHOD_2_0B3C24AF37521D8A_OFFSET UNITYSDK_OFFSET(0x8923370)
#define CLASS_2_8E4A47EF10132864_METHOD_2_28290E01E7B36E48_OFFSET UNITYSDK_OFFSET(0x8923EA0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_29CCD26C6A3DEA02_OFFSET UNITYSDK_OFFSET(0x8923F20)
#define CLASS_2_8E4A47EF10132864_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x89234D0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x8923EB0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_4A849FFE3D2EFC3D_OFFSET UNITYSDK_OFFSET(0x8922E60)
#define CLASS_2_8E4A47EF10132864_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x8922E00)
#define CLASS_2_8E4A47EF10132864_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8923F90)
#define CLASS_2_8E4A47EF10132864_METHOD_2_7232ED11EB4FF5A9_OFFSET UNITYSDK_OFFSET(0x89238F0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_9A90752C43418F0C_OFFSET UNITYSDK_OFFSET(0x8922F10)
#define CLASS_2_8E4A47EF10132864_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8923270)
#define CLASS_2_8E4A47EF10132864_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x8923760)
#define CLASS_2_8E4A47EF10132864_METHOD_2_CE4CE294A670DA1B_OFFSET UNITYSDK_OFFSET(0x8923FF0)
#define CLASS_2_8E4A47EF10132864_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8923E90)
#define CLASS_2_8E4A47EF10132864_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x8923220)
#define CLASS_2_8E4A47EF10132864__CCTOR_OFFSET UNITYSDK_OFFSET(0x8923E40)
#define CLASS_2_8E4A47EF10132864__CTOR_OFFSET UNITYSDK_OFFSET(0x8922D60)

inline static constexpr unsigned int Class_2_8E4A47EF10132864_TypeDefinitionIndex = 45902;

class Class_2_8E4A47EF10132864 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8E4A47EF10132864_TypeDefinitionIndex)->GetStaticField(0x13070);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8E4A47EF10132864_TypeDefinitionIndex)->GetStaticField(0x13074);
	}
	::RPG::GameCore::AdventureCharacterController* Field_2_6; // 0x68
	::RPG::GameCore::TransformComponent* Field_2_3; // 0x70
	::Class_2_A0580152EB393340* Field_2_4; // 0x78
	::RPG::GameCore::AdventureCharacterDataComponent* Field_2_7; // 0x80
	::RPG::GameCore::NPCComponent* Field_2_5; // 0x88
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x90
	::System::Int32 Field_2_2; // 0x94
	::UnityEngine::Vector3 Field_2_1; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864__CCTOR_OFFSET))();
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_2_4A849FFE3D2EFC3D(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_4A849FFE3D2EFC3D_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_9A90752C43418F0C()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_9A90752C43418F0C_OFFSET))(this);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_0B3C24AF37521D8A(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_0B3C24AF37521D8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_7232ED11EB4FF5A9(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_7232ED11EB4FF5A9_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_2_28290E01E7B36E48(::System::Boolean& P0)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_28290E01E7B36E48_OFFSET))(this, P0);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_29CCD26C6A3DEA02(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_29CCD26C6A3DEA02_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_CE4CE294A670DA1B(::System::Boolean P0, ::System::Boolean P1, ::RPG::GameCore::AdventureFeatureNormalActiveReason P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_8E4A47EF10132864_METHOD_2_CE4CE294A670DA1B_OFFSET))(this, P0, P1, P2);
	}
};
