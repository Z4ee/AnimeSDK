#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61FB8D394B353477;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE77A09A042BE68B_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x15B12560)
#define CLASS_1_AE77A09A042BE68B__CTOR_OFFSET UNITYSDK_OFFSET(0x15B12570)

inline static constexpr unsigned int Class_1_AE77A09A042BE68B_TypeDefinitionIndex = 75796;

class Class_1_AE77A09A042BE68B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_61FB8D394B353477*>* _Entries_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE77A09A042BE68B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_61FB8D394B353477*>* get_Entries()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_61FB8D394B353477*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE77A09A042BE68B_GET_ENTRIES_OFFSET))(this);
	}
};
