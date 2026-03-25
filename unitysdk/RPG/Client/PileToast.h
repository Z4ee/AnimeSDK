#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2DBF65AB2D8DEA9B;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class ToastHintItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_PILETOAST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F6BDF0)
#define RPG_CLIENT_PILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0x9F6B6A0)
#define RPG_CLIENT_PILETOAST_START_OFFSET UNITYSDK_OFFSET(0x9F6B8D0)
#define RPG_CLIENT_PILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F6C080)
#define RPG_CLIENT_PILETOAST__ADDTOPILE_OFFSET UNITYSDK_OFFSET(0x9F6B800)
#define RPG_CLIENT_PILETOAST__APPLYLATENCYLAG_OFFSET UNITYSDK_OFFSET(0x9F6D910)
#define RPG_CLIENT_PILETOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6D970)
#define RPG_CLIENT_PILETOAST__ENDMOVING_OFFSET UNITYSDK_OFFSET(0x9F6C880)
#define RPG_CLIENT_PILETOAST__ENTERMOVING_OFFSET UNITYSDK_OFFSET(0x9F6D350)
#define RPG_CLIENT_PILETOAST__FADEIN_OFFSET UNITYSDK_OFFSET(0x9F6C470)
#define RPG_CLIENT_PILETOAST__FADEOUT_OFFSET UNITYSDK_OFFSET(0x9F6C6B0)
#define RPG_CLIENT_PILETOAST__GETNEXTINDEX_OFFSET UNITYSDK_OFFSET(0x9F6D8B0)
#define RPG_CLIENT_PILETOAST__IGNOREPILETOAST_OFFSET UNITYSDK_OFFSET(0x9F6CE20)
#define RPG_CLIENT_PILETOAST__ONASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9F6D420)
#define RPG_CLIENT_PILETOAST__ONHINTITEMLOADFINISH_OFFSET UNITYSDK_OFFSET(0x9F6D840)
#define RPG_CLIENT_PILETOAST__PILESTRING_OFFSET UNITYSDK_OFFSET(0x9F6CC70)
#define RPG_CLIENT_PILETOAST__PILESTRUCT_OFFSET UNITYSDK_OFFSET(0x9F6CB20)
#define RPG_CLIENT_PILETOAST__PILETEXTID_OFFSET UNITYSDK_OFFSET(0x9F6CD50)
#define RPG_CLIENT_PILETOAST__SHOWCENTERTOAST_OFFSET UNITYSDK_OFFSET(0x9F6D040)
#define RPG_CLIENT_PILETOAST__SHOWING_OFFSET UNITYSDK_OFFSET(0x9F6C5F0)
#define RPG_CLIENT_PILETOAST__TOASTCENTERSTRING_OFFSET UNITYSDK_OFFSET(0x9F6D130)
#define RPG_CLIENT_PILETOAST__TOASTCENTERSTRUCT_OFFSET UNITYSDK_OFFSET(0x9F6CEE0)
#define RPG_CLIENT_PILETOAST__TOASTCENTERTEXTID_OFFSET UNITYSDK_OFFSET(0x9F6D1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PileToast_TypeDefinitionIndex = 59803;

	class PileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 ITEM_COUNT = 0x3; // 0x0
		// static const ::System::Single STAY_TIME; // 0x0
		// static const ::System::Single MOVE_TIME; // 0x0
		// static const ::System::Single FADE_TIME; // 0x0
		// static const ::System::Single LATENCY; // 0x0
		::System::Boolean _Moving; // 0x18
		::System::Single _MovingPoint; // 0x1C
		::System::UInt32 _Header; // 0x20
		::Class_1_2DBF65AB2D8DEA9B* _latencyMsg; // 0x28
		::System::Int32 _ReadyItemCount; // 0x30
		::Il2CppArray<::RPG::Client::ToastHintItem*>* _Items; // 0x38
		::System::Collections::Generic::Queue_1<::Class_1_2DBF65AB2D8DEA9B*>* _Msgs; // 0x40
		::System::Boolean _IsIgnore; // 0x48
		::Il2CppArray<::RPG::Client::IAssetOperation*>* _AssetOperations; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__CTOR_OFFSET))(this);
		}

		::System::Void Pile(::System::String* icon1Path, ::System::String* str, ::RPG::Client::TextID textID, ::Il2CppArray<::System::Object*>* textIDArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_PILE_OFFSET))(this, icon1Path, str, textID, textIDArgs);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void _PileStruct(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__PILESTRUCT_OFFSET))(this, param);
		}

		::System::Void _PileString(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__PILESTRING_OFFSET))(this, param);
		}

		::System::Void _PileTextID(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__PILETEXTID_OFFSET))(this, param);
		}

		::System::Void _IgnorePileToast(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__IGNOREPILETOAST_OFFSET))(this, param);
		}

		::System::Void _ToastCenterStruct(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TOASTCENTERSTRUCT_OFFSET))(this, param);
		}

		::System::Void _ToastCenterString(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TOASTCENTERSTRING_OFFSET))(this, param);
		}

		::System::Void _ToastCenterTextID(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TOASTCENTERTEXTID_OFFSET))(this, param);
		}

		::System::Void _ShowCenterToast(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__SHOWCENTERTOAST_OFFSET))(this, content);
		}

		::System::Void _AddToPile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ADDTOPILE_OFFSET))(this);
		}

		::System::Boolean _OnAsyncLoad(::RPG::Client::IAssetOperation* operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ONASYNCLOAD_OFFSET))(this, operation);
		}

		::System::Void _OnHintItemLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ONHINTITEMLOADFINISH_OFFSET))(this);
		}

		::System::Void _FadeIn(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__FADEIN_OFFSET))(this, index);
		}

		::System::Void _Showing(::System::UInt32 index, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__SHOWING_OFFSET))(this, index, deltaTime);
		}

		::System::Void _FadeOut(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__FADEOUT_OFFSET))(this, index);
		}

		::System::Void _EnterMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ENTERMOVING_OFFSET))(this);
		}

		::System::Void _EndMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ENDMOVING_OFFSET))(this);
		}

		::System::UInt32 _GetNextIndex(::System::UInt32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__GETNEXTINDEX_OFFSET))(this, index);
		}

		::System::Void _ApplyLatencyLag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__APPLYLATENCYLAG_OFFSET))(this);
		}
	};
}
