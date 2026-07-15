#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_7D23BEDBBC457977_TypeDefinitionIndex = 45914;

template <typename T>
class Class_1_7D23BEDBBC457977 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise_1<T>*>* Field_1_0; // 0x0
};
