#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelEventListener; }

#define CLASS_1_F337A9F92447BC21__CTOR_OFFSET UNITYSDK_OFFSET(0x1C33D2C0)

inline static constexpr unsigned int Class_1_F337A9F92447BC21_TypeDefinitionIndex = 40345;

class Class_1_F337A9F92447BC21 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelEventListener* FCLCOAONNCA; // 0x10
	::System::UInt32 NMBKAIEIAPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F337A9F92447BC21__CTOR_OFFSET))(this);
	}
};
