#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1110;
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DD60)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_GET_QUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xE45AA90)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DD70)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_SYNCCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xE45DD90)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0xE45DD80)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionPersonalProgress_TypeDefinitionIndex = 68263;

	class VoracityInvasionPersonalProgress : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1110* _DependencyProvider; // 0x10
		::System::UInt32 _CurProgress_k__BackingField; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_1110* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1110*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* get_QuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_GET_QUESTDATALIST_OFFSET))(this);
		}

		::System::Void SyncCurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS_SYNCCURPROGRESS_OFFSET))(this, a1);
		}
	};
}
