#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1194;
class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35ACA44E5C943DFC_METHOD_1_3658199B4B3A8B7B_OFFSET UNITYSDK_OFFSET(0x14609550)
#define CLASS_1_35ACA44E5C943DFC_METHOD_1_A220812BA51DD870_OFFSET UNITYSDK_OFFSET(0x14609420)
#define CLASS_1_35ACA44E5C943DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x146098A0)

inline static constexpr unsigned int Class_1_35ACA44E5C943DFC_TypeDefinitionIndex = 72385;

class Class_1_35ACA44E5C943DFC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35ACA44E5C943DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A220812BA51DD870(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_35ACA44E5C943DFC_METHOD_1_A220812BA51DD870_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_1194* Method_1_3658199B4B3A8B7B(::RPG::GameCore::BaseChenLingBattleEffect* a1)
	{
		return ((::Class_0_16E4307DCC419505_1194*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleEffect*))((::PBYTE)hIl2Cpp + CLASS_1_35ACA44E5C943DFC_METHOD_1_3658199B4B3A8B7B_OFFSET))(this, a1);
	}
};
