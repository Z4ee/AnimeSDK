#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
class Class_0_16E4307DCC419505_95;
namespace RPG::Client { template <typename T> class AbsDownloadData_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AbsDownloadData_1__OnEnumBlockItems_d__52_TypeDefinitionIndex = 56805;

	template <typename TIndex>
	class AbsDownloadData_1__OnEnumBlockItems_d__52 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::Class_0_16E4307DCC419505_87* __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::RPG::Client::AbsDownloadData_1<TIndex>* __4__this; // 0x0
		::Class_0_16E4307DCC419505_95* _indexInfo_5__2; // 0x0
		::System::Int32 _count_5__3; // 0x0
		::System::Int32 _i_5__4; // 0x0
	};
}
