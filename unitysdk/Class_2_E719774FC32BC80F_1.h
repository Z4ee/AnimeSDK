#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_11.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define CLASS_2_E719774FC32BC80F_1_METHOD_2_506EEE2E791A82F8_OFFSET UNITYSDK_OFFSET(0x12AC95A0)
#define CLASS_2_E719774FC32BC80F_1_METHOD_2_8925D5F9438B14DD_OFFSET UNITYSDK_OFFSET(0x12AC94C0)
#define CLASS_2_E719774FC32BC80F_1_METHOD_2_B0B7AB18AC33C766_OFFSET UNITYSDK_OFFSET(0x12AC9360)
#define CLASS_2_E719774FC32BC80F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12AC9350)

inline static constexpr unsigned int Class_2_E719774FC32BC80F_1_TypeDefinitionIndex = 58913;

class Class_2_E719774FC32BC80F_1 : public ::Class_1_F9FBCC956DFCF137_11
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x18
	::RPG::Client::UIController* Field_2_1; // 0x20

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B0B7AB18AC33C766(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_1_METHOD_2_B0B7AB18AC33C766_OFFSET))(this, a1);
	}

	::System::Void Method_2_8925D5F9438B14DD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_1_METHOD_2_8925D5F9438B14DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_506EEE2E791A82F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E719774FC32BC80F_1_METHOD_2_506EEE2E791A82F8_OFFSET))(this, a1);
	}
};
