#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79F4C97127452753;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_936F4381B4CBAB18_CLEAR_OFFSET UNITYSDK_OFFSET(0x18DB7940)
#define CLASS_1_936F4381B4CBAB18_METHOD_1_82D6BFD01E43D4AF_OFFSET UNITYSDK_OFFSET(0x18DB7D00)
#define CLASS_1_936F4381B4CBAB18_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x18DB7E50)
#define CLASS_1_936F4381B4CBAB18_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18DB7C50)
#define CLASS_1_936F4381B4CBAB18_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18DB7CC0)
#define CLASS_1_936F4381B4CBAB18__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB7EF0)

inline static constexpr unsigned int Class_1_936F4381B4CBAB18_TypeDefinitionIndex = 39949;

class Class_1_936F4381B4CBAB18 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::UInt32>*>* Field_1_1; // 0x18
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_79F4C97127452753*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_82D6BFD01E43D4AF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_METHOD_1_82D6BFD01E43D4AF_OFFSET))(this, a1, a2);
	}

	::Class_1_79F4C97127452753* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_79F4C97127452753*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_936F4381B4CBAB18_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}
};
