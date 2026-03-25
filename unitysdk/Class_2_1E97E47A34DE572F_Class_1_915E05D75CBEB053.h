#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3BFC5C66FD44F207;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1E97E47A34DE572F_CLASS_1_915E05D75CBEB053__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD31F0)

inline static constexpr unsigned int Class_2_1E97E47A34DE572F_Class_1_915E05D75CBEB053_TypeDefinitionIndex = 58558;

class Class_2_1E97E47A34DE572F_Class_1_915E05D75CBEB053 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_2_3BFC5C66FD44F207* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E97E47A34DE572F_CLASS_1_915E05D75CBEB053__CTOR_OFFSET))(this);
	}
};
