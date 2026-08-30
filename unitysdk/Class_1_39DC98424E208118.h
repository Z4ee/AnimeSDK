#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanCoord.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_39DC98424E208118__CTOR_OFFSET UNITYSDK_OFFSET(0x1526EDC0)

inline static constexpr unsigned int Class_1_39DC98424E208118_TypeDefinitionIndex = 78377;

class Class_1_39DC98424E208118 : public ::System::Object
{
public:
	::System::Boolean CBFJNLKKMDC; // 0x10
	::RPG::Client::Prop::BoxmanCoord FOCNBOANONM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39DC98424E208118__CTOR_OFFSET))(this);
	}
};
