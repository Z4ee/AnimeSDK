#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5A9D511A32BF6BEE_METHOD_1_A1AC75F5785071D7_OFFSET UNITYSDK_OFFSET(0x113A0A00)

inline static constexpr unsigned int Class_1_5A9D511A32BF6BEE_TypeDefinitionIndex = 86685;

class Class_1_5A9D511A32BF6BEE : public ::System::Object
{
public:
	static ::System::String* Method_1_A1AC75F5785071D7(::MoleMole::Config::DamageElementType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_5A9D511A32BF6BEE_METHOD_1_A1AC75F5785071D7_OFFSET))(a1);
	}
};
