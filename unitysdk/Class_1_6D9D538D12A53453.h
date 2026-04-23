#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6D9D538D12A53453__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2AC00)

inline static constexpr unsigned int Class_1_6D9D538D12A53453_TypeDefinitionIndex = 34612;

class Class_1_6D9D538D12A53453 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_3; // 0x10
	::RPG::GameCore::CakeRaceRegionConfig* Field_1_0; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::CakeRaceRegionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6D9D538D12A53453__CTOR_OFFSET))(this, a1);
	}
};
