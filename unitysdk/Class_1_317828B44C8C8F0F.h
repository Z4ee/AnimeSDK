#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_62355CAF578E9139.h"
#include "unitysdk/System/Object.h"

class Class_1_83D980B81C9B9AFA;
class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_317828B44C8C8F0F_CLEAR_OFFSET UNITYSDK_OFFSET(0x99292E0)
#define CLASS_1_317828B44C8C8F0F__CTOR_OFFSET UNITYSDK_OFFSET(0x99293F0)

inline static constexpr unsigned int Class_1_317828B44C8C8F0F_TypeDefinitionIndex = 51645;

class Class_1_317828B44C8C8F0F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x10
	::System::String* Field_1_7; // 0x18
	::RPG::GameCore::GameEntity* Field_1_1; // 0x20
	::Class_1_E3A8B05AA1BBEE81* Field_1_5; // 0x28
	::System::String* Field_1_6; // 0x30
	::System::String* Field_1_10; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>* Field_1_4; // 0x40
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_1_3; // 0x50
	::RPG::GameCore::FixPoint Field_1_8; // 0x58
	::RPG::GameCore::ElationTimeState Field_1_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_317828B44C8C8F0F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_317828B44C8C8F0F_CLEAR_OFFSET))(this);
	}
};
