#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0B8D2DA1AA023B22.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalGameNPCActionBase; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }

#define CLASS_1_E8F9BE72408934F3__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9DD40)

inline static constexpr unsigned int Class_1_E8F9BE72408934F3_TypeDefinitionIndex = 49285;

class Class_1_E8F9BE72408934F3 : public ::System::Object
{
public:
	::MoleMole::GalGame::GalGameNPCActionBase* Field_1_6; // 0x10
	::MoleMole::GalGame::GalGameNPCFadeAction* Field_1_7; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::Enum_3_0B8D2DA1AA023B22 Field_1_0; // 0x24

	::System::Void _ctor(::System::Boolean a1, ::Enum_3_0B8D2DA1AA023B22 a2, ::MoleMole::GalGame::GalGameNPCFadeAction* a3, ::MoleMole::GalGame::GalGameNPCActionBase* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_0B8D2DA1AA023B22, ::MoleMole::GalGame::GalGameNPCFadeAction*, ::MoleMole::GalGame::GalGameNPCActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_E8F9BE72408934F3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
