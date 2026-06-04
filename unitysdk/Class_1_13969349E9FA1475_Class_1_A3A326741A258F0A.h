#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13969349E9FA1475_CLASS_1_A3A326741A258F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9FDB0)

inline static constexpr unsigned int Class_1_13969349E9FA1475_Class_1_A3A326741A258F0A_TypeDefinitionIndex = 34974;

class Class_1_13969349E9FA1475_Class_1_A3A326741A258F0A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13969349E9FA1475_CLASS_1_A3A326741A258F0A__CTOR_OFFSET))(this);
	}
};
