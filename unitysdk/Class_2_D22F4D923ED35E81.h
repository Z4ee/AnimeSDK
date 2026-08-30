#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_849EE5CF9026AE9F.h"
#include "unitysdk/RPG/Client/TextID.h"

#define CLASS_2_D22F4D923ED35E81_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x15A8C480)
#define CLASS_2_D22F4D923ED35E81__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8C490)

inline static constexpr unsigned int Class_2_D22F4D923ED35E81_TypeDefinitionIndex = 68900;

class Class_2_D22F4D923ED35E81 : public ::Class_1_849EE5CF9026AE9F
{
public:
	::RPG::Client::TextID _Content_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_D22F4D923ED35E81__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Content()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D22F4D923ED35E81_GET_CONTENT_OFFSET))(this);
	}
};
