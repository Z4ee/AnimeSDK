#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0B8D2DA1AA023B22.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalGameNPCEnterAction; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }

#define CLASS_1_5FAD9F8E35FCF4B3__CTOR_OFFSET UNITYSDK_OFFSET(0x140E6140)

inline static constexpr unsigned int Class_1_5FAD9F8E35FCF4B3_TypeDefinitionIndex = 46940;

class Class_1_5FAD9F8E35FCF4B3 : public ::System::Object
{
public:
	::MoleMole::GalGame::GalGameNPCFadeAction* Field_1_2; // 0x10
	::MoleMole::GalGame::GalGameNPCEnterAction* Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::Enum_3_0B8D2DA1AA023B22 Field_1_1; // 0x24

	::System::Void _ctor(::System::Boolean a1, ::Enum_3_0B8D2DA1AA023B22 a2, ::MoleMole::GalGame::GalGameNPCFadeAction* a3, ::MoleMole::GalGame::GalGameNPCEnterAction* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_0B8D2DA1AA023B22, ::MoleMole::GalGame::GalGameNPCFadeAction*, ::MoleMole::GalGame::GalGameNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_1_5FAD9F8E35FCF4B3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
