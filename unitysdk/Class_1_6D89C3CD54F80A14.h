#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_6D89C3CD54F80A14__CTOR_OFFSET UNITYSDK_OFFSET(0x145C5F80)

inline static constexpr unsigned int Class_1_6D89C3CD54F80A14_TypeDefinitionIndex = 62403;

class Class_1_6D89C3CD54F80A14 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_2; // 0x24

	::System::Void _ctor(::System::String* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D89C3CD54F80A14__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
