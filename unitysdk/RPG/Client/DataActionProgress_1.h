#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_615;
class Class_0_16E4307DCC419505_616;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
class Class_2_8D6A893BEF7BEB75;
class Class_2_BF47C01E9CFEA39C;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T1, typename T2> class ActionEvent_2; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace RPG::Client { template <typename T> class DataActionProgress_1; }
namespace RPG::Client { template <typename T> class DataActionProgress_1_BatchItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DataActionProgress_1_TypeDefinitionIndex = 56903;

	template <typename T>
	class DataActionProgress_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DataActionProgress_1_BatchItem<T>*>* _BatchItems; // 0x0
		::RPG::Client::ProgressID _ID_k__BackingField; // 0x0
		::Class_1_630CB84C93B59414* _Board; // 0x0
		::System::Int32 _ThreadCount; // 0x0
		::Class_1_C6B3B57B6E91674E* _Queue; // 0x0
		::RPG::Client::TextID ProgressDescTextID; // 0x0
		::System::String* _ProgressDescText; // 0x0
		::RPG::Client::NotifyType ProgressNotifyType; // 0x0
		::RPG::Client::TextID EndDescTextID; // 0x0
		::System::String* _EndDescText; // 0x0
		::RPG::Client::NotifyType EndNotifyType; // 0x0
		::RPG::Client::FailedType FailedType; // 0x0
		::Class_2_8D6A893BEF7BEB75* _ActionSystem; // 0x0
		::System::Action_2<::Class_0_16E4307DCC419505_616*, T>* _ActionThread; // 0x0
		::System::Int32 _TotalCount_k__BackingField; // 0x0
		::System::Int32 _SuccessCount_k__BackingField; // 0x0
		::System::Int32 _FailureCount_k__BackingField; // 0x0
		::System::Int32 _FinishCount_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnStarting_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::Class_0_16E4307DCC419505_614*>* _OnSucceed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnFailed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_4<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_3<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnItemFailed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*>* _OnDataStarting_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_2<::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*>* _OnDataSucceed_k__BackingField; // 0x0
		::RPG::Client::ActionEvent_1<::Class_2_BF47C01E9CFEA39C*>* _OnDataFailed_k__BackingField; // 0x0
	};
}
