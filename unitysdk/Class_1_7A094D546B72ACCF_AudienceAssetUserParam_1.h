#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_7A094D546B72ACCF_AudienceAssetUserParam_1_TypeDefinitionIndex = 66059;

template <typename T>
class Class_1_7A094D546B72ACCF_AudienceAssetUserParam_1 : public ::System::Object
{
public:
	::System::String* Path; // 0x0
	::System::Collections::Generic::List_1<T>* LoadParams; // 0x0
};
