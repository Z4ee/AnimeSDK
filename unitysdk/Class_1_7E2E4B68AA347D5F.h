#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_944;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E2E4B68AA347D5F_GET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0x11B7A8A0)
#define CLASS_1_7E2E4B68AA347D5F_METHOD_1_0E7A29DE2DA808D9_OFFSET UNITYSDK_OFFSET(0x11B7A650)
#define CLASS_1_7E2E4B68AA347D5F_SET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0x11B7A8B0)
#define CLASS_1_7E2E4B68AA347D5F__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7A6D0)

inline static constexpr unsigned int Class_1_7E2E4B68AA347D5F_TypeDefinitionIndex = 65915;

class Class_1_7E2E4B68AA347D5F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_944*>* _BuffViewDatas_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E2E4B68AA347D5F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7E2E4B68AA347D5F* Method_1_0E7A29DE2DA808D9(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
	{
		return ((::Class_1_7E2E4B68AA347D5F*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E2E4B68AA347D5F_METHOD_1_0E7A29DE2DA808D9_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_944*>* get_BuffViewDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_944*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E2E4B68AA347D5F_GET_BUFFVIEWDATAS_OFFSET))(this);
	}

	::System::Void set_BuffViewDatas(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_944*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_944*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E2E4B68AA347D5F_SET_BUFFVIEWDATAS_OFFSET))(this, value);
	}
};
