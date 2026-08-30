#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D05CC95F4880E0A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE3900)

inline static constexpr unsigned int Class_1_D05CC95F4880E0A5_TypeDefinitionIndex = 42087;

class Class_1_D05CC95F4880E0A5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::System::Int32>*>* OIJHNGDBCAK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05CC95F4880E0A5__CTOR_OFFSET))(this);
	}
};
