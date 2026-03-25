#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_10.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define CLASS_2_E719774FC32BC80F_METHOD_2_506EEE2E791A82F8_OFFSET UNITYSDK_OFFSET(0x104A4FC0)
#define CLASS_2_E719774FC32BC80F_METHOD_2_5D53ED51EF8A6513_OFFSET UNITYSDK_OFFSET(0x104A4E00)
#define CLASS_2_E719774FC32BC80F_METHOD_2_B0B7AB18AC33C766_OFFSET UNITYSDK_OFFSET(0x104A4BA0)
#define CLASS_2_E719774FC32BC80F_METHOD_2_CA3B5ABF7C385119_OFFSET UNITYSDK_OFFSET(0x104A4D00)
#define CLASS_2_E719774FC32BC80F__CTOR_OFFSET UNITYSDK_OFFSET(0x104A4B90)

inline static constexpr unsigned int Class_2_E719774FC32BC80F_TypeDefinitionIndex = 51961;

class Class_2_E719774FC32BC80F : public ::Class_1_F9FBCC956DFCF137_10
{
public:
	::RPG::Client::UIController* Field_2_2; // 0x18
	::RPG::Client::UIController* Field_2_0; // 0x20
	::RPG::Client::UIController* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B0B7AB18AC33C766(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_METHOD_2_B0B7AB18AC33C766_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA3B5ABF7C385119(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_METHOD_2_CA3B5ABF7C385119_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D53ED51EF8A6513(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_METHOD_2_5D53ED51EF8A6513_OFFSET))(this, a1);
	}

	::System::Void Method_2_506EEE2E791A82F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_METHOD_2_506EEE2E791A82F8_OFFSET))(this, a1);
	}
};
