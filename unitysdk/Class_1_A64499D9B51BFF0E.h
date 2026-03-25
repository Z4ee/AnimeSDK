#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/System/Object.h"

class Class_1_502BA065E26E8F2F;
class Class_1_C27C170A2F991DAF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NoteGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A64499D9B51BFF0E_GET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0x9EEE830)
#define CLASS_1_A64499D9B51BFF0E_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9EEE8F0)
#define CLASS_1_A64499D9B51BFF0E_GET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0x9EEE9D0)
#define CLASS_1_A64499D9B51BFF0E_GET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0x9EEE970)
#define CLASS_1_A64499D9B51BFF0E_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9EEE7F0)
#define CLASS_1_A64499D9B51BFF0E_GET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0x9EEE870)
#define CLASS_1_A64499D9B51BFF0E_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9EEE810)
#define CLASS_1_A64499D9B51BFF0E_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9EEE950)
#define CLASS_1_A64499D9B51BFF0E_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9EEE930)
#define CLASS_1_A64499D9B51BFF0E_GET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0x9EEE850)
#define CLASS_1_A64499D9B51BFF0E_GET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0x9EEE9B0)
#define CLASS_1_A64499D9B51BFF0E_GET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0x9EEE8B0)
#define CLASS_1_A64499D9B51BFF0E_GET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0x9EEE890)
#define CLASS_1_A64499D9B51BFF0E_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9EEE8D0)
#define CLASS_1_A64499D9B51BFF0E_GET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0x9EEE990)
#define CLASS_1_A64499D9B51BFF0E_GET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0x9EEE910)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_0A7E56A59F184B0A_OFFSET UNITYSDK_OFFSET(0x9EEE470)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_1D73A0E5F2CC5EAE_OFFSET UNITYSDK_OFFSET(0x9EEE240)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x9EEE790)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9EEE740)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_483116EDCB78C64A_OFFSET UNITYSDK_OFFSET(0x9EEE090)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x9EEDF90)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_704182D469158D60_OFFSET UNITYSDK_OFFSET(0x9EED9D0)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_7EACFD3740004695_OFFSET UNITYSDK_OFFSET(0x9EEE400)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_A9E21AEFB7D4CB48_OFFSET UNITYSDK_OFFSET(0x9EEDEE0)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9EEE040)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9EEDFF0)
#define CLASS_1_A64499D9B51BFF0E_METHOD_1_F0037AD495309D81_OFFSET UNITYSDK_OFFSET(0x9EEE560)
#define CLASS_1_A64499D9B51BFF0E_SET_AUTOBUBBLE_OFFSET UNITYSDK_OFFSET(0x9EEE840)
#define CLASS_1_A64499D9B51BFF0E_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9EEE900)
#define CLASS_1_A64499D9B51BFF0E_SET_FAILINPUT_OFFSET UNITYSDK_OFFSET(0x9EEE9E0)
#define CLASS_1_A64499D9B51BFF0E_SET_IGNORELOOP_OFFSET UNITYSDK_OFFSET(0x9EEE980)
#define CLASS_1_A64499D9B51BFF0E_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9EEE800)
#define CLASS_1_A64499D9B51BFF0E_SET_INPUTNOTECOUNT_OFFSET UNITYSDK_OFFSET(0x9EEE880)
#define CLASS_1_A64499D9B51BFF0E_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9EEE820)
#define CLASS_1_A64499D9B51BFF0E_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9EEE960)
#define CLASS_1_A64499D9B51BFF0E_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9EEE940)
#define CLASS_1_A64499D9B51BFF0E_SET_OWNERMODE_OFFSET UNITYSDK_OFFSET(0x9EEE860)
#define CLASS_1_A64499D9B51BFF0E_SET_PERFECTINPUT_OFFSET UNITYSDK_OFFSET(0x9EEE9C0)
#define CLASS_1_A64499D9B51BFF0E_SET_REALENDTIME_OFFSET UNITYSDK_OFFSET(0x9EEE8C0)
#define CLASS_1_A64499D9B51BFF0E_SET_REALSTARTTIME_OFFSET UNITYSDK_OFFSET(0x9EEE8A0)
#define CLASS_1_A64499D9B51BFF0E_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9EEE8E0)
#define CLASS_1_A64499D9B51BFF0E_SET_SUCCESSINPUT_OFFSET UNITYSDK_OFFSET(0x9EEE9A0)
#define CLASS_1_A64499D9B51BFF0E_SET_TUTORIALSCORE_OFFSET UNITYSDK_OFFSET(0x9EEE920)
#define CLASS_1_A64499D9B51BFF0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EEE9F0)
#define CLASS_1_A64499D9B51BFF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x9EECFE0)

inline static constexpr unsigned int Class_1_A64499D9B51BFF0E_TypeDefinitionIndex = 48753;

class Class_1_A64499D9B51BFF0E : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A64499D9B51BFF0E_TypeDefinitionIndex)->GetStaticField(0x477F0);
	}
	::Il2CppArray<::System::String*>* Field_1_22; // 0x10
	::RPG::GameCore::GameEntity* Field_1_16; // 0x18
	::System::Collections::Generic::List_1<::Class_1_502BA065E26E8F2F*>* Field_1_13; // 0x20
	::Il2CppArray<::System::String*>* Field_1_21; // 0x28
	::System::String* Field_1_23; // 0x30
	::Class_1_C27C170A2F991DAF* _OwnerMode_k__BackingField; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_14; // 0x40
	::System::Single _StartTime_k__BackingField; // 0x48
	::System::Single _EndTime_k__BackingField; // 0x4C
	::System::Int32 _Index_k__BackingField; // 0x50
	::System::Int32 _SuccessInput_k__BackingField; // 0x54
	::System::Int32 Field_1_17; // 0x58
	::System::Single _RealStartTime_k__BackingField; // 0x5C
	::System::Single Field_1_25; // 0x60
	::System::Boolean _IsFinish_k__BackingField; // 0x64
	::System::Boolean _AutoBubble_k__BackingField; // 0x65
	::System::Single _RealEndTime_k__BackingField; // 0x68
	::System::Single Field_1_24; // 0x6C
	::System::Boolean _TutorialScore_k__BackingField; // 0x70
	::System::Boolean _IsEmpty_k__BackingField; // 0x71
	::System::Boolean _IgnoreLoop_k__BackingField; // 0x72
	::System::Boolean _IsActive_k__BackingField; // 0x73
	::System::Int32 _FailInput_k__BackingField; // 0x74
	::System::Int32 _PerfectInput_k__BackingField; // 0x78
	::System::Int32 Field_1_15; // 0x7C
	::System::UInt32 _InputNoteCount_k__BackingField; // 0x80

	::System::Void _ctor(::Class_1_C27C170A2F991DAF* a1, ::System::Int32 a2, ::RPG::GameCore::NoteGroupConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C27C170A2F991DAF*, ::System::Int32, ::RPG::GameCore::NoteGroupConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_704182D469158D60(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_704182D469158D60_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9E21AEFB7D4CB48(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_A9E21AEFB7D4CB48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_502BA065E26E8F2F* Method_1_483116EDCB78C64A(::System::Single a1)
	{
		return ((::Class_1_502BA065E26E8F2F*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_483116EDCB78C64A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D73A0E5F2CC5EAE(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_1D73A0E5F2CC5EAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EACFD3740004695(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_7EACFD3740004695_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7E56A59F184B0A(::RPG::Client::NoteInputResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_0A7E56A59F184B0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0037AD495309D81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_F0037AD495309D81_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_INDEX_OFFSET))(this, value);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_ISACTIVE_OFFSET))(this, value);
	}

	::System::Boolean get_AutoBubble()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_AUTOBUBBLE_OFFSET))(this);
	}

	::System::Void set_AutoBubble(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_AUTOBUBBLE_OFFSET))(this, value);
	}

	::Class_1_C27C170A2F991DAF* get_OwnerMode()
	{
		return ((::Class_1_C27C170A2F991DAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_OWNERMODE_OFFSET))(this);
	}

	::System::Void set_OwnerMode(::Class_1_C27C170A2F991DAF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C27C170A2F991DAF*))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_OWNERMODE_OFFSET))(this, value);
	}

	::System::UInt32 get_InputNoteCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_INPUTNOTECOUNT_OFFSET))(this);
	}

	::System::Void set_InputNoteCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_INPUTNOTECOUNT_OFFSET))(this, value);
	}

	::System::Single get_RealStartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_REALSTARTTIME_OFFSET))(this);
	}

	::System::Void set_RealStartTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_REALSTARTTIME_OFFSET))(this, value);
	}

	::System::Single get_RealEndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_REALENDTIME_OFFSET))(this);
	}

	::System::Void set_RealEndTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_REALENDTIME_OFFSET))(this, value);
	}

	::System::Single get_StartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_STARTTIME_OFFSET))(this);
	}

	::System::Void set_StartTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_STARTTIME_OFFSET))(this, value);
	}

	::System::Single get_EndTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_ENDTIME_OFFSET))(this);
	}

	::System::Void set_EndTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_ENDTIME_OFFSET))(this, value);
	}

	::System::Boolean get_TutorialScore()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_TUTORIALSCORE_OFFSET))(this);
	}

	::System::Void set_TutorialScore(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_TUTORIALSCORE_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_ISFINISH_OFFSET))(this, value);
	}

	::System::Boolean get_IsEmpty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_ISEMPTY_OFFSET))(this);
	}

	::System::Void set_IsEmpty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_ISEMPTY_OFFSET))(this, value);
	}

	::System::Boolean get_IgnoreLoop()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_IGNORELOOP_OFFSET))(this);
	}

	::System::Void set_IgnoreLoop(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_IGNORELOOP_OFFSET))(this, value);
	}

	::System::Int32 get_SuccessInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_SUCCESSINPUT_OFFSET))(this);
	}

	::System::Void set_SuccessInput(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_SUCCESSINPUT_OFFSET))(this, value);
	}

	::System::Int32 get_PerfectInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_PERFECTINPUT_OFFSET))(this);
	}

	::System::Void set_PerfectInput(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_PERFECTINPUT_OFFSET))(this, value);
	}

	::System::Int32 get_FailInput()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_GET_FAILINPUT_OFFSET))(this);
	}

	::System::Void set_FailInput(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A64499D9B51BFF0E_SET_FAILINPUT_OFFSET))(this, value);
	}
};
