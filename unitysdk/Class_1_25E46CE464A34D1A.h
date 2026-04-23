#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_25E46CE464A34D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x17F62180)

inline static constexpr unsigned int Class_1_25E46CE464A34D1A_TypeDefinitionIndex = 38505;

class Class_1_25E46CE464A34D1A : public ::System::Object
{
public:
	::RPG::GameCore::Match3::GridTag Field_1_1; // 0x10
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25E46CE464A34D1A__CTOR_OFFSET))(this);
	}
};
