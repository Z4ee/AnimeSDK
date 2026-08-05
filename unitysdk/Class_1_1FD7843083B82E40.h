#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1FD7843083B82E40__CTOR_OFFSET UNITYSDK_OFFSET(0x16688A70)

inline static constexpr unsigned int Class_1_1FD7843083B82E40_TypeDefinitionIndex = 42091;

class Class_1_1FD7843083B82E40 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x10
	::MoleMole::Level::RatingType Field_1_1; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FD7843083B82E40__CTOR_OFFSET))(this);
	}
};
