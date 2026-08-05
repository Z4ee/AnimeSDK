#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_124EF969CBD5C24A.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_47;
class Class_0_16E4307DCC419505_48;
class Class_1_FD893FD36F6A3A6D;
namespace System { class EventArgs; }
namespace System { class EventHandler; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::QuickGraph::Algorithm
{
	inline static constexpr unsigned int AlgorithmBase_1_TypeDefinitionIndex = 28619;

	template <typename TGraph>
	class AlgorithmBase_1 : public ::System::Object
	{
	public:
		TGraph visitedGraph; // 0x0
		::Class_1_FD893FD36F6A3A6D* services; // 0x0
		::System::Object* syncRoot; // 0x0
		::Enum_3_124EF969CBD5C24A state; // 0x0
		::System::EventHandler* StateChanged; // 0x0
		::System::EventHandler* Started; // 0x0
		::System::EventHandler* Finished; // 0x0
		::System::EventHandler* Aborted; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* _services; // 0x0
	};
}
