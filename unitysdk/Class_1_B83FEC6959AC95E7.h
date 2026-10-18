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

#define CLASS_1_B83FEC6959AC95E7_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB769A0)
#define CLASS_1_B83FEC6959AC95E7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB76AB0)

inline static constexpr unsigned int Class_1_B83FEC6959AC95E7_TypeDefinitionIndex = 56049;

class Class_1_B83FEC6959AC95E7 : public ::System::Object
{
public:
	::System::String* BCKBHPNAMKJ; // 0x10
	::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x18
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HACPIPNNFGJ; // 0x20
	::System::String* GEIGNKLEOBD; // 0x28
	::Class_1_1CB8CBC69B962B41* PJCGFJBGCFJ; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>* NCAOCMNBJLE; // 0x40
	::System::Collections::Generic::List_1<::Class_1_83D980B81C9B9AFA*>* MENGFAFNNIN; // 0x48
	::System::String* MAGLCBLICBG; // 0x50
	::RPG::GameCore::ElationTimeState MEPFOEEGBEA; // 0x58
	::RPG::GameCore::FixPoint CKLLHFKPACB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83FEC6959AC95E7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83FEC6959AC95E7_CLEAR_OFFSET))(this);
	}
};
