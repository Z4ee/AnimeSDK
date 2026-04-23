#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBattleAbilityNodeState.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
class Class_1_F65B6F8790DF074B;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A02AD12DCED9B766_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12921450)
#define CLASS_1_A02AD12DCED9B766_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x129219A0)
#define CLASS_1_A02AD12DCED9B766_METHOD_1_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x12921780)
#define CLASS_1_A02AD12DCED9B766_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x129215E0)
#define CLASS_1_A02AD12DCED9B766_METHOD_1_9E1ABA4C82200416_OFFSET UNITYSDK_OFFSET(0x129219F0)
#define CLASS_1_A02AD12DCED9B766_METHOD_1_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x12921850)
#define CLASS_1_A02AD12DCED9B766_METHOD_1_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x12921650)
#define CLASS_1_A02AD12DCED9B766__CTOR_OFFSET UNITYSDK_OFFSET(0x12920B00)

inline static constexpr unsigned int Class_1_A02AD12DCED9B766_TypeDefinitionIndex = 71360;

class Class_1_A02AD12DCED9B766 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F65B6F8790DF074B*>* Field_1_3; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* a1, ::Class_1_36006FC25F5DDC69* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>*, ::Class_1_36006FC25F5DDC69*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_METHOD_1_E3ADA5CA2C064E44_OFFSET))(this, a1);
	}

	::System::Void Method_1_A66B981E1EA3E23D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_METHOD_1_A66B981E1EA3E23D_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::Class_1_F65B6F8790DF074B* Method_1_7E3C0318CC90CDC0()
	{
		return ((::Class_1_F65B6F8790DF074B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_METHOD_1_7E3C0318CC90CDC0_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState Method_1_9E1ABA4C82200416()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02AD12DCED9B766_METHOD_1_9E1ABA4C82200416_OFFSET))(this);
	}
};
