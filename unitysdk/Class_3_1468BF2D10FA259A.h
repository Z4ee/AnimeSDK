#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_ED5B635C4D775055;
class Class_2_F400FB9D2D9DA921;
class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Main_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_1468BF2D10FA259A_METHOD_3_020D90668C12A59C_OFFSET UNITYSDK_OFFSET(0x154F6F20)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_0F18B26B3C898DF3_OFFSET UNITYSDK_OFFSET(0x154F82A0)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_29622B5284E27113_OFFSET UNITYSDK_OFFSET(0x154F88E0)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_2DD504AF11C9EA74_OFFSET UNITYSDK_OFFSET(0x154F7840)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_8194683371E228D0_OFFSET UNITYSDK_OFFSET(0x154F7B60)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_9D63393EFECA76F6_OFFSET UNITYSDK_OFFSET(0x154F84A0)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_B3A9EC24C2E8826B_OFFSET UNITYSDK_OFFSET(0x154F7400)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_C3691C727AFEA04D_OFFSET UNITYSDK_OFFSET(0x154F8720)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154F8890)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0x154F7A40)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0x154F7970)
#define CLASS_3_1468BF2D10FA259A_METHOD_3_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x154F7AB0)
#define CLASS_3_1468BF2D10FA259A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154F6870)
#define CLASS_3_1468BF2D10FA259A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154F7C50)
#define CLASS_3_1468BF2D10FA259A_TICK_OFFSET UNITYSDK_OFFSET(0x154F7ED0)
#define CLASS_3_1468BF2D10FA259A__CTOR_OFFSET UNITYSDK_OFFSET(0x154F6220)

inline static constexpr unsigned int Class_3_1468BF2D10FA259A_TypeDefinitionIndex = 52211;

class Class_3_1468BF2D10FA259A : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToTarget*>
{
public:
	// static const ::System::Single EDBFEHKLFOF; // 0x0
	::RPG::GameCore::GameEntity* IHAMICMPFLL; // 0x28
	::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x30
	::Class_2_F400FB9D2D9DA921* NLOMMHDHDMK; // 0x38
	::RPG::GameCore::TransformComponent* AFIBNIPMICJ; // 0x40
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x48
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* HDIAPOOCACN; // 0x50
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x58
	::Class_2_ED5B635C4D775055* CNPNMBNLKFJ; // 0x60
	::System::Single MFKLFPLLLFE; // 0x68
	::UnityEngine::Vector3 LMJOGIHJFIO; // 0x6C
	::System::Single PGMIOKKLHIE; // 0x78
	::System::Boolean GAJCPBIEBDG; // 0x7C
	::System::Boolean OOLNPGAHODC; // 0x7D
	::System::Boolean NKHIBFCIFKI; // 0x7E
	::System::Single HFHNFNHNGHB; // 0x80
	::System::Single LOFLFDNPNIE; // 0x84
	::System::Single EHCMLAFEDMP; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_B3A9EC24C2E8826B(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_B3A9EC24C2E8826B_OFFSET))(this, a1);
	}

	::System::Void Method_3_020D90668C12A59C(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_020D90668C12A59C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_2DD504AF11C9EA74(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_2DD504AF11C9EA74_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8194683371E228D0(::RPG::GameCore::TransformComponent* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_8194683371E228D0_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C3691C727AFEA04D(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_C3691C727AFEA04D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9D63393EFECA76F6(::RPG::GameCore::TransformComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_9D63393EFECA76F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0F18B26B3C898DF3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_0F18B26B3C898DF3_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CBB16AE705BCA424(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_CBB16AE705BCA424_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}

	::System::Void Method_3_29622B5284E27113(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_1468BF2D10FA259A_METHOD_3_29622B5284E27113_OFFSET))(this, a1);
	}
};
