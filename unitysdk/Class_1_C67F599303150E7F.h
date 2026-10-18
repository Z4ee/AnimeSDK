#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/InputNoteType.h"
#include "unitysdk/RPG/GameCore/NoteType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_619F886B74415EBA;
namespace RPG::GameCore { class NoteConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C67F599303150E7F_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCE0)
#define CLASS_1_C67F599303150E7F_GET_HASKEYDOWN_OFFSET UNITYSDK_OFFSET(0x15D6BC20)
#define CLASS_1_C67F599303150E7F_GET_HASKEYUP_OFFSET UNITYSDK_OFFSET(0x15D6BC40)
#define CLASS_1_C67F599303150E7F_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15D6BBE0)
#define CLASS_1_C67F599303150E7F_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD20)
#define CLASS_1_C67F599303150E7F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15D6BC00)
#define CLASS_1_C67F599303150E7F_GET_KEYDOWNRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC60)
#define CLASS_1_C67F599303150E7F_GET_KEYUPRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC80)
#define CLASS_1_C67F599303150E7F_GET_NOTETYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD00)
#define CLASS_1_C67F599303150E7F_GET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x15D6BCA0)
#define CLASS_1_C67F599303150E7F_GET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x15D6BD40)
#define CLASS_1_C67F599303150E7F_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCC0)
#define CLASS_1_C67F599303150E7F_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x15D6B470)
#define CLASS_1_C67F599303150E7F_METHOD_1_4F60CBE29BD2AB9A_OFFSET UNITYSDK_OFFSET(0x15D6A4D0)
#define CLASS_1_C67F599303150E7F_METHOD_1_A9E21AEFB7D4CB48_1_OFFSET UNITYSDK_OFFSET(0x15D6B980)
#define CLASS_1_C67F599303150E7F_METHOD_1_A9E21AEFB7D4CB48_OFFSET UNITYSDK_OFFSET(0x15D6B3C0)
#define CLASS_1_C67F599303150E7F_METHOD_1_AAFE8DC44E675A0C_OFFSET UNITYSDK_OFFSET(0x15D6B550)
#define CLASS_1_C67F599303150E7F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15D6B510)
#define CLASS_1_C67F599303150E7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15D6B4D0)
#define CLASS_1_C67F599303150E7F_METHOD_1_EBB9073DE8DED836_OFFSET UNITYSDK_OFFSET(0x15D6B750)
#define CLASS_1_C67F599303150E7F_METHOD_1_F0283A02CC8B6229_OFFSET UNITYSDK_OFFSET(0x15D6A9C0)
#define CLASS_1_C67F599303150E7F_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x15D6BB60)
#define CLASS_1_C67F599303150E7F_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCF0)
#define CLASS_1_C67F599303150E7F_SET_HASKEYDOWN_OFFSET UNITYSDK_OFFSET(0x15D6BC30)
#define CLASS_1_C67F599303150E7F_SET_HASKEYUP_OFFSET UNITYSDK_OFFSET(0x15D6BC50)
#define CLASS_1_C67F599303150E7F_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15D6BBF0)
#define CLASS_1_C67F599303150E7F_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD30)
#define CLASS_1_C67F599303150E7F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15D6BC10)
#define CLASS_1_C67F599303150E7F_SET_KEYDOWNRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC70)
#define CLASS_1_C67F599303150E7F_SET_KEYUPRESULT_OFFSET UNITYSDK_OFFSET(0x15D6BC90)
#define CLASS_1_C67F599303150E7F_SET_NOTETYPE_OFFSET UNITYSDK_OFFSET(0x15D6BD10)
#define CLASS_1_C67F599303150E7F_SET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x15D6BCB0)
#define CLASS_1_C67F599303150E7F_SET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x15D6BD50)
#define CLASS_1_C67F599303150E7F_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x15D6BCD0)
#define CLASS_1_C67F599303150E7F__CTOR_OFFSET UNITYSDK_OFFSET(0x15D696D0)

inline static constexpr unsigned int Class_1_C67F599303150E7F_TypeDefinitionIndex = 60176;

class Class_1_C67F599303150E7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* LFHMFMNDBNF; // 0x10
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* DKMAANGBIAO; // 0x18
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* HBNCHDPEDGG; // 0x20
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* JGBHKIKKABP; // 0x28
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* LMOHCFMKIIE; // 0x30
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* BHEFFFDPGHM; // 0x38
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* LKJJFEFJGID; // 0x40
	::Class_1_3F51724BA2A18D7F* _OwnerGroup_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* JKHGCKDHAAN; // 0x50
	::System::Collections::Generic::List_1<::Class_1_619F886B74415EBA*>* AOCOFKCFFHE; // 0x58
	::System::Single _StartTime_k__BackingField; // 0x60
	::System::Single _EndTime_k__BackingField; // 0x64
	::System::Single _PressTime_k__BackingField; // 0x68
	::System::Boolean DDDMMHJBCHO; // 0x6C
	::System::Boolean _HasKeyUp_k__BackingField; // 0x6D
	::System::Boolean _IsActive_k__BackingField; // 0x6E
	::System::Boolean _HasKeyDown_k__BackingField; // 0x6F
	::System::Int32 _Index_k__BackingField; // 0x70
	::RPG::Client::NoteInputResult _KeyDownResult_k__BackingField; // 0x74
	::RPG::GameCore::NoteType _NoteType_k__BackingField; // 0x78
	::RPG::GameCore::InputNoteType _InputType_k__BackingField; // 0x7C
	::RPG::Client::NoteInputResult _KeyUpResult_k__BackingField; // 0x80
	::System::Single NJOLMHEDFGM; // 0x84

	::System::Void _ctor(::Class_1_3F51724BA2A18D7F* a1, ::RPG::GameCore::NoteConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F51724BA2A18D7F*, ::RPG::GameCore::NoteConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F60CBE29BD2AB9A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_4F60CBE29BD2AB9A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_A9E21AEFB7D4CB48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AAFE8DC44E675A0C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_AAFE8DC44E675A0C_OFFSET))(this, a1);
	}

	::Class_1_C67F599303150E7F* Method_1_EBB9073DE8DED836(::System::Single a1)
	{
		return ((::Class_1_C67F599303150E7F*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_EBB9073DE8DED836_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_A9E21AEFB7D4CB48_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_F0283A02CC8B6229(::RPG::Client::NoteInputResult a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_METHOD_1_F0283A02CC8B6229_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_INDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_HasKeyDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_HASKEYDOWN_OFFSET))(this);
	}

	::System::Void set_HasKeyDown(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_HASKEYDOWN_OFFSET))(this, a1);
	}

	::System::Boolean get_HasKeyUp()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_HASKEYUP_OFFSET))(this);
	}

	::System::Void set_HasKeyUp(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_HASKEYUP_OFFSET))(this, a1);
	}

	::RPG::Client::NoteInputResult get_KeyDownResult()
	{
		return ((::RPG::Client::NoteInputResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_KEYDOWNRESULT_OFFSET))(this);
	}

	::System::Void set_KeyDownResult(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_KEYDOWNRESULT_OFFSET))(this, a1);
	}

	::RPG::Client::NoteInputResult get_KeyUpResult()
	{
		return ((::RPG::Client::NoteInputResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_KEYUPRESULT_OFFSET))(this);
	}

	::System::Void set_KeyUpResult(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_KEYUPRESULT_OFFSET))(this, a1);
	}

	::Class_1_3F51724BA2A18D7F* get_OwnerGroup()
	{
		return ((::Class_1_3F51724BA2A18D7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_OWNERGROUP_OFFSET))(this);
	}

	::System::Void set_OwnerGroup(::Class_1_3F51724BA2A18D7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F51724BA2A18D7F*))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_OWNERGROUP_OFFSET))(this, a1);
	}

	::System::Single get_StartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_STARTTIME_OFFSET))(this);
	}

	::System::Void set_StartTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_STARTTIME_OFFSET))(this, a1);
	}

	::System::Single get_EndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_ENDTIME_OFFSET))(this, a1);
	}

	::RPG::GameCore::NoteType get_NoteType()
	{
		return ((::RPG::GameCore::NoteType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_NOTETYPE_OFFSET))(this);
	}

	::System::Void set_NoteType(::RPG::GameCore::NoteType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NoteType))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_NOTETYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::InputNoteType get_InputType()
	{
		return ((::RPG::GameCore::InputNoteType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_INPUTTYPE_OFFSET))(this);
	}

	::System::Void set_InputType(::RPG::GameCore::InputNoteType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InputNoteType))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_INPUTTYPE_OFFSET))(this, a1);
	}

	::System::Single get_PressTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_GET_PRESSTIME_OFFSET))(this);
	}

	::System::Void set_PressTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C67F599303150E7F_SET_PRESSTIME_OFFSET))(this, a1);
	}
};
