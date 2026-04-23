#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class HipplenMovingGoodsInputData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_AUTOINPUT_OFFSET UNITYSDK_OFFSET(0x9B0A6C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_CURINDEX_OFFSET UNITYSDK_OFFSET(0x9B0A830)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_ENABLETHREEKEYLAYOUT_OFFSET UNITYSDK_OFFSET(0x9B0A850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_INPUTDATAS_OFFSET UNITYSDK_OFFSET(0x9B0A810)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9B0A870)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_INIT_OFFSET UNITYSDK_OFFSET(0x9B0A0A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_ONINPUT_OFFSET UNITYSDK_OFFSET(0x9B0A3F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_RESET_OFFSET UNITYSDK_OFFSET(0x9B0A290)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SETONCHANGED_OFFSET UNITYSDK_OFFSET(0x9B0A770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SETONFINISHED_OFFSET UNITYSDK_OFFSET(0x9B0A720)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SETONINPUTFINISHED_OFFSET UNITYSDK_OFFSET(0x9B0A7C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_CURINDEX_OFFSET UNITYSDK_OFFSET(0x9B0A840)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_ENABLETHREEKEYLAYOUT_OFFSET UNITYSDK_OFFSET(0x9B0A860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_INPUTDATAS_OFFSET UNITYSDK_OFFSET(0x9B0A820)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9B0A880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ__CTOR_OFFSET UNITYSDK_OFFSET(0x9B0A890)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ__ONINPUTCORRECT_OFFSET UNITYSDK_OFFSET(0x9B0A4C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ__ONINPUTWRONG_OFFSET UNITYSDK_OFFSET(0x9B0A5D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenMovingGoodsInputSeq_TypeDefinitionIndex = 69648;

	class HipplenMovingGoodsInputSeq : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenMovingGoodsInputData*>* _InputDatas_k__BackingField; // 0x10
		::System::Action_1<::System::Boolean>* _OnFinished; // 0x18
		::System::Action_1<::System::Boolean>* _OnInputFinished; // 0x20
		::System::Action* _OnChanged; // 0x28
		::System::Boolean _EnableThreeKeyLayout_k__BackingField; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x31
		::System::Int32 _CurIndex_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::String* requireInputs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_INIT_OFFSET))(this, requireInputs);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_RESET_OFFSET))(this);
		}

		::System::Void OnInput(::System::UInt32 input)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_ONINPUT_OFFSET))(this, input);
		}

		::System::Void AutoInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_AUTOINPUT_OFFSET))(this);
		}

		::System::Void _OnInputCorrect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ__ONINPUTCORRECT_OFFSET))(this);
		}

		::System::Void _OnInputWrong()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ__ONINPUTWRONG_OFFSET))(this);
		}

		::System::Void SetOnFinished(::System::Action_1<::System::Boolean>* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SETONFINISHED_OFFSET))(this, onFinished);
		}

		::System::Void SetOnChanged(::System::Action* onChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SETONCHANGED_OFFSET))(this, onChanged);
		}

		::System::Void SetOnInputFinished(::System::Action_1<::System::Boolean>* onInputFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SETONINPUTFINISHED_OFFSET))(this, onInputFinished);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenMovingGoodsInputData*>* get_InputDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenMovingGoodsInputData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_INPUTDATAS_OFFSET))(this);
		}

		::System::Void set_InputDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenMovingGoodsInputData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::HipplenMovingGoodsInputData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_INPUTDATAS_OFFSET))(this, value);
		}

		::System::Int32 get_CurIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_CURINDEX_OFFSET))(this);
		}

		::System::Void set_CurIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_CURINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_EnableThreeKeyLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_ENABLETHREEKEYLAYOUT_OFFSET))(this);
		}

		::System::Void set_EnableThreeKeyLayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_ENABLETHREEKEYLAYOUT_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENMOVINGGOODSINPUTSEQ_SET_ISFINISHED_OFFSET))(this, value);
		}
	};
}
