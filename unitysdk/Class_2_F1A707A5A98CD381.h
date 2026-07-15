#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_18.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define CLASS_2_F1A707A5A98CD381_METHOD_2_015EED32BD477392_OFFSET UNITYSDK_OFFSET(0x172FFC70)
#define CLASS_2_F1A707A5A98CD381_METHOD_2_0B3CC6873C8072D4_OFFSET UNITYSDK_OFFSET(0x172FFB60)
#define CLASS_2_F1A707A5A98CD381_METHOD_2_50884B570C30FEE7_OFFSET UNITYSDK_OFFSET(0x172FFE30)
#define CLASS_2_F1A707A5A98CD381_METHOD_2_8E5AAAE17B8DAB9A_OFFSET UNITYSDK_OFFSET(0x172FFA00)
#define CLASS_2_F1A707A5A98CD381__CTOR_OFFSET UNITYSDK_OFFSET(0x172FF9F0)

inline static constexpr unsigned int Class_2_F1A707A5A98CD381_TypeDefinitionIndex = 61125;

class Class_2_F1A707A5A98CD381 : public ::Class_1_F9FBCC956DFCF137_18
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x18
	::RPG::Client::UIController* Field_2_1; // 0x20
	::RPG::Client::UIController* Field_2_2; // 0x28

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_F1A707A5A98CD381__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E5AAAE17B8DAB9A(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F1A707A5A98CD381_METHOD_2_8E5AAAE17B8DAB9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B3CC6873C8072D4(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F1A707A5A98CD381_METHOD_2_0B3CC6873C8072D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_015EED32BD477392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F1A707A5A98CD381_METHOD_2_015EED32BD477392_OFFSET))(this, a1);
	}

	::System::Void Method_2_50884B570C30FEE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F1A707A5A98CD381_METHOD_2_50884B570C30FEE7_OFFSET))(this, a1);
	}
};
