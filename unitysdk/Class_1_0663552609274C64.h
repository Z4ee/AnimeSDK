#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_0663552609274C64_TypeDefinitionIndex = 74542;

template <typename T>
class Class_1_0663552609274C64 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x0
	T Field_1_7; // 0x0
	::Foundation::AssetRequestHandle Field_1_6; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_5; // 0x0
};
