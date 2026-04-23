#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B14FEDC7F1A12D0E_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xAA18010)
#define CLASS_1_B14FEDC7F1A12D0E_GET_RARITYLIST_OFFSET UNITYSDK_OFFSET(0xAA18020)
#define CLASS_1_B14FEDC7F1A12D0E__CTOR_OFFSET UNITYSDK_OFFSET(0xAA18030)

inline static constexpr unsigned int Class_1_B14FEDC7F1A12D0E_TypeDefinitionIndex = 69479;

class Class_1_B14FEDC7F1A12D0E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _RarityList_k__BackingField; // 0x10
	::System::UInt32 _EntityRuntimeId_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B14FEDC7F1A12D0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_EntityRuntimeId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B14FEDC7F1A12D0E_GET_ENTITYRUNTIMEID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_RarityList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B14FEDC7F1A12D0E_GET_RARITYLIST_OFFSET))(this);
	}
};
