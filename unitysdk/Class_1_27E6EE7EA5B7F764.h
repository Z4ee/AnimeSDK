#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_145;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_27E6EE7EA5B7F764_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB7AF9B0)
#define CLASS_1_27E6EE7EA5B7F764_GET_PLACEDCHIPS_OFFSET UNITYSDK_OFFSET(0xB7AF9F0)
#define CLASS_1_27E6EE7EA5B7F764__CTOR_OFFSET UNITYSDK_OFFSET(0xB7AFA00)

inline static constexpr unsigned int Class_1_27E6EE7EA5B7F764_TypeDefinitionIndex = 80137;

class Class_1_27E6EE7EA5B7F764 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_145*>* _PlacedChips_k__BackingField; // 0x10
	::System::UInt32 LCCEPJOFIHI; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_145*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_145*>*))((::PBYTE)hIl2Cpp + CLASS_1_27E6EE7EA5B7F764__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E6EE7EA5B7F764_GET_CACHEKEY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_145*>* get_PlacedChips()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_145*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27E6EE7EA5B7F764_GET_PLACEDCHIPS_OFFSET))(this);
	}
};
