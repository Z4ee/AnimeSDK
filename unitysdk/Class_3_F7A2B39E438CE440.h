#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_A0580152EB393340;
class Class_2_F400FB9D2D9DA921;
class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Main_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_F7A2B39E438CE440_METHOD_3_0F18B26B3C898DF3_OFFSET UNITYSDK_OFFSET(0x1525B710)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_1B8543204811757D_OFFSET UNITYSDK_OFFSET(0x1525BB60)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_29622B5284E27113_OFFSET UNITYSDK_OFFSET(0x1525BCF0)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_8194683371E228D0_OFFSET UNITYSDK_OFFSET(0x1525B010)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_8BD995B21BEB0FEB_OFFSET UNITYSDK_OFFSET(0x1525B910)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_B3A9EC24C2E8826B_OFFSET UNITYSDK_OFFSET(0x1525ABE0)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1525BCA0)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0x1525AFA0)
#define CLASS_3_F7A2B39E438CE440_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0x1525AED0)
#define CLASS_3_F7A2B39E438CE440_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1525A5A0)
#define CLASS_3_F7A2B39E438CE440_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1525B100)
#define CLASS_3_F7A2B39E438CE440_TICK_OFFSET UNITYSDK_OFFSET(0x1525B370)
#define CLASS_3_F7A2B39E438CE440__CTOR_OFFSET UNITYSDK_OFFSET(0x15259F70)

inline static constexpr unsigned int Class_3_F7A2B39E438CE440_TypeDefinitionIndex = 52497;

class Class_3_F7A2B39E438CE440 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToTarget*>
{
public:
	::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x28
	::RPG::GameCore::TransformComponent* AFIBNIPMICJ; // 0x30
	::Class_2_A0580152EB393340* CNPNMBNLKFJ; // 0x38
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* HDIAPOOCACN; // 0x40
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x48
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x50
	::Class_2_F400FB9D2D9DA921* NLOMMHDHDMK; // 0x58
	::System::Boolean OOLNPGAHODC; // 0x60
	::System::Boolean NKHIBFCIFKI; // 0x61
	::System::Single HFHNFNHNGHB; // 0x64
	::System::Single MFKLFPLLLFE; // 0x68
	::System::Single LOFLFDNPNIE; // 0x6C
	::System::Single PGMIOKKLHIE; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_B3A9EC24C2E8826B(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_B3A9EC24C2E8826B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8194683371E228D0(::RPG::GameCore::TransformComponent* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_8194683371E228D0_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1B8543204811757D(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_1B8543204811757D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8BD995B21BEB0FEB(::RPG::GameCore::TransformComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_8BD995B21BEB0FEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0F18B26B3C898DF3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_0F18B26B3C898DF3_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CBB16AE705BCA424(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_CBB16AE705BCA424_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}

	::System::Void Method_3_29622B5284E27113(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_F7A2B39E438CE440_METHOD_3_29622B5284E27113_OFFSET))(this, a1);
	}
};
