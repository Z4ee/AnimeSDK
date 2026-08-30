#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

class Class_1_D126770E0092C973;
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42D96751C1376DDB_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15674FD0)
#define CLASS_1_42D96751C1376DDB_GET_MODIFIERCONFIGUIPRIORITY_OFFSET UNITYSDK_OFFSET(0x15675010)
#define CLASS_1_42D96751C1376DDB_GET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x15675350)
#define CLASS_1_42D96751C1376DDB_GET_MODIFIERINSTANCEUIINDEX_OFFSET UNITYSDK_OFFSET(0x15675030)
#define CLASS_1_42D96751C1376DDB_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15674C90)
#define CLASS_1_42D96751C1376DDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15674FF0)
#define CLASS_1_42D96751C1376DDB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15675220)
#define CLASS_1_42D96751C1376DDB_METHOD_1_2518DCDAD14A2D19_OFFSET UNITYSDK_OFFSET(0x15674B80)
#define CLASS_1_42D96751C1376DDB_METHOD_1_42DF9B5D9091F120_OFFSET UNITYSDK_OFFSET(0x15674CB0)
#define CLASS_1_42D96751C1376DDB_METHOD_1_46A7A28543076C41_OFFSET UNITYSDK_OFFSET(0x15674ED0)
#define CLASS_1_42D96751C1376DDB_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x15675170)
#define CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x156750B0)
#define CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_2_OFFSET UNITYSDK_OFFSET(0x15675110)
#define CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_3_OFFSET UNITYSDK_OFFSET(0x15675290)
#define CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_4_OFFSET UNITYSDK_OFFSET(0x156752F0)
#define CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_5_OFFSET UNITYSDK_OFFSET(0x15675370)
#define CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15675050)
#define CLASS_1_42D96751C1376DDB_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15674FE0)
#define CLASS_1_42D96751C1376DDB_SET_MODIFIERCONFIGUIPRIORITY_OFFSET UNITYSDK_OFFSET(0x15675020)
#define CLASS_1_42D96751C1376DDB_SET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x15675360)
#define CLASS_1_42D96751C1376DDB_SET_MODIFIERINSTANCEUIINDEX_OFFSET UNITYSDK_OFFSET(0x15675040)
#define CLASS_1_42D96751C1376DDB_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15674CA0)
#define CLASS_1_42D96751C1376DDB_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x15675000)
#define CLASS_1_42D96751C1376DDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15674A80)

inline static constexpr unsigned int Class_1_42D96751C1376DDB_TypeDefinitionIndex = 79502;

class Class_1_42D96751C1376DDB : public ::System::Object
{
public:
	// static const ::System::String* OHNPCDAGLEP; // 0x0
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* _ModifierHintList_k__BackingField; // 0x18
	::System::WeakReference_1<::RPG::GameCore::TurnBasedModifierInstance*>* CLDNCBHCAKI; // 0x20
	::System::Int32 _ModifierConfigUIPriority_k__BackingField; // 0x28
	::RPG::GameCore::EnumStatusType _Type_k__BackingField; // 0x2C
	::RPG::Client::TextID _Name_k__BackingField; // 0x30
	::System::Int32 _ModifierInstanceUIIndex_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedModifierInstance* Method_1_2518DCDAD14A2D19()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_2518DCDAD14A2D19_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* Method_1_42DF9B5D9091F120()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_42DF9B5D9091F120_OFFSET))(this);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_SET_ICONPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnumStatusType get_Type()
	{
		return ((::RPG::GameCore::EnumStatusType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::EnumStatusType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_SET_TYPE_OFFSET))(this, a1);
	}

	::System::Int32 get_ModifierConfigUIPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_GET_MODIFIERCONFIGUIPRIORITY_OFFSET))(this);
	}

	::System::Void set_ModifierConfigUIPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_SET_MODIFIERCONFIGUIPRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 get_ModifierInstanceUIIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_GET_MODIFIERINSTANCEUIINDEX_OFFSET))(this);
	}

	::System::Void set_ModifierInstanceUIIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_SET_MODIFIERINSTANCEUIINDEX_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_2_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_3_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* get_ModifierHintList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_GET_MODIFIERHINTLIST_OFFSET))(this);
	}

	::System::Void set_ModifierHintList(::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>*))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_SET_MODIFIERHINTLIST_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36_5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_95780ED94B90ED36_5_OFFSET))(this);
	}

	static ::System::Boolean Method_1_46A7A28543076C41(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + CLASS_1_42D96751C1376DDB_METHOD_1_46A7A28543076C41_OFFSET))(a1, a2);
	}
};
