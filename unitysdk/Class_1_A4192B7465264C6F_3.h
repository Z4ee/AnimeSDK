#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A4192B7465264C6F_3_METHOD_1_15779B1774CF3F78_OFFSET UNITYSDK_OFFSET(0xE490BC0)
#define CLASS_1_A4192B7465264C6F_3_METHOD_1_BDC068113495CC7E_OFFSET UNITYSDK_OFFSET(0xE490F40)
#define CLASS_1_A4192B7465264C6F_3__CTOR_OFFSET UNITYSDK_OFFSET(0xE4912A0)

inline static constexpr unsigned int Class_1_A4192B7465264C6F_3_TypeDefinitionIndex = 72403;

class Class_1_A4192B7465264C6F_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4192B7465264C6F_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_15779B1774CF3F78(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_A4192B7465264C6F_3_METHOD_1_15779B1774CF3F78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BDC068113495CC7E(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::BaseChenLingBattleResource*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_A4192B7465264C6F_3_METHOD_1_BDC068113495CC7E_OFFSET))(this, a1, a2, a3);
	}
};
