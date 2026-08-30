#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C64654983E504591_RoomScopedDisableMask.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C64654983E504591_CLASS_1_39B0C25BC13C8657__CTOR_OFFSET UNITYSDK_OFFSET(0x18960110)

inline static constexpr unsigned int Class_1_C64654983E504591_Class_1_39B0C25BC13C8657_TypeDefinitionIndex = 76239;

class Class_1_C64654983E504591_Class_1_39B0C25BC13C8657 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* FIKPCIDLEOD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C64654983E504591_RoomScopedDisableMask>* BMBFPDLIDIC; // 0x18
	::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* HNLIKBGLLAK; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* LNALMDKMCND; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>*>* FNBFGFKAKLM; // 0x30
	::System::Boolean HNBFBCHJHFL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64654983E504591_CLASS_1_39B0C25BC13C8657__CTOR_OFFSET))(this);
	}
};
