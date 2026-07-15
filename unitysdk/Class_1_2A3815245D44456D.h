#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GachaItemData; }

#define CLASS_1_2A3815245D44456D_METHOD_1_FAD248A77D67A4B3_OFFSET UNITYSDK_OFFSET(0x183C44B0)

inline static constexpr unsigned int Class_1_2A3815245D44456D_TypeDefinitionIndex = 61380;

class Class_1_2A3815245D44456D : public ::System::Object
{
public:
	static ::RPG::Client::GachaItemData* Method_1_FAD248A77D67A4B3(::System::UInt32 a1)
	{
		return ((::RPG::Client::GachaItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A3815245D44456D_METHOD_1_FAD248A77D67A4B3_OFFSET))(a1);
	}
};
