#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_152140BAFD2DB102;
class Class_1_83D980B81C9B9AFA;
class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E886076706C3923_CLEAR_OFFSET UNITYSDK_OFFSET(0x886DD40)
#define CLASS_1_5E886076706C3923__CTOR_OFFSET UNITYSDK_OFFSET(0x886DE80)

inline static constexpr unsigned int Class_1_5E886076706C3923_TypeDefinitionIndex = 44897;

class Class_1_5E886076706C3923 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_152140BAFD2DB102*>* Field_1_5; // 0x10
	::System::String* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_1_4; // 0x20
	::Class_1_E3A8B05AA1BBEE81* Field_1_6; // 0x28
	::System::String* Field_1_7; // 0x30
	::RPG::GameCore::GameEntity* Field_1_1; // 0x38
	::System::String* Field_1_11; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x48
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* Field_1_3; // 0x50
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_1_10; // 0x58
	::RPG::GameCore::FixPoint Field_1_9; // 0x60
	::RPG::GameCore::ElationTimeState Field_1_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E886076706C3923__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E886076706C3923_CLEAR_OFFSET))(this);
	}
};
