#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_FA000C9EFE98E3A4_TypeDefinitionIndex = 50413;

template <typename T>
class Class_1_FA000C9EFE98E3A4 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x0
	T Field_1_1; // 0x0
	::Foundation::AssetRequestHandle Field_1_2; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_1_3; // 0x0
};
