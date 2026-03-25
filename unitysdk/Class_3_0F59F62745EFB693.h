#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_6A3F10CE86B200DD;
class Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Main_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_0F59F62745EFB693_METHOD_3_201CC1E3E6B035C2_OFFSET UNITYSDK_OFFSET(0xE483BF0)
#define CLASS_3_0F59F62745EFB693_METHOD_3_7AFDBF811FBF265E_OFFSET UNITYSDK_OFFSET(0xE4832A0)
#define CLASS_3_0F59F62745EFB693_METHOD_3_8194683371E228D0_OFFSET UNITYSDK_OFFSET(0xE4833E0)
#define CLASS_3_0F59F62745EFB693_METHOD_3_8EB5F47953521201_OFFSET UNITYSDK_OFFSET(0xE483A00)
#define CLASS_3_0F59F62745EFB693_METHOD_3_B3A9EC24C2E8826B_OFFSET UNITYSDK_OFFSET(0xE482FB0)
#define CLASS_3_0F59F62745EFB693_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE483F00)
#define CLASS_3_0F59F62745EFB693_METHOD_3_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0xE483370)
#define CLASS_3_0F59F62745EFB693_METHOD_3_DED9B5B79D083455_OFFSET UNITYSDK_OFFSET(0xE483E00)
#define CLASS_3_0F59F62745EFB693_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE482C10)
#define CLASS_3_0F59F62745EFB693_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE4834D0)
#define CLASS_3_0F59F62745EFB693_TICK_OFFSET UNITYSDK_OFFSET(0xE4836D0)
#define CLASS_3_0F59F62745EFB693__CTOR_OFFSET UNITYSDK_OFFSET(0xE482920)
#define CLASS_3_0F59F62745EFB693___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xE483F50)

inline static constexpr unsigned int Class_3_0F59F62745EFB693_TypeDefinitionIndex = 42239;

class Class_3_0F59F62745EFB693 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_MoveToTarget*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_3; // 0x28
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_3_1; // 0x38
	::RPG::GameCore::AdventureAbilityComponent* Field_3_12; // 0x40
	::Class_2_6A3F10CE86B200DD* Field_3_2; // 0x48
	::Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0* Field_3_5; // 0x50
	::Class_2_A0580152EB393340* Field_3_4; // 0x58
	::System::Single Field_3_8; // 0x60
	::System::Single Field_3_9; // 0x64
	::System::Single Field_3_7; // 0x68
	::System::Single Field_3_6; // 0x6C
	::System::Boolean Field_3_10; // 0x70
	::System::Boolean Field_3_11; // 0x71

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_B3A9EC24C2E8826B(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_B3A9EC24C2E8826B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8194683371E228D0(::RPG::GameCore::TransformComponent* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_8194683371E228D0_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DED9B5B79D083455(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_DED9B5B79D083455_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_201CC1E3E6B035C2(::RPG::GameCore::TransformComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_201CC1E3E6B035C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8EB5F47953521201(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_8EB5F47953521201_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CBB16AE705BCA424(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_CBB16AE705BCA424_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_7AFDBF811FBF265E()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693_METHOD_3_7AFDBF811FBF265E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F59F62745EFB693___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
