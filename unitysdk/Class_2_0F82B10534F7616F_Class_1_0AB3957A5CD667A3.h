#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0F82B10534F7616F_CLASS_1_0AB3957A5CD667A3__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB4BA0)

inline static constexpr unsigned int Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3_TypeDefinitionIndex = 53434;

class Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Double Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_0AB3957A5CD667A3__CTOR_OFFSET))(this);
	}
};
