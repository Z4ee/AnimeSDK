#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_912;
class Class_1_455008579EB95638_109;
class Class_1_F91AD0C5A85E4AFA_34;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEXTJOINMODULE_CLEARPERFORMANCEREPLAYTEXTJOIN_OFFSET UNITYSDK_OFFSET(0xCA1FE10)
#define RPG_CLIENT_TEXTJOINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA1E9D0)
#define RPG_CLIENT_TEXTJOINMODULE_GETAVATARID_OFFSET UNITYSDK_OFFSET(0xCA205E0)
#define RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0xCA20430)
#define RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINVALUE_OFFSET UNITYSDK_OFFSET(0xCA1FEA0)
#define RPG_CLIENT_TEXTJOINMODULE_HASSERVERVALUE_OFFSET UNITYSDK_OFFSET(0xCA202E0)
#define RPG_CLIENT_TEXTJOINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCA1E720)
#define RPG_CLIENT_TEXTJOINMODULE_ISTEXTJOINITEMIDEQUAL_OFFSET UNITYSDK_OFFSET(0xCA200E0)
#define RPG_CLIENT_TEXTJOINMODULE_SENDTEXTJOINQUERYCSREQ_OFFSET UNITYSDK_OFFSET(0xCA1EBF0)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARIDBATCH_OFFSET UNITYSDK_OFFSET(0xCA1F580)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_OFFSET UNITYSDK_OFFSET(0xCA1F300)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xCA1FD10)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_OFFSET UNITYSDK_OFFSET(0xCA1F760)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xCA1FD90)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTIONBATCH_OFFSET UNITYSDK_OFFSET(0xCA1F120)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_OFFSET UNITYSDK_OFFSET(0xCA1EDF0)
#define RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xCA1FA20)
#define RPG_CLIENT_TEXTJOINMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA1EA20)
#define RPG_CLIENT_TEXTJOINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA1EA60)
#define RPG_CLIENT_TEXTJOINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA210D0)
#define RPG_CLIENT_TEXTJOINMODULE__GETAVATARIDPROTO_OFFSET UNITYSDK_OFFSET(0xCA1F400)
#define RPG_CLIENT_TEXTJOINMODULE__GETCUSTOMTEXTPROTO_OFFSET UNITYSDK_OFFSET(0xCA1F860)
#define RPG_CLIENT_TEXTJOINMODULE__GETSELECTIONPROTO_OFFSET UNITYSDK_OFFSET(0xCA1EEF0)
#define RPG_CLIENT_TEXTJOINMODULE__INITTEXTJOINDATA_OFFSET UNITYSDK_OFFSET(0xCA1E7B0)
#define RPG_CLIENT_TEXTJOINMODULE__NOTIFYSAVERESULT_OFFSET UNITYSDK_OFFSET(0xCA20C20)
#define RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET UNITYSDK_OFFSET(0xCA207B0)
#define RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xCA20D70)
#define RPG_CLIENT_TEXTJOINMODULE__SETTEXTJOINVALUES_OFFSET UNITYSDK_OFFSET(0xCA1F050)
#define RPG_CLIENT_TEXTJOINMODULE__UPDATEDATABYSERVER_OFFSET UNITYSDK_OFFSET(0xCA20A80)
#define RPG_CLIENT_TEXTJOINMODULE__UPDATETEXTJOINDATA_PERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xCA1FAA0)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA21250)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCA211D0)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA21260)
#define RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCA212C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextJoinModule_TypeDefinitionIndex = 63755;

	class TextJoinModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_912*>* _TextJoinDataDict_PerformanceReplay; // 0x10
		::System::Action_1<::System::UInt32>* OnTextJoinChange; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_912*>* _TextJoinDataDict; // 0x20
		::System::UInt32 CurOperateID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendTextJoinQueryCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SENDTEXTJOINQUERYCSREQ_OFFSET))(this);
		}

		::System::Void SetTextJoinSelection(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextJoinSelectionBatch(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTIONBATCH_OFFSET))(this, a1);
		}

		::System::Void SetTextJoinAvatarId(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextJoinAvatarIdBatch(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARIDBATCH_OFFSET))(this, a1);
		}

		::System::Void SetTextJoinCustomText(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_OFFSET))(this, a1, a2);
		}

		::Class_1_F91AD0C5A85E4AFA_34* _GetSelectionProto(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::Class_1_F91AD0C5A85E4AFA_34*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETSELECTIONPROTO_OFFSET))(this, a1, a2);
		}

		::Class_1_F91AD0C5A85E4AFA_34* _GetAvatarIDProto(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_F91AD0C5A85E4AFA_34*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETAVATARIDPROTO_OFFSET))(this, a1, a2);
		}

		::Class_1_F91AD0C5A85E4AFA_34* _GetCustomTextProto(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_1_F91AD0C5A85E4AFA_34*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__GETCUSTOMTEXTPROTO_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextJoinSelection_PerformanceReplay(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINSELECTION_PERFORMANCEREPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextJoinAvatarId_PerformanceReplay(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINAVATARID_PERFORMANCEREPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextJoinCustomText_PerformanceReplay(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_SETTEXTJOINCUSTOMTEXT_PERFORMANCEREPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearPerformanceReplayTextJoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_CLEARPERFORMANCEREPLAYTEXTJOIN_OFFSET))(this);
		}

		::System::Void _UpdateTextJoinData_PerformanceReplay(::System::UInt32 a1, ::Class_1_F91AD0C5A85E4AFA_34* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_F91AD0C5A85E4AFA_34*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__UPDATETEXTJOINDATA_PERFORMANCEREPLAY_OFFSET))(this, a1, a2);
		}

		::System::String* GetTextJoinValue(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINVALUE_OFFSET))(this, a1);
		}

		::System::Boolean IsTextJoinItemIdEqual(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_ISTEXTJOINITEMIDEQUAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasServerValue(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_HASSERVERVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 GetTextJoinItemId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_GETTEXTJOINITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 GetAvatarId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE_GETAVATARID_OFFSET))(this, a1);
		}

		::System::Void _SetTextJoinValues(::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_34*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_F91AD0C5A85E4AFA_34*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__SETTEXTJOINVALUES_OFFSET))(this, a1);
		}

		::System::Void _OnTextJoinBatchSaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINBATCHSAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _NotifySaveResult(::Class_1_455008579EB95638_109* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__NOTIFYSAVERESULT_OFFSET))(this, a1);
		}

		::System::Void _OnTextJoinQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__ONTEXTJOINQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateDataByServer(::Class_1_F91AD0C5A85E4AFA_34* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__UPDATEDATABYSERVER_OFFSET))(this, a1);
		}

		::System::Void _InitTextJoinData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE__INITTEXTJOINDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTJOINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
