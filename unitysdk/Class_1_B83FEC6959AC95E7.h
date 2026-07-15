#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_62355CAF578E9139.h"
#include "unitysdk/System/Object.h"

class Class_1_1CB8CBC69B962B41;
class Class_1_83D980B81C9B9AFA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B83FEC6959AC95E7_CLEAR_OFFSET UNITYSDK_OFFSET(0x15EFF440)
#define CLASS_1_B83FEC6959AC95E7__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFF540)

inline static constexpr unsigned int Class_1_B83FEC6959AC95E7_TypeDefinitionIndex = 53522;

class Class_1_B83FEC6959AC95E7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::RPG::GameCore::GameEntity* Field_1_4; // 0x30
	::Class_1_1CB8CBC69B962B41* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_1_7; // 0x48
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_8; // 0x50
	::RPG::GameCore::FixPoint Field_1_9; // 0x58
	::RPG::GameCore::ElationTimeState Field_1_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83FEC6959AC95E7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83FEC6959AC95E7_CLEAR_OFFSET))(this);
	}
};
