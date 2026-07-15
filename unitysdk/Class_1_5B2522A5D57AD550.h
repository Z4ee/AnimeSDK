#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9ADD1D872350330F;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_5B2522A5D57AD550_CLEAR_OFFSET UNITYSDK_OFFSET(0x19CB5440)
#define CLASS_1_5B2522A5D57AD550__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB5520)

inline static constexpr unsigned int Class_1_5B2522A5D57AD550_TypeDefinitionIndex = 40124;

class Class_1_5B2522A5D57AD550 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* Field_1_1; // 0x18
	::RPG::PoolList_1<::System::UInt32>* Field_1_2; // 0x20
	::RPG::PoolList_1<::System::UInt32>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2522A5D57AD550__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B2522A5D57AD550_CLEAR_OFFSET))(this);
	}
};
