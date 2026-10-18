#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A87CD80B27DAD5E;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_6108145692DE22E9_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x16598380)
#define CLASS_1_6108145692DE22E9_GET_ID_OFFSET UNITYSDK_OFFSET(0x16598390)
#define CLASS_1_6108145692DE22E9_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x165983B0)
#define CLASS_1_6108145692DE22E9_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x165983A0)
#define CLASS_1_6108145692DE22E9__CTOR_OFFSET UNITYSDK_OFFSET(0x165983C0)

inline static constexpr unsigned int Class_1_6108145692DE22E9_TypeDefinitionIndex = 80095;

class Class_1_6108145692DE22E9 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* _ParamList_k__BackingField; // 0x10
	::System::Int32 _CacheKey_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x1C
	::RPG::Client::MechCraft::MechCraftConditionType _Type_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_7A87CD80B27DAD5E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A87CD80B27DAD5E*))((::PBYTE)hIl2Cpp + CLASS_1_6108145692DE22E9__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6108145692DE22E9_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6108145692DE22E9_GET_ID_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftConditionType get_Type()
	{
		return ((::RPG::Client::MechCraft::MechCraftConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6108145692DE22E9_GET_TYPE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_ParamList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6108145692DE22E9_GET_PARAMLIST_OFFSET))(this);
	}
};
