#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_CEE247977E899EAC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBAD2100)
#define CLASS_1_CEE247977E899EAC_METHOD_1_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0xBAD2150)
#define CLASS_1_CEE247977E899EAC__CTOR_OFFSET UNITYSDK_OFFSET(0xBAD2260)

inline static constexpr unsigned int Class_1_CEE247977E899EAC_TypeDefinitionIndex = 49905;

class Class_1_CEE247977E899EAC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEE247977E899EAC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEE247977E899EAC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_676E831338583C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEE247977E899EAC_METHOD_1_676E831338583C9D_OFFSET))(this);
	}
};
