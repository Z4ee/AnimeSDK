#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

class Class_1_34917908B7833130;
class Class_1_643D83DDDD9FD97F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_56F79B35BC444FE2_METHOD_1_4A9EC6DB406934E9_OFFSET UNITYSDK_OFFSET(0xD24A320)
#define CLASS_1_56F79B35BC444FE2_METHOD_1_51109A16BFAC0AA0_OFFSET UNITYSDK_OFFSET(0xD24A100)
#define CLASS_1_56F79B35BC444FE2_METHOD_1_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0xD24A5E0)
#define CLASS_1_56F79B35BC444FE2_METHOD_1_7D30D10C676AAF99_OFFSET UNITYSDK_OFFSET(0xD24A410)
#define CLASS_1_56F79B35BC444FE2_METHOD_1_9FC7E29CA23560D1_OFFSET UNITYSDK_OFFSET(0xD24A800)
#define CLASS_1_56F79B35BC444FE2_METHOD_1_B0BB5DA1ECCFFDE9_OFFSET UNITYSDK_OFFSET(0xD24A250)
#define CLASS_1_56F79B35BC444FE2_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0xD249FD0)
#define CLASS_1_56F79B35BC444FE2__CTOR_OFFSET UNITYSDK_OFFSET(0xD24A080)

inline static constexpr unsigned int Class_1_56F79B35BC444FE2_TypeDefinitionIndex = 71604;

class Class_1_56F79B35BC444FE2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleUIPanelType, ::Class_1_643D83DDDD9FD97F*>* DDBEJLMCKHH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2__CTOR_OFFSET))(this);
	}

	static ::Class_1_56F79B35BC444FE2* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_56F79B35BC444FE2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_51109A16BFAC0AA0(::RPG::GameCore::BattleUIPanelType a1, ::Class_1_34917908B7833130* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_51109A16BFAC0AA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B0BB5DA1ECCFFDE9(::RPG::GameCore::BattleUIPanelType a1, ::Class_1_34917908B7833130* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_B0BB5DA1ECCFFDE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A9EC6DB406934E9(::RPG::GameCore::BattleUIPanelType a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_4A9EC6DB406934E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D30D10C676AAF99(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_7D30D10C676AAF99_OFFSET))(this, a1);
	}

	::System::Void Method_1_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_686221D5DF498040_OFFSET))(this);
	}

	::System::Boolean Method_1_9FC7E29CA23560D1(::RPG::GameCore::BattleUIPanelType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + CLASS_1_56F79B35BC444FE2_METHOD_1_9FC7E29CA23560D1_OFFSET))(this, a1);
	}
};
