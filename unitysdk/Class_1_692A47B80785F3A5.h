#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_692A47B80785F3A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1678AD20)

inline static constexpr unsigned int Class_1_692A47B80785F3A5_TypeDefinitionIndex = 33740;

class Class_1_692A47B80785F3A5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceProperty, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_692A47B80785F3A5__CTOR_OFFSET))(this);
	}
};
