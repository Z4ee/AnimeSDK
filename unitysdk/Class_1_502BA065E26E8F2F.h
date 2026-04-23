#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/InputNoteType.h"
#include "unitysdk/RPG/GameCore/NoteType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_AA81E11139890B4C;
namespace RPG::GameCore { class NoteConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_502BA065E26E8F2F_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9707FD0)
#define CLASS_1_502BA065E26E8F2F_GET_HASKEYDOWN_OFFSET UNITYSDK_OFFSET(0x9707F10)
#define CLASS_1_502BA065E26E8F2F_GET_HASKEYUP_OFFSET UNITYSDK_OFFSET(0x9707F30)
#define CLASS_1_502BA065E26E8F2F_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9707ED0)
#define CLASS_1_502BA065E26E8F2F_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x9708010)
#define CLASS_1_502BA065E26E8F2F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9707EF0)
#define CLASS_1_502BA065E26E8F2F_GET_KEYDOWNRESULT_OFFSET UNITYSDK_OFFSET(0x9707F50)
#define CLASS_1_502BA065E26E8F2F_GET_KEYUPRESULT_OFFSET UNITYSDK_OFFSET(0x9707F70)
#define CLASS_1_502BA065E26E8F2F_GET_NOTETYPE_OFFSET UNITYSDK_OFFSET(0x9707FF0)
#define CLASS_1_502BA065E26E8F2F_GET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x9707F90)
#define CLASS_1_502BA065E26E8F2F_GET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x9708030)
#define CLASS_1_502BA065E26E8F2F_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9707FB0)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_09F39C7AA412B875_OFFSET UNITYSDK_OFFSET(0x9707560)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x9707480)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_5FF9EBCD5C4498A5_OFFSET UNITYSDK_OFFSET(0x9707730)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_77B1138DE24B138C_OFFSET UNITYSDK_OFFSET(0x9706990)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_A9E21AEFB7D4CB48_1_OFFSET UNITYSDK_OFFSET(0x9707B50)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_A9E21AEFB7D4CB48_OFFSET UNITYSDK_OFFSET(0x97073D0)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9707520)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x97074E0)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x9706380)
#define CLASS_1_502BA065E26E8F2F_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x9707E50)
#define CLASS_1_502BA065E26E8F2F_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9707FE0)
#define CLASS_1_502BA065E26E8F2F_SET_HASKEYDOWN_OFFSET UNITYSDK_OFFSET(0x9707F20)
#define CLASS_1_502BA065E26E8F2F_SET_HASKEYUP_OFFSET UNITYSDK_OFFSET(0x9707F40)
#define CLASS_1_502BA065E26E8F2F_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9707EE0)
#define CLASS_1_502BA065E26E8F2F_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x9708020)
#define CLASS_1_502BA065E26E8F2F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9707F00)
#define CLASS_1_502BA065E26E8F2F_SET_KEYDOWNRESULT_OFFSET UNITYSDK_OFFSET(0x9707F60)
#define CLASS_1_502BA065E26E8F2F_SET_KEYUPRESULT_OFFSET UNITYSDK_OFFSET(0x9707F80)
#define CLASS_1_502BA065E26E8F2F_SET_NOTETYPE_OFFSET UNITYSDK_OFFSET(0x9708000)
#define CLASS_1_502BA065E26E8F2F_SET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0x9707FA0)
#define CLASS_1_502BA065E26E8F2F_SET_PRESSTIME_OFFSET UNITYSDK_OFFSET(0x9708040)
#define CLASS_1_502BA065E26E8F2F_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9707FC0)
#define CLASS_1_502BA065E26E8F2F__CTOR_OFFSET UNITYSDK_OFFSET(0x97057A0)

inline static constexpr unsigned int Class_1_502BA065E26E8F2F_TypeDefinitionIndex = 55505;

class Class_1_502BA065E26E8F2F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_20; // 0x18
	::Class_1_3F51724BA2A18D7F* _OwnerGroup_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_16; // 0x28
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_18; // 0x30
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_22; // 0x38
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_17; // 0x40
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_19; // 0x48
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_21; // 0x50
	::System::Collections::Generic::List_1<::Class_1_AA81E11139890B4C*>* Field_1_15; // 0x58
	::System::Int32 _Index_k__BackingField; // 0x60
	::System::Single _StartTime_k__BackingField; // 0x64
	::System::Single Field_1_11; // 0x68
	::RPG::GameCore::InputNoteType _InputType_k__BackingField; // 0x6C
	::System::Boolean _HasKeyUp_k__BackingField; // 0x70
	::System::Boolean Field_1_13; // 0x71
	::System::Boolean _HasKeyDown_k__BackingField; // 0x72
	::System::Boolean _IsActive_k__BackingField; // 0x73
	::RPG::GameCore::NoteType _NoteType_k__BackingField; // 0x74
	::System::Single _EndTime_k__BackingField; // 0x78
	::RPG::Client::NoteInputResult _KeyDownResult_k__BackingField; // 0x7C
	::System::Single _PressTime_k__BackingField; // 0x80
	::RPG::Client::NoteInputResult _KeyUpResult_k__BackingField; // 0x84

	::System::Void _ctor(::Class_1_3F51724BA2A18D7F* a1, ::RPG::GameCore::NoteConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F51724BA2A18D7F*, ::RPG::GameCore::NoteConfig*))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_A9E21AEFB7D4CB48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_09F39C7AA412B875(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_09F39C7AA412B875_OFFSET))(this, a1);
	}

	::Class_1_502BA065E26E8F2F* Method_1_5FF9EBCD5C4498A5(::System::Single a1)
	{
		return ((::Class_1_502BA065E26E8F2F*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_5FF9EBCD5C4498A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_A9E21AEFB7D4CB48_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_77B1138DE24B138C(::RPG::Client::NoteInputResult a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_METHOD_1_77B1138DE24B138C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_INDEX_OFFSET))(this, value);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Boolean get_HasKeyDown()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_HASKEYDOWN_OFFSET))(this);
	}

	::System::Void set_HasKeyDown(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_HASKEYDOWN_OFFSET))(this, value);
	}

	::System::Boolean get_HasKeyUp()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_HASKEYUP_OFFSET))(this);
	}

	::System::Void set_HasKeyUp(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_HASKEYUP_OFFSET))(this, value);
	}

	::RPG::Client::NoteInputResult get_KeyDownResult()
	{
		return ((::RPG::Client::NoteInputResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_KEYDOWNRESULT_OFFSET))(this);
	}

	::System::Void set_KeyDownResult(::RPG::Client::NoteInputResult value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_KEYDOWNRESULT_OFFSET))(this, value);
	}

	::RPG::Client::NoteInputResult get_KeyUpResult()
	{
		return ((::RPG::Client::NoteInputResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_KEYUPRESULT_OFFSET))(this);
	}

	::System::Void set_KeyUpResult(::RPG::Client::NoteInputResult value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_KEYUPRESULT_OFFSET))(this, value);
	}

	::Class_1_3F51724BA2A18D7F* get_OwnerGroup()
	{
		return ((::Class_1_3F51724BA2A18D7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_OWNERGROUP_OFFSET))(this);
	}

	::System::Void set_OwnerGroup(::Class_1_3F51724BA2A18D7F* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F51724BA2A18D7F*))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_OWNERGROUP_OFFSET))(this, value);
	}

	::System::Single get_StartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_STARTTIME_OFFSET))(this);
	}

	::System::Void set_StartTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_STARTTIME_OFFSET))(this, value);
	}

	::System::Single get_EndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_ENDTIME_OFFSET))(this, value);
	}

	::RPG::GameCore::NoteType get_NoteType()
	{
		return ((::RPG::GameCore::NoteType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_NOTETYPE_OFFSET))(this);
	}

	::System::Void set_NoteType(::RPG::GameCore::NoteType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NoteType))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_NOTETYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::InputNoteType get_InputType()
	{
		return ((::RPG::GameCore::InputNoteType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_INPUTTYPE_OFFSET))(this);
	}

	::System::Void set_InputType(::RPG::GameCore::InputNoteType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InputNoteType))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_INPUTTYPE_OFFSET))(this, value);
	}

	::System::Single get_PressTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_GET_PRESSTIME_OFFSET))(this);
	}

	::System::Void set_PressTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_502BA065E26E8F2F_SET_PRESSTIME_OFFSET))(this, value);
	}
};
