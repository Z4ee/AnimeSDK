#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_611DAD94AB3EA361.h"
#include "unitysdk/MoleMole/Config/InteractTargetType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_54;
namespace System { class Action; }

#define STRUCT_2_35063B957DD57B6E_METHOD_2_FC545203151D288E_OFFSET UNITYSDK_OFFSET(0x1876B5A0)

inline static constexpr unsigned int Struct_2_35063B957DD57B6E_TypeDefinitionIndex = 89475;

struct alignas(8) Struct_2_35063B957DD57B6E
{
	::MoleMole::HollowChessboard::HollowCell Field_2_3; // 0x10
	::Class_1_43BD383C98B4C0C5_54* Field_2_2; // 0x20
	::MoleMole::Config::InteractTargetType Field_2_1; // 0x28
	::System::Boolean Field_2_0; // 0x2C
	::Enum_3_611DAD94AB3EA361 Field_2_7; // 0x30
	::MoleMole::InputLogicEventType Field_2_6; // 0x34
	::System::Action* Field_2_5; // 0x38

	static ::Struct_2_35063B957DD57B6E Method_2_FC545203151D288E()
	{
		return ((::Struct_2_35063B957DD57B6E(*)())((::PBYTE)hIl2Cpp + STRUCT_2_35063B957DD57B6E_METHOD_2_FC545203151D288E_OFFSET))();
	}
};
