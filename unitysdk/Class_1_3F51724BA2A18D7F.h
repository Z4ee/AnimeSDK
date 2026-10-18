#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

class Class_1_422F2D395BEF4FA5;
class Class_1_C67F599303150E7F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NoteGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3F51724BA2A18D7F_GET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0xB2A6690)
#define CLASS_1_3F51724BA2A18D7F_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB2A6750)
#define CLASS_1_3F51724BA2A18D7F_GET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0xB2A6830)
#define CLASS_1_3F51724BA2A18D7F_GET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0xB2A67D0)
#define CLASS_1_3F51724BA2A18D7F_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB2A6650)
#define CLASS_1_3F51724BA2A18D7F_GET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0xB2A66D0)
#define CLASS_1_3F51724BA2A18D7F_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB2A6670)
#define CLASS_1_3F51724BA2A18D7F_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB2A67B0)
#define CLASS_1_3F51724BA2A18D7F_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB2A6790)
#define CLASS_1_3F51724BA2A18D7F_GET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0xB2A66B0)
#define CLASS_1_3F51724BA2A18D7F_GET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0xB2A6810)
#define CLASS_1_3F51724BA2A18D7F_GET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0xB2A6710)
#define CLASS_1_3F51724BA2A18D7F_GET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0xB2A66F0)
#define CLASS_1_3F51724BA2A18D7F_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xB2A6730)
#define CLASS_1_3F51724BA2A18D7F_GET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0xB2A67F0)
#define CLASS_1_3F51724BA2A18D7F_GET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0xB2A6770)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_05253A2C50FAEC90_OFFSET UNITYSDK_OFFSET(0xB2A63D0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_0A7E56A59F184B0A_OFFSET UNITYSDK_OFFSET(0xB2A6300)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_1397E3708A9DBEBA_OFFSET UNITYSDK_OFFSET(0xB2A58E0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB2A65F0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB2A65A0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0xB2A5EA0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_7EACFD3740004695_OFFSET UNITYSDK_OFFSET(0xB2A6290)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_A9E21AEFB7D4CB48_OFFSET UNITYSDK_OFFSET(0xB2A5DF0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB2A5F50)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB2A5F00)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_FAF01E6C61157965_OFFSET UNITYSDK_OFFSET(0xB2A5FA0)
#define CLASS_1_3F51724BA2A18D7F_METHOD_1_FCB7990FCD402039_OFFSET UNITYSDK_OFFSET(0xB2A6110)
#define CLASS_1_3F51724BA2A18D7F_SET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0xB2A66A0)
#define CLASS_1_3F51724BA2A18D7F_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB2A6760)
#define CLASS_1_3F51724BA2A18D7F_SET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0xB2A6840)
#define CLASS_1_3F51724BA2A18D7F_SET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0xB2A67E0)
#define CLASS_1_3F51724BA2A18D7F_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB2A6660)
#define CLASS_1_3F51724BA2A18D7F_SET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0xB2A66E0)
#define CLASS_1_3F51724BA2A18D7F_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB2A6680)
#define CLASS_1_3F51724BA2A18D7F_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB2A67C0)
#define CLASS_1_3F51724BA2A18D7F_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB2A67A0)
#define CLASS_1_3F51724BA2A18D7F_SET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0xB2A66C0)
#define CLASS_1_3F51724BA2A18D7F_SET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0xB2A6820)
#define CLASS_1_3F51724BA2A18D7F_SET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0xB2A6720)
#define CLASS_1_3F51724BA2A18D7F_SET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0xB2A6700)
#define CLASS_1_3F51724BA2A18D7F_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xB2A6740)
#define CLASS_1_3F51724BA2A18D7F_SET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0xB2A6800)
#define CLASS_1_3F51724BA2A18D7F_SET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0xB2A6780)
#define CLASS_1_3F51724BA2A18D7F__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2A6850)
#define CLASS_1_3F51724BA2A18D7F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A4F50)

inline static constexpr unsigned int Class_1_3F51724BA2A18D7F_TypeDefinitionIndex = 60173;

class Class_1_3F51724BA2A18D7F : public ::System::Object
{
public:
	static ::System::String** StaticGet_FLIIKCMBHMF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F51724BA2A18D7F_TypeDefinitionIndex)->GetStaticField(0x25420);
	}
	::RPG::GameCore::GameEntity* JIKFGDDKPGD; // 0x10
	::Il2CppArray<::System::String*>* DFBLMGNPONL; // 0x18
	::Il2CppArray<::System::String*>* EMJEMMIDBOA; // 0x20
	::System::String* IIOKHKJFPJP; // 0x28
	::Class_1_422F2D395BEF4FA5* _OwnerMode_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* BHIELOIELOF; // 0x38
	::System::Collections::Generic::List_1<::Class_1_C67F599303150E7F*>* AFEDOJIIAOK; // 0x40
	::System::Single _EndTime_k__BackingField; // 0x48
	::System::Single _RealStartTime_k__BackingField; // 0x4C
	::System::Int32 IKDNNMFCBPE; // 0x50
	::System::Single JGJBJKELJDD; // 0x54
	::System::Boolean _AutoBubble_k__BackingField; // 0x58
	::System::Boolean _IsActive_k__BackingField; // 0x59
	::System::Boolean _IsFinish_k__BackingField; // 0x5A
	::System::Boolean _IgnoreLoop_k__BackingField; // 0x5B
	::System::Single _StartTime_k__BackingField; // 0x5C
	::System::Int32 _Index_k__BackingField; // 0x60
	::System::UInt32 _InputNoteCount_k__BackingField; // 0x64
	::System::Int32 INLKDCHNFPP; // 0x68
	::System::Single IDMGGEHNDBC; // 0x6C
	::System::Boolean _TutorialScore_k__BackingField; // 0x70
	::System::Boolean _IsEmpty_k__BackingField; // 0x71
	::System::Int32 _PerfectInput_k__BackingField; // 0x74
	::System::Int32 _SuccessInput_k__BackingField; // 0x78
	::System::Int32 _FailInput_k__BackingField; // 0x7C
	::System::Single _RealEndTime_k__BackingField; // 0x80

	::System::Void _ctor(::Class_1_422F2D395BEF4FA5* a1, ::System::Int32 a2, ::RPG::GameCore::NoteGroupConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_422F2D395BEF4FA5*, ::System::Int32, ::RPG::GameCore::NoteGroupConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1397E3708A9DBEBA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_1397E3708A9DBEBA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_A9E21AEFB7D4CB48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_C67F599303150E7F* Method_1_FAF01E6C61157965(::System::Single a1)
	{
		return ((::Class_1_C67F599303150E7F*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_FAF01E6C61157965_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FCB7990FCD402039(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_FCB7990FCD402039_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EACFD3740004695(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_7EACFD3740004695_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7E56A59F184B0A(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_0A7E56A59F184B0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_05253A2C50FAEC90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_05253A2C50FAEC90_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_INDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_AutoBubble()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_AUTOBUBBLE_OFFSET))(this);
	}

	::System::Void set_AutoBubble(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_AUTOBUBBLE_OFFSET))(this, a1);
	}

	::Class_1_422F2D395BEF4FA5* get_OwnerMode()
	{
		return ((::Class_1_422F2D395BEF4FA5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_OWNERMODE_OFFSET))(this);
	}

	::System::Void set_OwnerMode(::Class_1_422F2D395BEF4FA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_422F2D395BEF4FA5*))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_OWNERMODE_OFFSET))(this, a1);
	}

	::System::UInt32 get_InputNoteCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_INPUTNOTECOUNT_OFFSET))(this);
	}

	::System::Void set_InputNoteCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_INPUTNOTECOUNT_OFFSET))(this, a1);
	}

	::System::Single get_RealStartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_REALSTARTTIME_OFFSET))(this);
	}

	::System::Void set_RealStartTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_REALSTARTTIME_OFFSET))(this, a1);
	}

	::System::Single get_RealEndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_REALENDTIME_OFFSET))(this);
	}

	::System::Void set_RealEndTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_REALENDTIME_OFFSET))(this, a1);
	}

	::System::Single get_StartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_STARTTIME_OFFSET))(this);
	}

	::System::Void set_StartTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_STARTTIME_OFFSET))(this, a1);
	}

	::System::Single get_EndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ENDTIME_OFFSET))(this, a1);
	}

	::System::Boolean get_TutorialScore()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_TUTORIALSCORE_OFFSET))(this);
	}

	::System::Void set_TutorialScore(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_TUTORIALSCORE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ISFINISH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEmpty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_ISEMPTY_OFFSET))(this);
	}

	::System::Void set_IsEmpty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_ISEMPTY_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreLoop()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_IGNORELOOP_OFFSET))(this);
	}

	::System::Void set_IgnoreLoop(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_IGNORELOOP_OFFSET))(this, a1);
	}

	::System::Int32 get_SuccessInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_SUCCESSINPUT_OFFSET))(this);
	}

	::System::Void set_SuccessInput(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_SUCCESSINPUT_OFFSET))(this, a1);
	}

	::System::Int32 get_PerfectInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_PERFECTINPUT_OFFSET))(this);
	}

	::System::Void set_PerfectInput(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_PERFECTINPUT_OFFSET))(this, a1);
	}

	::System::Int32 get_FailInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_GET_FAILINPUT_OFFSET))(this);
	}

	::System::Void set_FailInput(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F51724BA2A18D7F_SET_FAILINPUT_OFFSET))(this, a1);
	}
};
