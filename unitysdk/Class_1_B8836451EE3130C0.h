#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBattleAbilityNodeState.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
class Class_1_F65B6F8790DF074B;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B8836451EE3130C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A7A70)
#define CLASS_1_B8836451EE3130C0_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xC1A8170)
#define CLASS_1_B8836451EE3130C0_METHOD_1_5208CE6FBA81DA01_OFFSET UNITYSDK_OFFSET(0xC1A81C0)
#define CLASS_1_B8836451EE3130C0_METHOD_1_762A9412773049BE_OFFSET UNITYSDK_OFFSET(0xC1A7FA0)
#define CLASS_1_B8836451EE3130C0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC1A7C70)
#define CLASS_1_B8836451EE3130C0_METHOD_1_A666BD4C2D583F89_OFFSET UNITYSDK_OFFSET(0xC1A7EE0)
#define CLASS_1_B8836451EE3130C0_METHOD_1_CDFCB4F1AB271783_OFFSET UNITYSDK_OFFSET(0xC1A7CF0)
#define CLASS_1_B8836451EE3130C0__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A78D0)

inline static constexpr unsigned int Class_1_B8836451EE3130C0_TypeDefinitionIndex = 77862;

class Class_1_B8836451EE3130C0 : public ::System::Object
{
public:
	::System::Action* CIFOILLJFNF; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F65B6F8790DF074B*>* MFCCNBIENBL; // 0x18
	::System::String* FOMHLLCANPB; // 0x20
	::System::Boolean OELBLBCINNB; // 0x28

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* a1, ::Class_1_B8FF829EFDD29B81* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>*, ::Class_1_B8FF829EFDD29B81*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CDFCB4F1AB271783(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_METHOD_1_CDFCB4F1AB271783_OFFSET))(this, a1);
	}

	::System::Void Method_1_762A9412773049BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_METHOD_1_762A9412773049BE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::Class_1_F65B6F8790DF074B* Method_1_A666BD4C2D583F89()
	{
		return ((::Class_1_F65B6F8790DF074B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_METHOD_1_A666BD4C2D583F89_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState Method_1_5208CE6FBA81DA01()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8836451EE3130C0_METHOD_1_5208CE6FBA81DA01_OFFSET))(this);
	}
};
