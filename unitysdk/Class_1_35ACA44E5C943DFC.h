#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1138;
class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35ACA44E5C943DFC_METHOD_1_387B7379D140F975_OFFSET UNITYSDK_OFFSET(0x119CD030)
#define CLASS_1_35ACA44E5C943DFC_METHOD_1_A220812BA51DD870_OFFSET UNITYSDK_OFFSET(0x119CCF00)
#define CLASS_1_35ACA44E5C943DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x119CD2F0)

inline static constexpr unsigned int Class_1_35ACA44E5C943DFC_TypeDefinitionIndex = 71363;

class Class_1_35ACA44E5C943DFC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35ACA44E5C943DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A220812BA51DD870(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_35ACA44E5C943DFC_METHOD_1_A220812BA51DD870_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_1138* Method_1_387B7379D140F975(::RPG::GameCore::BaseChenLingBattleEffect* a1)
	{
		return ((::Class_0_16E4307DCC419505_1138*(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleEffect*))((::PBYTE)hIl2Cpp + CLASS_1_35ACA44E5C943DFC_METHOD_1_387B7379D140F975_OFFSET))(this, a1);
	}
};
