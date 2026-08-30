#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1089;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB2D61E7A20DFB38_1_GET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0xB464290)
#define CLASS_1_DB2D61E7A20DFB38_1_METHOD_1_0E7A29DE2DA808D9_OFFSET UNITYSDK_OFFSET(0xB463FF0)
#define CLASS_1_DB2D61E7A20DFB38_1_SET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0xB4642A0)
#define CLASS_1_DB2D61E7A20DFB38_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB464070)

inline static constexpr unsigned int Class_1_DB2D61E7A20DFB38_1_TypeDefinitionIndex = 71471;

class Class_1_DB2D61E7A20DFB38_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1089*>* _BuffViewDatas_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_DB2D61E7A20DFB38_1* Method_1_0E7A29DE2DA808D9(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1)
	{
		return ((::Class_1_DB2D61E7A20DFB38_1*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1_METHOD_1_0E7A29DE2DA808D9_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1089*>* get_BuffViewDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1089*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1_GET_BUFFVIEWDATAS_OFFSET))(this);
	}

	::System::Void set_BuffViewDatas(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1089*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1089*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1_SET_BUFFVIEWDATAS_OFFSET))(this, a1);
	}
};
