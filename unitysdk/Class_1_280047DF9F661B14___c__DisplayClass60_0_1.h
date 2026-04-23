#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_280047DF9F661B14_IndexType.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
namespace RPG::Client { template <typename T> class AbsDownloadData_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass60_0_1_TypeDefinitionIndex = 54905;

template <typename TIndex>
class Class_1_280047DF9F661B14___c__DisplayClass60_0_1 : public ::System::Object
{
public:
	::Class_1_280047DF9F661B14_IndexType type; // 0x0
	::RPG::Client::AbsDownloadData_1<TIndex>* data; // 0x0
	::Class_1_9793A3EE73969A7D_eFileLoaderPosType pos; // 0x0
	::System::Func_2<::Class_0_16E4307DCC419505_69*, ::System::Boolean>* predicate; // 0x0
};
