#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_64C3966266CD3F2B__CTOR_OFFSET UNITYSDK_OFFSET(0x180DCF20)

inline static constexpr unsigned int Class_1_64C3966266CD3F2B_TypeDefinitionIndex = 40099;

class Class_1_64C3966266CD3F2B : public ::System::Object
{
public:
	::RPG::GameCore::Match3::GridTag Field_1_0; // 0x10
	::RPG::GameCore::Match3::PieceTag Field_1_1; // 0x14
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C3966266CD3F2B__CTOR_OFFSET))(this);
	}
};
