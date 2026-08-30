#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/Class_1_AC66714FF5876767_Struct_2_BBD456EBC9087BC2_4.h"
#include "unitysdk/System/Object.h"

class Class_1_95BA09BAE479F559;
class Class_1_C6E39342395B51C9;
class Class_3_A88DFCAE3B12E69C;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC66714FF5876767_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D36780)
#define CLASS_1_AC66714FF5876767_GET_AIACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x17D38180)
#define CLASS_1_AC66714FF5876767_GET_AISEQUENCESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x17D381F0)
#define CLASS_1_AC66714FF5876767_GET_AISKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0x17D38210)
#define CLASS_1_AC66714FF5876767_GET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x17D38250)
#define CLASS_1_AC66714FF5876767_GET_HASAVAILABLESKILL_OFFSET UNITYSDK_OFFSET(0x17D38230)
#define CLASS_1_AC66714FF5876767_GET_LASTSEQUENCESKILLIDX_OFFSET UNITYSDK_OFFSET(0x17D381D0)
#define CLASS_1_AC66714FF5876767_GET_ONLYULTRAFLAG_OFFSET UNITYSDK_OFFSET(0x17D38270)
#define CLASS_1_AC66714FF5876767_GET_VARIABLEANIMCONFIGREFKEY_OFFSET UNITYSDK_OFFSET(0x17D381C0)
#define CLASS_1_AC66714FF5876767_GET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET UNITYSDK_OFFSET(0x17D381A0)
#define CLASS_1_AC66714FF5876767_METHOD_1_1266A942BF66AA3D_OFFSET UNITYSDK_OFFSET(0x17D37500)
#define CLASS_1_AC66714FF5876767_METHOD_1_36FE06AA8E3E4023_OFFSET UNITYSDK_OFFSET(0x17D37780)
#define CLASS_1_AC66714FF5876767_METHOD_1_39797B00B8ADB694_OFFSET UNITYSDK_OFFSET(0x17D36C50)
#define CLASS_1_AC66714FF5876767_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17D378C0)
#define CLASS_1_AC66714FF5876767_METHOD_1_70DF8997DFA24177_OFFSET UNITYSDK_OFFSET(0x17D37020)
#define CLASS_1_AC66714FF5876767_METHOD_1_7251E73A45DF0488_1_OFFSET UNITYSDK_OFFSET(0x17D375C0)
#define CLASS_1_AC66714FF5876767_METHOD_1_7251E73A45DF0488_OFFSET UNITYSDK_OFFSET(0x17D373E0)
#define CLASS_1_AC66714FF5876767_METHOD_1_81123091D2E89083_OFFSET UNITYSDK_OFFSET(0x17D37B60)
#define CLASS_1_AC66714FF5876767_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x17D376E0)
#define CLASS_1_AC66714FF5876767_METHOD_1_8CBB93C3A2339306_OFFSET UNITYSDK_OFFSET(0x17D37200)
#define CLASS_1_AC66714FF5876767_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x17D37980)
#define CLASS_1_AC66714FF5876767_METHOD_1_9592CC34AD487472_OFFSET UNITYSDK_OFFSET(0x17D37A60)
#define CLASS_1_AC66714FF5876767_METHOD_1_95F5200B1985BEE8_OFFSET UNITYSDK_OFFSET(0x17D368F0)
#define CLASS_1_AC66714FF5876767_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x17D38160)
#define CLASS_1_AC66714FF5876767_METHOD_1_B26CE4DFFCFFA38A_OFFSET UNITYSDK_OFFSET(0x17D36A70)
#define CLASS_1_AC66714FF5876767_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x17D38290)
#define CLASS_1_AC66714FF5876767_METHOD_1_CC5CE2E05C46A526_OFFSET UNITYSDK_OFFSET(0x17D37AF0)
#define CLASS_1_AC66714FF5876767_METHOD_1_CD6D61DEE46F1276_OFFSET UNITYSDK_OFFSET(0x17D36E30)
#define CLASS_1_AC66714FF5876767_METHOD_1_D94CB0E64E013CD7_OFFSET UNITYSDK_OFFSET(0x17D372C0)
#define CLASS_1_AC66714FF5876767_SET_AIACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x17D38170)
#define CLASS_1_AC66714FF5876767_SET_AISEQUENCESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x17D38200)
#define CLASS_1_AC66714FF5876767_SET_AISKILLTARGETENTITYLIST_OFFSET UNITYSDK_OFFSET(0x17D38220)
#define CLASS_1_AC66714FF5876767_SET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x17D38260)
#define CLASS_1_AC66714FF5876767_SET_HASAVAILABLESKILL_OFFSET UNITYSDK_OFFSET(0x17D38240)
#define CLASS_1_AC66714FF5876767_SET_LASTSEQUENCESKILLIDX_OFFSET UNITYSDK_OFFSET(0x17D381E0)
#define CLASS_1_AC66714FF5876767_SET_ONLYULTRAFLAG_OFFSET UNITYSDK_OFFSET(0x17D38280)
#define CLASS_1_AC66714FF5876767_SET_VARIABLEANIMCONFIGREFKEY_OFFSET UNITYSDK_OFFSET(0x17D381B0)
#define CLASS_1_AC66714FF5876767_SET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET UNITYSDK_OFFSET(0x17D38190)
#define CLASS_1_AC66714FF5876767__CTOR_OFFSET UNITYSDK_OFFSET(0x17D36410)

inline static constexpr unsigned int Class_1_AC66714FF5876767_TypeDefinitionIndex = 54549;

class Class_1_AC66714FF5876767 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_AC66714FF5876767_Struct_2_BBD456EBC9087BC2_4>* OJANELEACLE; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _AISkillTargetEntityList_k__BackingField; // 0x20
	::Class_1_95BA09BAE479F559* _GlobalVars_k__BackingField; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* PPKBODLJJKD; // 0x30
	::System::String* _VariableForbidClearSkillUseRecordRefKey_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AC66714FF5876767_Struct_2_028675BFBEB6582A>*>* KEFAKHJCHLF; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* _AISequenceSkillIDList_k__BackingField; // 0x48
	::System::String* _VariableAnimConfigRefKey_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* FEONBGCCLBB; // 0x58
	::System::Int32 _AIActionTurnCount_k__BackingField; // 0x60
	::System::Boolean _OnlyUltraFlag_k__BackingField; // 0x64
	::System::Boolean _HasAvailableSkill_k__BackingField; // 0x65
	::System::Int32 _LastSequenceSkillIdx_k__BackingField; // 0x68

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_95F5200B1985BEE8(::Il2CppArray<::RPG::GameCore::AIVariable*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_95F5200B1985BEE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B26CE4DFFCFFA38A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_B26CE4DFFCFFA38A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39797B00B8ADB694(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_39797B00B8ADB694_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD6D61DEE46F1276(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_CD6D61DEE46F1276_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70DF8997DFA24177(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_70DF8997DFA24177_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CBB93C3A2339306(::System::String* a1, ::Class_3_A88DFCAE3B12E69C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_A88DFCAE3B12E69C*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_8CBB93C3A2339306_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_D94CB0E64E013CD7(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_D94CB0E64E013CD7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7251E73A45DF0488(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_7251E73A45DF0488_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7251E73A45DF0488_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_7251E73A45DF0488_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_1_36FE06AA8E3E4023(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_36FE06AA8E3E4023_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_1_9592CC34AD487472(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_9592CC34AD487472_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CC5CE2E05C46A526(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_CC5CE2E05C46A526_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_81123091D2E89083(::System::Int32& a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_81123091D2E89083_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_1266A942BF66AA3D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_1266A942BF66AA3D_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void set_AIActionTurnCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_AIACTIONTURNCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_AIActionTurnCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_AIACTIONTURNCOUNT_OFFSET))(this);
	}

	::System::Void set_VariableForbidClearSkillUseRecordRefKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET))(this, a1);
	}

	::System::String* get_VariableForbidClearSkillUseRecordRefKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_VARIABLEFORBIDCLEARSKILLUSERECORDREFKEY_OFFSET))(this);
	}

	::System::Void set_VariableAnimConfigRefKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_VARIABLEANIMCONFIGREFKEY_OFFSET))(this, a1);
	}

	::System::String* get_VariableAnimConfigRefKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_VARIABLEANIMCONFIGREFKEY_OFFSET))(this);
	}

	::System::Int32 get_LastSequenceSkillIdx()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_LASTSEQUENCESKILLIDX_OFFSET))(this);
	}

	::System::Void set_LastSequenceSkillIdx(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_LASTSEQUENCESKILLIDX_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AISequenceSkillIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_AISEQUENCESKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_AISequenceSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_AISEQUENCESKILLIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_AISkillTargetEntityList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_AISKILLTARGETENTITYLIST_OFFSET))(this);
	}

	::System::Void set_AISkillTargetEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_AISKILLTARGETENTITYLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_HasAvailableSkill()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_HASAVAILABLESKILL_OFFSET))(this);
	}

	::System::Void set_HasAvailableSkill(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_HASAVAILABLESKILL_OFFSET))(this, a1);
	}

	::Class_1_95BA09BAE479F559* get_GlobalVars()
	{
		return ((::Class_1_95BA09BAE479F559*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_GLOBALVARS_OFFSET))(this);
	}

	::System::Void set_GlobalVars(::Class_1_95BA09BAE479F559* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BA09BAE479F559*))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_GLOBALVARS_OFFSET))(this, a1);
	}

	::System::Boolean get_OnlyUltraFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_GET_ONLYULTRAFLAG_OFFSET))(this);
	}

	::System::Void set_OnlyUltraFlag(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_SET_ONLYULTRAFLAG_OFFSET))(this, a1);
	}

	::Class_1_C6E39342395B51C9* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_C6E39342395B51C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC66714FF5876767_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}
};
