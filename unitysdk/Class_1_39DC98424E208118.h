#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_39DC98424E208118__CTOR_OFFSET UNITYSDK_OFFSET(0x13515F80)

inline static constexpr unsigned int Class_1_39DC98424E208118_TypeDefinitionIndex = 73366;

class Class_1_39DC98424E208118 : public ::System::Object
{
public:
	::RPG::Client::Prop::BoxmanCoord Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39DC98424E208118__CTOR_OFFSET))(this);
	}
};
