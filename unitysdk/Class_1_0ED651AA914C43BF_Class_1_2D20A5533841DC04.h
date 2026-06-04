#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF51380)
#define CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF51410)
#define CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04_GET_PLACEDAVATARBASEIDS_OFFSET UNITYSDK_OFFSET(0xBF51480)
#define CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04__CTOR_OFFSET UNITYSDK_OFFSET(0xBF51490)

inline static constexpr unsigned int Class_1_0ED651AA914C43BF_Class_1_2D20A5533841DC04_TypeDefinitionIndex = 63179;

class Class_1_0ED651AA914C43BF_Class_1_2D20A5533841DC04 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _PlacedAvatarBaseIDs_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PlacedAvatarBaseIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0ED651AA914C43BF_CLASS_1_2D20A5533841DC04_GET_PLACEDAVATARBASEIDS_OFFSET))(this);
	}
};
