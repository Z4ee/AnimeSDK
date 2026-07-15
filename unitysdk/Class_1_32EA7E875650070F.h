#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_32EA7E875650070F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1640C0)

inline static constexpr unsigned int Class_1_32EA7E875650070F_TypeDefinitionIndex = 41162;

class Class_1_32EA7E875650070F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32EA7E875650070F__CTOR_OFFSET))(this);
	}
};
